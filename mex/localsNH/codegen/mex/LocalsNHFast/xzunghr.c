/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzunghr.c
 *
 * Code generation for function 'xzunghr'
 *
 */

/* Include files */
#include "xzunghr.h"
#include "LocalsNHFast_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "xscal.h"
#include "xzlarf.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo bf_emlrtRSI = {
    34,        /* lineNo */
    "xzungqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzungqr.m" /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = {
    41,        /* lineNo */
    "xzungqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzungqr.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI = {
    53,        /* lineNo */
    "xzunghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunghr.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI = {
    40,        /* lineNo */
    "xzunghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunghr.m" /* pathName */
};

static emlrtRSInfo dg_emlrtRSI = {
    38,        /* lineNo */
    "xzunghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunghr.m" /* pathName */
};

static emlrtRSInfo eg_emlrtRSI = {
    31,        /* lineNo */
    "xzunghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunghr.m" /* pathName */
};

static emlrtRSInfo fg_emlrtRSI = {
    29,        /* lineNo */
    "xzunghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunghr.m" /* pathName */
};

static emlrtRSInfo gg_emlrtRSI = {
    24,        /* lineNo */
    "xzunghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunghr.m" /* pathName */
};

static emlrtRSInfo hg_emlrtRSI = {
    20,        /* lineNo */
    "xzunghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunghr.m" /* pathName */
};

static emlrtRSInfo ig_emlrtRSI = {
    15,        /* lineNo */
    "xzunghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunghr.m" /* pathName */
};

/* Function Definitions */
void xzunghr(const emlrtStack *sp, int32_T ilo, int32_T ihi, real_T A[9],
             const real_T tau[2])
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b_i;
  int32_T i;
  int32_T ia;
  int32_T ia0;
  int32_T iaii;
  int32_T itau;
  int32_T j;
  int32_T nh;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nh = ihi - ilo;
  iaii = ilo + 1;
  for (j = ihi; j >= iaii; j--) {
    ia = (j - 1) * 3;
    st.site = &ig_emlrtRSI;
    if (j - 1 > 2147483646) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    i = (uint8_T)(j - 1);
    memset(&A[ia], 0, (uint32_T)((i + ia) - ia) * sizeof(real_T));
    itau = j + 1;
    st.site = &hg_emlrtRSI;
    if ((j + 1 <= ihi) && (ihi > 2147483646)) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (b_i = itau; b_i <= ihi; b_i++) {
      A[ia + 2] = A[ia - 1];
    }
    i = ihi + 1;
    st.site = &gg_emlrtRSI;
    if (i <= 3) {
      memset(&A[(i + ia) + -1], 0,
             (uint32_T)(((ia - i) - ia) + 4) * sizeof(real_T));
    }
  }
  st.site = &fg_emlrtRSI;
  if (ilo > 2147483646) {
    b_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  i = (uint8_T)ilo;
  for (j = 0; j < i; j++) {
    ia = j * 3;
    st.site = &eg_emlrtRSI;
    A[ia] = 0.0;
    A[ia + 1] = 0.0;
    A[ia + 2] = 0.0;
    A[ia + j] = 1.0;
  }
  i = ihi + 1;
  st.site = &dg_emlrtRSI;
  for (j = i; j < 4; j++) {
    ia = (j - 1) * 3;
    st.site = &cg_emlrtRSI;
    A[ia] = 0.0;
    A[ia + 1] = 0.0;
    A[ia + 2] = 0.0;
    A[(ia + j) - 1] = 1.0;
  }
  ia0 = ilo + ilo * 3;
  st.site = &bg_emlrtRSI;
  if (nh >= 1) {
    real_T work[3];
    i = nh - 1;
    for (j = nh; j <= i; j++) {
      ia = ia0 + j * 3;
      memset(&A[ia], 0, (uint32_T)(((i + ia) - ia) + 1) * sizeof(real_T));
      A[ia + j] = 1.0;
    }
    itau = (ilo + nh) - 2;
    work[0] = 0.0;
    work[1] = 0.0;
    work[2] = 0.0;
    for (b_i = nh; b_i >= 1; b_i--) {
      iaii = (ia0 + b_i) + (b_i - 1) * 3;
      if (b_i < nh) {
        A[iaii - 1] = 1.0;
        b_st.site = &bf_emlrtRSI;
        xzlarf(&b_st, nh, 1, iaii, tau[itau], A, iaii + 3, work);
        b_st.site = &cf_emlrtRSI;
        xscal(&b_st, 1, -tau[itau], A, iaii + 1);
      }
      A[iaii - 1] = 1.0 - tau[itau];
      i = (uint8_T)(b_i - 1);
      for (j = 0; j < i; j++) {
        A[iaii - 2] = 0.0;
      }
      itau--;
    }
  }
}

/* End of code generation (xzunghr.c) */
