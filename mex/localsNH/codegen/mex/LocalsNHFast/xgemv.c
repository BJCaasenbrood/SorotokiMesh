/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgemv.c
 *
 * Code generation for function 'xgemv'
 *
 */

/* Include files */
#include "xgemv.h"
#include "LocalsNHFast_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo xf_emlrtRSI =
    {
        58,      /* lineNo */
        "xgemv", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgemv.m" /* pathName */
};

static emlrtRSInfo kj_emlrtRSI =
    {
        41,      /* lineNo */
        "xgemv", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgemv.m" /* pathName */
};

/* Function Definitions */
void b_xgemv(const emlrtStack *sp, int32_T n, const real_T x[9], real_T beta1,
             real_T y[9], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ia;
  int32_T iac;
  int32_T iy;
  int32_T iyend;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ed_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  iyend = iy0 + 2;
  if (beta1 != 1.0) {
    if (beta1 == 0.0) {
      b_st.site = &fd_emlrtRSI;
      if ((iy0 <= iy0 + 2) && (iy0 + 2 > 2147483646)) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      if (iy0 <= iyend) {
        memset(&y[iy0 + -1], 0, (uint32_T)((iyend - iy0) + 1) * sizeof(real_T));
      }
    } else {
      b_st.site = &kj_emlrtRSI;
      if ((iy0 <= iy0 + 2) && (iy0 + 2 > 2147483646)) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      scalarLB = ((iyend - iy0) + 1) / 2 * 2 + iy0;
      vectorUB = scalarLB - 2;
      for (iy = iy0; iy <= vectorUB; iy += 2) {
        __m128d r;
        r = _mm_loadu_pd(&y[iy - 1]);
        r = _mm_mul_pd(_mm_set1_pd(beta1), r);
        _mm_storeu_pd(&y[iy - 1], r);
      }
      for (iy = scalarLB; iy <= iyend; iy++) {
        y[iy - 1] *= beta1;
      }
    }
  }
  iyend = 6;
  scalarLB = 3 * (n - 1) + 1;
  for (iac = 1; iac <= scalarLB; iac += 3) {
    vectorUB = iac + 2;
    b_st.site = &xf_emlrtRSI;
    if ((iac <= iac + 2) && (iac + 2 > 2147483646)) {
      c_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (ia = iac; ia <= vectorUB; ia++) {
      iy = ((iy0 + ia) - iac) - 1;
      y[iy] += y[ia - 1] * x[iyend];
    }
    iyend++;
  }
}

void xgemv(const emlrtStack *sp, int32_T m, int32_T n, const real_T A[9],
           int32_T ia0, const real_T x[9], int32_T ix0, real_T y[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ia;
  int32_T iac;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ed_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (m != 0) {
    int32_T i;
    int32_T ix;
    b_st.site = &fd_emlrtRSI;
    if (m > 2147483646) {
      c_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    i = (uint8_T)m;
    memset(&y[0], 0, (uint32_T)i * sizeof(real_T));
    ix = ix0;
    i = ia0 + 3 * (n - 1);
    for (iac = ia0; iac <= i; iac += 3) {
      int32_T b;
      b = (iac + m) - 1;
      b_st.site = &xf_emlrtRSI;
      if ((iac <= b) && (b > 2147483646)) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (ia = iac; ia <= b; ia++) {
        int32_T i1;
        i1 = ia - iac;
        y[i1] += A[ia - 1] * x[ix - 1];
      }
      ix++;
    }
  }
}

/* End of code generation (xgemv.c) */
