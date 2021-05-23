// Auto-generated file. Do not edit!
//   Template: src/qs8-gemm/MRx8c8-avx2.c.in
//   Generator: tools/xngen
//
// Copyright 2020 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <immintrin.h>

#include <xnnpack/gemm.h>
#include <xnnpack/intrinsics-polyfill.h>
#include <xnnpack/math.h>


void xnn_qs8_gemm_xw_minmax_ukernel_1x8c8__avx2(
    size_t mr,
    size_t nc,
    size_t kc,
    const int8_t* restrict a,
    size_t a_stride,
    const void* restrict w,
    int8_t* restrict c,
    size_t cm_stride,
    size_t cn_stride,
    const union xnn_qs8_gemm_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_DISABLE_TSAN XNN_DISABLE_MSAN
{
  assert(mr != 0);
  assert(mr <= 1);
  assert(nc != 0);
  assert(kc != 0);
  assert(kc % sizeof(int8_t) == 0);
  assert(a != NULL);
  assert(w != NULL);
  assert(c != NULL);

  kc = round_up_po2(kc, 8);
  const int8_t* a0 = a;
  int8_t* c0 = c;

  do {
    const __m128i vbias0x0 = _mm_loadu_si32(w);
    const __m128i vbias0x1 = _mm_loadu_si32((const void*) ((uintptr_t) w + sizeof(int32_t)));
    __m256i vacc0x01 = _mm256_inserti128_si256(_mm256_castsi128_si256(vbias0x0), vbias0x1, 1);
    const __m128i vbias0x2 = _mm_loadu_si32((const void*) ((uintptr_t) w + 2 * sizeof(int32_t)));
    const __m128i vbias0x3 = _mm_loadu_si32((const void*) ((uintptr_t) w + 3 * sizeof(int32_t)));
    __m256i vacc0x23 = _mm256_inserti128_si256(_mm256_castsi128_si256(vbias0x2), vbias0x3, 1);
    const __m128i vbias0x4 = _mm_loadu_si32((const void*) ((uintptr_t) w + 4 * sizeof(int32_t)));
    const __m128i vbias0x5 = _mm_loadu_si32((const void*) ((uintptr_t) w + 5 * sizeof(int32_t)));
    __m256i vacc0x45 = _mm256_inserti128_si256(_mm256_castsi128_si256(vbias0x4), vbias0x5, 1);
    const __m128i vbias0x6 = _mm_loadu_si32((const void*) ((uintptr_t) w + 6 * sizeof(int32_t)));
    const __m128i vbias0x7 = _mm_loadu_si32((const void*) ((uintptr_t) w + 7 * sizeof(int32_t)));
    __m256i vacc0x67 = _mm256_inserti128_si256(_mm256_castsi128_si256(vbias0x6), vbias0x7, 1);
    w = (const void*) ((uintptr_t) w + 8 * sizeof(int32_t));

    size_t k = 0;
    while (k < kc) {
      const __m128i va0 = _mm_broadcastq_epi64(_mm_loadl_epi64((const __m128i*) a0));
      const __m256i vxa0 = _mm256_cvtepi8_epi16(va0);
      a0 += 8;

      const __m256i vxb01 = _mm256_load_si256((const __m256i*) w);

      vacc0x01 = _mm256_add_epi32(vacc0x01, _mm256_madd_epi16(vxa0, vxb01));
      const __m256i vxb23 = _mm256_load_si256((const __m256i*) ((uintptr_t) w + 16 * sizeof(int16_t)));

      vacc0x23 = _mm256_add_epi32(vacc0x23, _mm256_madd_epi16(vxa0, vxb23));
      const __m256i vxb45 = _mm256_load_si256((const __m256i*) ((uintptr_t) w + 32 * sizeof(int16_t)));

      vacc0x45 = _mm256_add_epi32(vacc0x45, _mm256_madd_epi16(vxa0, vxb45));
      const __m256i vxb67 = _mm256_load_si256((const __m256i*) ((uintptr_t) w + 48 * sizeof(int16_t)));

      vacc0x67 = _mm256_add_epi32(vacc0x67, _mm256_madd_epi16(vxa0, vxb67));

      w = (const void*) ((uintptr_t) w + 64 * sizeof(int16_t));
      k += 8 * sizeof(int8_t);
    }

    const __m256i vacc0x0213 = _mm256_hadd_epi32(vacc0x01, vacc0x23);
    const __m256i vacc0x4657 = _mm256_hadd_epi32(vacc0x45, vacc0x67);

    const __m256i vacc0x02461357 = _mm256_hadd_epi32(vacc0x0213, vacc0x4657);

    const __m256i vpermute_mask = _mm256_set_epi32(7, 3, 6, 2, 5, 1, 4, 0);
    __m256i vacc0x01234567 = _mm256_permutevar8x32_epi32(vacc0x02461357, vpermute_mask);

    const __m256i vmultiplier = _mm256_load_si256((const __m256i*) params->avx2.multiplier);
    const __m256i vrounding = _mm256_load_si256((const __m256i*) params->avx2.rounding);

    const __m256i vacc0x11335577 = _mm256_srli_epi64(vacc0x01234567, 32);

    const __m256i vprod0x0246 = _mm256_add_epi64(_mm256_mul_epi32(vacc0x01234567, vmultiplier), vrounding);

    const __m256i vprod0x1357 = _mm256_add_epi64(_mm256_mul_epi32(vacc0x11335577, vmultiplier), vrounding);

    const __m256i vq31prod0x0246 = _mm256_srli_epi64(vprod0x0246, 31);
    const __m256i vq31prod0x1357 = _mm256_add_epi64(vprod0x1357, vprod0x1357);

    const __m256i vq31prod0x01234567 = _mm256_blend_epi16(vq31prod0x0246, vq31prod0x1357, 0xCC);

    const __m256i vremainder_mask = _mm256_load_si256((const __m256i*) params->avx2.remainder_mask);
    const __m256i vrem0x01234567 =
      _mm256_add_epi32(_mm256_and_si256(vq31prod0x01234567, vremainder_mask), _mm256_cmpgt_epi32(_mm256_setzero_si256(), vq31prod0x01234567));

    const __m256i vremainder_threshold = _mm256_load_si256((const __m256i*) params->avx2.remainder_threshold);
    const __m128i vshift = _mm_load_si128((const __m128i*) params->avx2.shift);
    vacc0x01234567 =
      _mm256_sub_epi32(_mm256_sra_epi32(vq31prod0x01234567, vshift), _mm256_cmpgt_epi32(vrem0x01234567, vremainder_threshold));

    const __m256i voutput_zero_point = _mm256_load_si256((const __m256i*) params->avx2.output_zero_point);
    __m256i vacc00x01234567 = _mm256_adds_epi16(_mm256_packs_epi32(vacc0x01234567, vacc0x01234567), voutput_zero_point);

    vacc00x01234567 = _mm256_permute4x64_epi64(vacc00x01234567, _MM_SHUFFLE(3, 1, 2, 0));

    __m256i vout = _mm256_packs_epi16(vacc00x01234567, vacc00x01234567);

    vout = _mm256_max_epi8(vout, _mm256_load_si256((const __m256i*) params->avx2.output_min));
    vout = _mm256_min_epi8(vout, _mm256_load_si256((const __m256i*) params->avx2.output_max));

    __m128i vout_lo = _mm256_castsi256_si128(vout);
    __m128i vout_hi = _mm256_extracti128_si256(vout, 1);

    if (nc >= 8) {
      _mm_storel_epi64((__m128i*) c0, vout_lo);

      c0 = (int8_t*) ((uintptr_t) c0 + cn_stride);

      a0 = (const int8_t*) ((uintptr_t) a0 - kc);

      nc -= 8;
    } else {
      if (nc & 4) {
        _mm_storeu_si32(c0, vout_lo);

        c0 += 4;

        vout_lo = _mm_srli_epi64(vout_lo, 32);
        vout_hi = _mm_srli_epi64(vout_hi, 32);
      }
      if (nc & 2) {
        *((uint16_t*) c0) = (uint16_t) _mm_extract_epi16(vout_lo, 0);

        c0 += 2;

        vout_lo = _mm_srli_epi32(vout_lo, 16);
        vout_hi = _mm_srli_epi32(vout_hi, 16);
      }
      if (nc & 1) {
        *c0 = (int8_t) _mm_extract_epi8(vout_lo, 0);
      }

      nc = 0;
    }
  } while (nc != 0);
}
