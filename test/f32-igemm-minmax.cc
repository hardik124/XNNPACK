// Copyright (c) Facebook, Inc. and its affiliates.
// All rights reserved.
//
// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-igemm-minmax.yaml
//   Generator: tools/generate-gemm-test.py


#include <gtest/gtest.h>

#include <xnnpack/allocator.h>
#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/gemm.h>
#include <xnnpack/igemm.h>
#include <xnnpack/ppmm.h>
#include "gemm-microkernel-tester.h"


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD128, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld128, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(67)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(67)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(16)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AARCH64_NEONFMA_CORTEX_A75, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_lt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 12; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 12; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH64_NEONFMA_CORTEX_A53, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A7, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a7, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A75, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_PRFM_CORTEX_A75, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__AARCH32_NEON_CORTEX_A55, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__aarch32_neon_cortex_a55, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(16)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(211)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(211)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_CORTEX_A75, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(16)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(211)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(211)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_lt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 9; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 12; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 12; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A53, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a53, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(16)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(251)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(251)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_CORTEX_A73, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_cortex_a73, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY
  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_8_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_8_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(8)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(16)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_eq_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(16)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_lt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_lt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_gt_16) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_gt_16_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 17; k < 32; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, k_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 24; k <= 80; k += 8) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 40; k += 9) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(251)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 40; k += 9) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(251)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AARCH64_NEONFMA_PRFM_CORTEX_A75, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(8)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__aarch64_neonfma_prfm_cortex_a75, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64 && XNN_ENABLE_ASSEMBLY


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(2)
      .cn_stride(5)
      .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(2)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 2; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, n_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, n_gt_2_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, n_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, n_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, n_div_2_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, n_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, n_gt_2_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, n_div_2_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(5)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(2)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X2__NEON_LANE_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(2)
      .cm_stride(5)
      .Test(xnn_f32_igemm_minmax_ukernel_4x2__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .cn_stride(7)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(4)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, n_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, n_gt_4_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, n_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, n_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, n_div_4_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, n_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, n_gt_4_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, n_div_4_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEON_LANE_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .cm_stride(7)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(67)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(67)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_LANE_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .cn_stride(7)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(4)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, n_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, n_gt_4_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, n_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, n_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, n_div_4_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, n_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, n_gt_4_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, n_div_4_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X4__NEONFMA_LANE_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(2)
      .cm_stride(7)
      .Test(xnn_f32_igemm_minmax_ukernel_4x4__neonfma_lane_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_LANE_LD128, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_lane_ld128, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(13)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(13)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEON_DUP_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(67)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(67)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEON_DUP_LD128, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neon_dup_ld128, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(13)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(13)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__NEONFMA_DUP_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 2; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 3; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 4; k <= 20; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(67)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(67)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__NEONFMA_DUP_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__neonfma_dup_ld64, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEON, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 8; m++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t m = 1; m <= 8; m++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 8; mz++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, qmin) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, qmax) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEON, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neon, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__NEONFMA, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(127)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(127)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8S4__NEONFMA, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(6)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_eq_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 8; m++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t m = 1; m <= 8; m++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_lt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_lt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_gt_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_gt_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_div_4) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, n_gt_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, n_div_8) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, a_offset) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(163)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, zero) {
    TEST_REQUIRES_ARM_NEON_FMA;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 8; mz++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(8)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(163)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, qmin) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, qmax) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8S4__NEONFMA, strided_cm) {
    TEST_REQUIRES_ARM_NEON_FMA;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(8)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8s4__neonfma, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, k_eq_1) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, strided_cn) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, k_eq_1_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, k_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, k_gt_1_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, n_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, n_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, n_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, n_div_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, a_offset) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(17)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, zero) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(17)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, qmin) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, qmax) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_LOAD1, strided_cm) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, k_eq_1) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, strided_cn) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, k_eq_1_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, k_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, k_gt_1_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, n_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, n_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, n_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, n_div_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, a_offset) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, zero) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, qmin) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, qmax) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__SSE_LOAD1, strided_cm) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, k_eq_1) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, strided_cn) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, k_eq_1_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, k_gt_1) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, k_gt_1_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, n_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, n_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, n_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, n_div_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, a_offset) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(29)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, zero) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(29)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, qmin) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, qmax) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_LOAD1, strided_cm) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_load1, xnn_init_f32_minmax_sse_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_eq_4) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, strided_cn) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_eq_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_eq_4_subtile_m) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_eq_4_subtile_n) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_lt_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, k_div_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, n_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, n_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, n_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, n_div_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, a_offset) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(67)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, zero) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(67)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, qmin) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, qmax) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__SSE_DUP, strided_cm) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_eq_4) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, strided_cn) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_eq_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_eq_4_subtile_m) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_eq_4_subtile_n) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_lt_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, k_div_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, n_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, n_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, n_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, n_div_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, a_offset) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(103)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, zero) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(103)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, qmin) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, qmax) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE_DUP, strided_cm) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse_dup, xnn_init_f32_minmax_sse_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_eq_4) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(3)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, strided_cn) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(3)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_eq_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_eq_4_subtile_m) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_eq_4_subtile_n) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(3)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_lt_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, k_div_4_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, n_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, n_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, n_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, n_div_8_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_SSE;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, a_offset) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(67)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, zero) {
    TEST_REQUIRES_X86_SSE;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(67)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, qmin) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(3)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, qmax) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(3)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8S4__SSE, strided_cm) {
    TEST_REQUIRES_X86_SSE;
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(3)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8s4__sse, xnn_init_f32_minmax_sse_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_eq_4) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_eq_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_eq_4_subtile_m) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_eq_4_subtile_n) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_lt_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_lt_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_gt_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_div_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, k_div_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, n_gt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, n_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, n_div_8) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, n_div_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, a_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, zero) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, qmin) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, qmax) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__SSE2_DUP, strided_cm) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_eq_4) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_eq_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_eq_4_subtile_m) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_eq_4_subtile_n) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_lt_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_lt_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_gt_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_gt_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_div_4) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, k_div_4_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, n_gt_8) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, n_gt_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, n_div_8) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, n_div_8_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, small_kernel_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_SSE2;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, strided_cm_subtile) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, a_offset) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(103)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, zero) {
    TEST_REQUIRES_X86_SSE2;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(103)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, qmin) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, qmax) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__SSE2_DUP, strided_cm) {
    TEST_REQUIRES_X86_SSE2;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__sse2_dup, xnn_init_f32_minmax_sse_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, n_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, n_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, n_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, n_div_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(7)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(7)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__AVX_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, n_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, n_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, n_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, n_div_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(29)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(29)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__AVX_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, n_gt_8) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, n_gt_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, n_div_8) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, n_div_8_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(37)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(37)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__AVX_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(1)
      .n(16)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(1)
      .n(16)
      .k(1)
      .cn_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, n_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, n_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(1)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(7)
        .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(1)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(7)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(1)
      .n(16)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(1)
      .n(16)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_1X16__AVX_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(1)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(1)
      .n(16)
      .k(1)
      .cm_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_1x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .cn_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, n_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, n_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .cm_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .cn_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, n_gt_16) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, n_div_16) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(29)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, zero) {
    TEST_REQUIRES_X86_AVX;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(29)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, qmin) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, qmax) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_AVX;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .cm_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, n_gt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, n_gt_8_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, n_div_8) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, n_div_8_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(37)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, zero) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(37)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, qmin) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, qmax) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__FMA3_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(7)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(7)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(7)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(7)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 7; m++) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t m = 1; m <= 7; m++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(7)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(7)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, n_gt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, n_gt_8_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, n_div_8) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, n_div_8_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(7)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(7)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 7; m++) {
          GemmMicrokernelTester()
            .mr(7)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(7)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(7)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(37)
        .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, zero) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 7; mz++) {
        GemmMicrokernelTester()
          .mr(7)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(7)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(37)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, qmin) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(7)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(7)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, qmax) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(7)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(7)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_7X8__FMA3_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(7)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(7)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_7x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(8)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(8)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 8; m++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t m = 1; m <= 8; m++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(8)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, n_gt_8) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, n_gt_8_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, n_gt_8_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, n_div_8) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, n_div_8_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, n_div_8_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, n_gt_8_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, n_div_8_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(8)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 8; m++) {
          GemmMicrokernelTester()
            .mr(8)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(8)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(8)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, zero) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 8; mz++) {
        GemmMicrokernelTester()
          .mr(8)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(8)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, qmin) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(8)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, qmax) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(8)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_8X8__FMA3_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(8)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(8)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_8x8__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .cn_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, n_gt_16) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, n_gt_16_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, n_div_16) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, n_div_16_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, zero) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, qmin) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, qmax) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__FMA3_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .cm_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .cn_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, n_gt_16) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, n_gt_16_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, n_div_16) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, n_div_16_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_FMA3;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(29)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, zero) {
    TEST_REQUIRES_X86_FMA3;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(29)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, qmin) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, qmax) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__FMA3_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_FMA3;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .cm_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__fma3_broadcast, xnn_init_f32_minmax_avx_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .cn_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, n_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, n_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(4)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, zero) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(4)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, qmin) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, qmax) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_4X16__AVX512F_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(4)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(4)
      .n(16)
      .k(1)
      .cm_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_4x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, k_eq_1) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, strided_cn) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .cn_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, k_eq_1_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 1; n <= 16; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, k_eq_1_subtile_m) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(m)
        .n(16)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, k_eq_1_subtile_n) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 1; n <= 16; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, k_gt_1) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, k_gt_1_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, n_gt_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, n_gt_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, n_gt_16_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, n_div_16) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, n_div_16_strided_cn) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(19)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, n_div_16_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, small_kernel) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, small_kernel_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, n_gt_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 17; n < 32; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, n_div_16_small_kernel) {
    TEST_REQUIRES_X86_AVX512F;
    for (uint32_t n = 32; n <= 48; n += 16) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, strided_cm_subtile) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 16; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(16)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(19)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, a_offset) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(16)
        .kr(1)
        .sr(1)
        .m(5)
        .n(16)
        .k(k)
        .ks(3)
        .a_offset(29)
        .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, zero) {
    TEST_REQUIRES_X86_AVX512F;
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(16)
          .kr(1)
          .sr(1)
          .m(5)
          .n(16)
          .k(k)
          .ks(3)
          .a_offset(29)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, qmin) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, qmax) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_5X16__AVX512F_BROADCAST, strided_cm) {
    TEST_REQUIRES_X86_AVX512F;
    GemmMicrokernelTester()
      .mr(5)
      .nr(16)
      .kr(1)
      .sr(1)
      .m(5)
      .n(16)
      .k(1)
      .cm_stride(19)
      .Test(xnn_f32_igemm_minmax_ukernel_5x16__avx512f_broadcast, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, small_kernel) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, a_offset) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(7)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, zero) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(7)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8__WASMSIMD_ARM_LOADSPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(1)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, small_kernel) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, a_offset) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(17)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, zero) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(17)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_LOADSPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, small_kernel) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, a_offset) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, zero) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_LOADSPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1) {
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 6; m++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 6; m++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, small_kernel) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 6; m++) {
          GemmMicrokernelTester()
            .mr(6)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, a_offset) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(6)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(6)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(37)
        .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, zero) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 6; mz++) {
        GemmMicrokernelTester()
          .mr(6)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(6)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(37)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_6X8__WASMSIMD_ARM_LOADSPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(6)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(6)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, k_eq_1) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, small_kernel) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, a_offset) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(29)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, zero) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(29)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_LOADSPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(1)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_loadsplat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_eq_4) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(67)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(67)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_ARM_SPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_eq_4) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_ARM_SPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_eq_4) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(103)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(103)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_ARM_SPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_arm_splat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_eq_4) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 3; m++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 3; m++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 3; m++) {
          GemmMicrokernelTester()
            .mr(3)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(3)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(3)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(67)
        .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 3; mz++) {
        GemmMicrokernelTester()
          .mr(3)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(3)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(67)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_3X8__WASMSIMD_X86_SPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(3)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(3)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_3x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_eq_4) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8__WASMSIMD_X86_SPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_eq_4) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, strided_cn) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(103)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(103)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, qmin) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, qmax) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8__WASMSIMD_X86_SPLAT, strided_cm) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(5)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8__wasmsimd_x86_splat, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_eq_4) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, strided_cn) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, qmin) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, qmax) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_ARM, strided_cm) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_eq_4) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_ARM, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_eq_4) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, strided_cn) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(103)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(103)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, qmin) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, qmax) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_ARM, strided_cm) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_arm, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_eq_4) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, strided_cn) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(1)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(23)
        .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(1)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(23)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, qmin) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, qmax) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_1X8S4__WASMSIMD_X86, strided_cm) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(1)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_1x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_eq_4) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, qmin) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, qmax) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_4X8S4__WASMSIMD_X86, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_4x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_eq_4) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, strided_cn) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 8; n++) {
      for (uint32_t m = 1; m <= 5; m++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 5; m++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 8; n++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, n_gt_8) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, n_gt_8_strided_cn) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, n_gt_8_subtile) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, n_div_8) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, n_div_8_strided_cn) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, n_div_8_subtile) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, small_kernel) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, small_kernel_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, n_gt_8_small_kernel) {
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, n_div_8_small_kernel) {
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        for (uint32_t m = 1; m <= 5; m++) {
          GemmMicrokernelTester()
            .mr(5)
            .nr(8)
            .kr(1)
            .sr(4)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, a_offset) {
    for (size_t k = 1; k <= 20; k += 5) {
      GemmMicrokernelTester()
        .mr(5)
        .nr(8)
        .kr(1)
        .sr(4)
        .m(5)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(103)
        .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, zero) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t mz = 0; mz < 5; mz++) {
        GemmMicrokernelTester()
          .mr(5)
          .nr(8)
          .kr(1)
          .sr(4)
          .m(5)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(103)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, qmin) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, qmax) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }

  TEST(F32_IGEMM_MINMAX_5X8S4__WASMSIMD_X86, strided_cm) {
    GemmMicrokernelTester()
      .mr(5)
      .nr(8)
      .kr(1)
      .sr(4)
      .m(5)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(xnn_f32_igemm_minmax_ukernel_5x8s4__wasmsimd_x86, xnn_init_f32_minmax_wasmsimd_params);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_IGEMM_MINMAX_1X4__WASM, k_eq_1) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(1)
      .n(4)
      .k(1)
      .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, strided_cn) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(1)
      .n(4)
      .k(1)
      .cn_stride(7)
      .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 1; m++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 1; m++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(4)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, small_kernel) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, small_kernel_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, n_gt_4_small_kernel) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, n_div_4_small_kernel) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(1)
          .n(n)
          .k(k)
          .ks(3)
          .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 1; m++) {
          GemmMicrokernelTester()
            .mr(1)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
        }
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, a_offset) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(1)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(1)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(7)
        .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, zero) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t mz = 0; mz < 1; mz++) {
        GemmMicrokernelTester()
          .mr(1)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(1)
          .n(4)
          .k(k)
          .ks(3)
          .a_offset(7)
          .zero_index(mz)
          .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
      }
    }
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, qmin) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(1)
      .n(4)
      .k(1)
      .qmin(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, qmax) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(1)
      .n(4)
      .k(1)
      .qmax(128)
      .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
  }

  TEST(F32_IGEMM_MINMAX_1X4__WASM, strided_cm) {
    GemmMicrokernelTester()
      .mr(1)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(1)
      .n(4)
      .k(1)
      .cm_stride(7)
      .Test(xnn_f32_igemm_minmax_ukernel_1x4__wasm, xnn_init_f32_minmax_scalar_params);
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


TEST(F32_IGEMM_MINMAX_2X4__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .cn_stride(7)
    .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 4; n++) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 2; m++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(m)
      .n(4)
      .k(1)
      .iterations(1)
      .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 4; n++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(k)
      .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, n_gt_4) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, n_gt_4_strided_cn) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, n_gt_4_subtile) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, n_div_4) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, n_div_4_strided_cn) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, n_div_4_subtile) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, small_kernel) {
  for (size_t k = 1; k <= 5; k += 2) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(k)
      .ks(3)
      .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, small_kernel_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .ks(3)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, n_gt_4_small_kernel) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, n_div_4_small_kernel) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .ks(3)
        .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(7)
          .iterations(1)
          .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
      }
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, a_offset) {
  for (size_t k = 1; k <= 5; k += 2) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(k)
      .ks(3)
      .a_offset(13)
      .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, zero) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t mz = 0; mz < 2; mz++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .ks(3)
        .a_offset(13)
        .zero_index(mz)
        .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
    }
  }
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, qmin) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .qmin(128)
    .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, qmax) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .qmax(128)
    .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}

TEST(F32_IGEMM_MINMAX_2X4__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .cm_stride(7)
    .Test(xnn_f32_igemm_minmax_ukernel_2x4__scalar, xnn_init_f32_minmax_scalar_params);
}


#if XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY && XNN_PLATFORM_JIT
  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, 2 * sizeof(float), nullptr));
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, 2 * sizeof(float), nullptr));
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    }
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, 2 * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, k * sizeof(float), nullptr));
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, qmin) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, qmax) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_LD64, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_ld64(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }
#endif  // XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY && XNN_PLATFORM_JIT


#if XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY && XNN_PLATFORM_JIT
  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_eq_2) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .cn_stride(11)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_eq_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, 2 * sizeof(float), nullptr));
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(2)
          .iterations(1)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_eq_2_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, 2 * sizeof(float), nullptr));
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(2)
        .iterations(1)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    }
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_eq_2_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, 2 * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(2)
        .iterations(1)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_lt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_lt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 2; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_gt_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_gt_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 3; k < 4; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_div_2) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, k_div_2_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 4; k <= 20; k += 2) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 10; k += 3) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(43)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 10; k += 3) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, k * sizeof(float), nullptr));
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(43)
          .zero_index(mz)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, qmin) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .qmin(128)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, qmax) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .qmax(128)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A7, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a7(&code_buffer, 8, 2 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(2)
      .cm_stride(11)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }
#endif  // XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY && XNN_PLATFORM_JIT


#if XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY && XNN_PLATFORM_JIT
  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, 4 * sizeof(float), nullptr));
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, 4 * sizeof(float), nullptr));
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    }
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, 4 * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, 8 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, 8 * sizeof(float), nullptr));
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, k * sizeof(float), nullptr));
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, qmin) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, qmax) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A75, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a75(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }
#endif  // XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY && XNN_PLATFORM_JIT


#if XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY && XNN_PLATFORM_JIT
  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cn_stride(11)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_eq_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, 4 * sizeof(float), nullptr));
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_eq_4_subtile_m) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, 4 * sizeof(float), nullptr));
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(m)
        .n(8)
        .k(4)
        .iterations(1)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    }
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_eq_4_subtile_n) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, 4 * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, 8 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(8)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_eq_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 1; n <= 8; n++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, 8 * sizeof(float), nullptr));
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(8)
          .iterations(1)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_lt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k < 8; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 9; k < 16; k++) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, k_div_4_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 12; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, n_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, n_gt_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, n_gt_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, n_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, n_div_8_strided_cn) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(11)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, n_div_8_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, small_kernel_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .ks(3)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, n_gt_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 9; n < 16; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, n_div_8_small_kernel) {
    TEST_REQUIRES_ARM_NEON;
    for (uint32_t n = 16; n <= 24; n += 8) {
      for (size_t k = 1; k <= 20; k += 5) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .ks(3)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, strided_cm_subtile) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 8; n++) {
        struct xnn_code_buffer code_buffer;
        ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
        ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, n, k * sizeof(float), nullptr));
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(8)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(11)
            .iterations(1)
            .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
        }
        ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
      }
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, a_offset) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, k * sizeof(float), nullptr));
      GemmMicrokernelTester()
        .mr(4)
        .nr(8)
        .kr(1)
        .sr(1)
        .m(4)
        .n(8)
        .k(k)
        .ks(3)
        .a_offset(83)
        .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, zero) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t k = 1; k <= 20; k += 5) {
      struct xnn_code_buffer code_buffer;
      ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
      ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, k * sizeof(float), nullptr));
      for (uint32_t mz = 0; mz < 4; mz++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(8)
          .kr(1)
          .sr(1)
          .m(4)
          .n(8)
          .k(k)
          .ks(3)
          .a_offset(83)
          .zero_index(mz)
          .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
      }
      ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
    }
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, qmin) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmin(128)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, qmax) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .qmax(128)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }

  TEST(GENERATE_F32_IGEMM_4X8__AARCH32_NEON_CORTEX_A55, strided_cm) {
    TEST_REQUIRES_ARM_NEON;
    struct xnn_code_buffer code_buffer;
    ASSERT_EQ(xnn_status_success, xnn_allocate_code_memory(&code_buffer, XNN_DEFAULT_CODE_BUFFER_SIZE));
    ASSERT_EQ(xnn_status_success, xnn_generate_f32_igemm_ukernel_4x8__aarch32_neon_cortex_a55(&code_buffer, 8, 4 * sizeof(float), nullptr));
    GemmMicrokernelTester()
      .mr(4)
      .nr(8)
      .kr(1)
      .sr(1)
      .m(4)
      .n(8)
      .k(4)
      .cm_stride(11)
      .Test(reinterpret_cast<xnn_f32_igemm_minmax_ukernel_function>(code_buffer.code), xnn_init_f32_minmax_scalar_params);
    ASSERT_EQ(xnn_status_success, xnn_release_code_memory(&code_buffer));
  }
#endif  // XNN_ARCH_ARM && XNN_ENABLE_ASSEMBLY && XNN_PLATFORM_JIT
