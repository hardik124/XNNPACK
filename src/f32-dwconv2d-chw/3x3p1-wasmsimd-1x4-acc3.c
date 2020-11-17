// Copyright 2020 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <wasm_simd128.h>


#include <xnnpack/dwconv.h>
#include <xnnpack/math.h>

static v128_t concat_hi_f32(v128_t a, v128_t b) {
  return wasm_v32x4_shuffle(a, b, 2, 3, 4+2, 4+3);
}

static v128_t rotright_f32(v128_t a) {
  return wasm_v32x4_shuffle(a, a, 3, 0, 1, 2);
}

static v128_t rotleft_f32(v128_t a) {
  return wasm_v32x4_shuffle(a, a, 1, 2, 3, 0);
}

static v128_t movess_f32(v128_t a, v128_t b) {
  return wasm_v32x4_shuffle(a, b, 4, 1, 2, 3);
}

void xnn_f32_dwconv2d_chw_ukernel_3x3p1__wasmsimd_arm_1x4_acc3(
    size_t input_height,
    size_t input_width,
    const float* input,
    const float* weights,
    const float* zero,
    float* output,
    uint32_t padding_top,
    const union xnn_f32_chw_params params[restrict XNN_MIN_ELEMENTS(1)])
{
  assert(input_height != 0);
  assert(input_width != 0);
  assert(input_width % sizeof(float) == 0);
  assert(padding_top == 1);

  const v128_t vmask = wasm_v128_load(params->scalar.mask);
  const v128_t vmax = wasm_v32x4_load_splat(&params->scalar.max);
  const v128_t vmin = wasm_v32x4_load_splat(&params->scalar.min);

  const v128_t vbias = wasm_v32x4_load_splat(weights);
  const v128_t vk00 = wasm_v32x4_load_splat(weights + 1);
  const v128_t vk01 = wasm_v32x4_load_splat(weights + 2);
  const v128_t vk02 = wasm_v32x4_load_splat(weights + 3);
  const v128_t vk10 = wasm_v32x4_load_splat(weights + 4);
  const v128_t vk11 = wasm_v32x4_load_splat(weights + 5);
  const v128_t vk12 = wasm_v32x4_load_splat(weights + 6);
  const v128_t vk20 = wasm_v32x4_load_splat(weights + 7);
  const v128_t vk21 = wasm_v32x4_load_splat(weights + 8);
  const v128_t vk22 = wasm_v32x4_load_splat(weights + 9);

  const size_t input_decrement = round_up_po2(input_width, 4 * sizeof(float));

  const float* i0 = zero;
  const float* i1 = input;
  const float* i2 = (const float*) ((uintptr_t) i1 + input_width);

  size_t output_height = input_height;
  do {
    if XNN_UNPREDICTABLE(output_height == 1) {
      i2 = zero;
    }

    // vi0x3012 = ( vi02, vi01, vi00, vi03 )
    v128_t vi0x3012 = wasm_f32x4_splat(0.0f);
    // vi1x3012 = ( vi12, vi11, vi10, vi13 )
    v128_t vi1x3012 = wasm_f32x4_splat(0.0f);
    // vi2x3012 = ( vi22, vi21, vi20, vi13 )
    v128_t vi2x3012 = wasm_f32x4_splat(0.0f);
    // vi0x4567 = ( vi07, vi06, vi05, vi04 )
    v128_t vi0x4567 = wasm_v128_load(i0);
    i0 += 4;
    // vi1x4567 = ( vi17, vi16, vi15, vi14 )
    v128_t vi1x4567 = wasm_v128_load(i1);
    i1 += 4;
    // vi2x4567 = ( vi27, vi26, vi25, vi24 )
    v128_t vi2x4567 = wasm_v128_load(i2);
    i2 += 4;

    size_t w = input_width;
    for (; w > 4 * sizeof(float); w -= 4 * sizeof(float)) {
      v128_t vo4567p0 = vbias;

      // vi0x89AB = ( vi0B, vi0A, vi09, vi08 )
      const v128_t vi0x89AB = wasm_v128_load(i0);
      i0 += 4;
      // vi1x89AB = ( vi1B, vi0A, vi09, vi08 )
      const v128_t vi1x89AB = wasm_v128_load(i1);
      i1 += 4;
      // vi2x89AB = ( vi2B, vi0A, vi09, vi08 )
      const v128_t vi2x89AB = wasm_v128_load(i2);
      i2 += 4;

      // vi0x7456 = ( vi06, vi05, vi04, vi07 )
      const v128_t vi0x7456 = rotright_f32(vi0x4567);
      // vi1x7456 = ( vi16, vi15, vi14, vi17 )
      const v128_t vi1x7456 = rotright_f32(vi1x4567);
      // vi2x7456 = ( vi26, vi25, vi24, vi27 )
      const v128_t vi2x7456 = rotright_f32(vi2x4567);

      vo4567p0 = wasm_f32x4_add(vo4567p0, wasm_f32x4_mul(vi0x4567, vk01));
      v128_t vo4567p1 = wasm_f32x4_mul(vi1x4567, vk11);
      v128_t vo4567p2 = wasm_f32x4_mul(vi2x4567, vk21);

      // vi0x3456 = ( vi06, vi05, vi04, vi03 )
      const v128_t vi0x3456 = movess_f32(vi0x7456, vi0x3012);
      // vi1x3456 = ( vi16, vi15, vi14, vi13 )
      const v128_t vi1x3456 = movess_f32(vi1x7456, vi1x3012);
      // vi2x3456 = ( vi26, vi25, vi24, vi23 )
      const v128_t vi2x3456 = movess_f32(vi2x7456, vi2x3012);

      vo4567p0 = wasm_f32x4_add(vo4567p0, wasm_f32x4_mul(vi0x3456, vk00));
      vo4567p1 = wasm_f32x4_add(vo4567p1, wasm_f32x4_mul(vi1x3456, vk10));
      vo4567p2 = wasm_f32x4_add(vo4567p2, wasm_f32x4_mul(vi2x3456, vk20));

      vi0x3012 = vi0x7456;
      vi1x3012 = vi1x7456;
      vi2x3012 = vi2x7456;

      // vi0x8567 = ( vi07, vi06, vi05, vi08 )
      const v128_t vi0x8567 = movess_f32(vi0x4567, vi0x89AB);
      // vi1x8567 = ( vi17, vi16, vi15, vi18 )
      const v128_t vi1x8567 = movess_f32(vi1x4567, vi1x89AB);
      // vi2x8567 = ( vi27, vi26, vi25, vi28 )
      const v128_t vi2x8567 = movess_f32(vi2x4567, vi2x89AB);

      // vi0x5678 = ( vi08, vi07, vi06, vi05 )
      const v128_t vi0x5678 = rotleft_f32(vi0x8567);
      // vi1x5678 = ( vi18, vi17, vi16, vi15 )
      const v128_t vi1x5678 = rotleft_f32(vi1x8567);
      // vi2x5678 = ( vi28, vi27, vi26, vi25 )
      const v128_t vi2x5678 = rotleft_f32(vi2x8567);

      vo4567p0 = wasm_f32x4_add(vo4567p0, wasm_f32x4_mul(vi0x5678, vk02));
      vo4567p1 = wasm_f32x4_add(vo4567p1, wasm_f32x4_mul(vi1x5678, vk12));
      vo4567p2 = wasm_f32x4_add(vo4567p2, wasm_f32x4_mul(vi2x5678, vk22));

      vi0x4567 = vi0x89AB;
      vi1x4567 = vi1x89AB;
      vi2x4567 = vi2x89AB;

      v128_t vo = wasm_f32x4_add(vo4567p0, vo4567p1);
      vo = wasm_f32x4_add(vo, vo4567p2);

      vo = wasm_f32x4_max(vo, vmin);
      vo = wasm_f32x4_min(vo, vmax);

      wasm_v128_store(output, vo);
      output += 4;
    }
    // Always process the last block of 1..4 pixels.
    assert(w >= 1 * sizeof(float));
    assert(w <= 4 * sizeof(float));
    {
      v128_t vo4567p0 = vbias;

      vi0x4567 = wasm_v128_and(vmask, vi0x4567);
      vi1x4567 = wasm_v128_and(vmask, vi1x4567);
      vi2x4567 = wasm_v128_and(vmask, vi2x4567);

      // vi0x7456 = ( vi06, vi05, vi04, vi07 )
      const v128_t vi0x7456 = rotright_f32(vi0x4567);
      // vi1x7456 = ( vi16, vi15, vi14, vi17 )
      const v128_t vi1x7456 = rotright_f32(vi1x4567);
      // vi2x7456 = ( vi26, vi25, vi24, vi27 )
      const v128_t vi2x7456 = rotright_f32(vi2x4567);

      vo4567p0 = wasm_f32x4_add(vo4567p0, wasm_f32x4_mul(vi0x4567, vk01));
      v128_t vo4567p1 = wasm_f32x4_mul(vi1x4567, vk11);
      v128_t vo4567p2 = wasm_f32x4_mul(vi2x4567, vk21);

      // vi0x3456 = ( vi06, vi05, vi04, vi03 )
      const v128_t vi0x3456 = movess_f32(vi0x7456, vi0x3012);
      // vi1x3456 = ( vi16, vi15, vi14, vi13 )
      const v128_t vi1x3456 = movess_f32(vi1x7456, vi1x3012);
      // vi2x3456 = ( vi26, vi25, vi24, vi23 )
      const v128_t vi2x3456 = movess_f32(vi2x7456, vi2x3012);

      vo4567p0 = wasm_f32x4_add(vo4567p0, wasm_f32x4_mul(vi0x3456, vk00));
      vo4567p1 = wasm_f32x4_add(vo4567p1, wasm_f32x4_mul(vi1x3456, vk10));
      vo4567p2 = wasm_f32x4_add(vo4567p2, wasm_f32x4_mul(vi2x3456, vk20));

      const v128_t vzero = wasm_f32x4_splat(0.0f);
      // vi0x8567 = ( vi07, vi06, vi05, 0.0 )
      const v128_t vi0x8567 = movess_f32(vi0x4567, vzero);
      // vi1x8567 = ( vi17, vi16, vi15, 0.0 )
      const v128_t vi1x8567 = movess_f32(vi1x4567, vzero);
      // vi2x8567 = ( vi27, vi26, vi25, 0.0 )
      const v128_t vi2x8567 = movess_f32(vi2x4567, vzero);

      // vi0x5678 = ( vi08, vi07, vi06, vi05 )
      const v128_t vi0x5678 = rotleft_f32(vi0x8567);
      // vi1x5678 = ( vi18, vi17, vi16, vi15 )
      const v128_t vi1x5678 = rotleft_f32(vi1x8567);
      // vi2x5678 = ( vi28, vi27, vi26, vi25 )
      const v128_t vi2x5678 = rotleft_f32(vi2x8567);

      vo4567p0 = wasm_f32x4_add(vo4567p0, wasm_f32x4_mul(vi0x5678, vk02));
      vo4567p1 = wasm_f32x4_add(vo4567p1, wasm_f32x4_mul(vi1x5678, vk12));
      vo4567p2 = wasm_f32x4_add(vo4567p2, wasm_f32x4_mul(vi2x5678, vk22));

      v128_t vo = wasm_f32x4_add(vo4567p0, vo4567p1);
      vo = wasm_f32x4_add(vo, vo4567p2);

      vo = wasm_f32x4_max(vo, vmin);
      vo = wasm_f32x4_min(vo, vmax);

      if XNN_LIKELY(w == 4 * sizeof(float)) {
        wasm_v128_store(output, vo);
        output += 4;
      } else {
        if (w & (2 * sizeof(float))) {
          *((double*) output) = wasm_f64x2_extract_lane(vo, 0);
          output += 2;
          vo = concat_hi_f32(vo, vo);
        }
        if (w & (1 * sizeof(float))) {
          *output = wasm_f32x4_extract_lane(vo, 0);
          output += 1;
        }
      }
    }

    i0 = (const float*) ((uintptr_t) i1 - input_decrement);
    i1 = (const float*) ((uintptr_t) i2 - input_decrement);
    i2 = (const float*) ((uintptr_t) i1 + input_width);
  } while (--output_height != 0);
}
