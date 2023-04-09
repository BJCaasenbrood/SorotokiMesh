/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * svd.c
 *
 * Code generation for function 'svd'
 *
 */

/* Include files */
#include "svd.h"
#include "anyNonFinite.h"
#include "rt_nonfinite.h"
#include "xzsvdc.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ak_emlrtRSI = {
    14,                                                            /* lineNo */
    "svd",                                                         /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/svd.m" /* pathName
                                                                    */
};

static emlrtRSInfo bk_emlrtRSI = {
    36,                                                            /* lineNo */
    "svd",                                                         /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/svd.m" /* pathName
                                                                    */
};

static emlrtRSInfo ck_emlrtRSI = {
    42,                                                            /* lineNo */
    "svd",                                                         /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/svd.m" /* pathName
                                                                    */
};

static emlrtRSInfo dk_emlrtRSI = {
    52,    /* lineNo */
    "svd", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo ek_emlrtRSI = {
    107,          /* lineNo */
    "callLAPACK", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo fk_emlrtRSI =
    {
        34,       /* lineNo */
        "xgesvd", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgesvd.m" /* pathName */
};

/* Function Definitions */
void svd(const emlrtStack *sp, const real_T A[9], real_T U[9], real_T S[9],
         real_T V[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A[9];
  real_T s[3];
  int32_T i;
  boolean_T allFiniteA;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ak_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  allFiniteA = !anyNonFinite(A);
  if (allFiniteA) {
    st.site = &bk_emlrtRSI;
    b_st.site = &dk_emlrtRSI;
    c_st.site = &ek_emlrtRSI;
    memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
    d_st.site = &fk_emlrtRSI;
    xzsvdc(&d_st, b_A, U, s, V);
  } else {
    st.site = &ck_emlrtRSI;
    b_st.site = &dk_emlrtRSI;
    c_st.site = &ek_emlrtRSI;
    memset(&b_A[0], 0, 9U * sizeof(real_T));
    d_st.site = &fk_emlrtRSI;
    xzsvdc(&d_st, b_A, U, s, V);
    s[0] = rtNaN;
    s[1] = rtNaN;
    s[2] = rtNaN;
    for (i = 0; i < 9; i++) {
      U[i] = rtNaN;
      V[i] = rtNaN;
    }
  }
  memset(&S[0], 0, 9U * sizeof(real_T));
  S[0] = s[0];
  S[4] = s[1];
  S[8] = s[2];
}

/* End of code generation (svd.c) */
