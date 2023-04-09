/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xdotc.c
 *
 * Code generation for function 'xdotc'
 *
 */

/* Include files */
#include "xdotc.h"
#include "LocalsNHFast_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ve_emlrtRSI =
    {
        32,      /* lineNo */
        "xdotc", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xdotc.m" /* pathName */
};

static emlrtRSInfo
    we_emlrtRSI =
        {
            35,     /* lineNo */
            "xdot", /* fcnName */
            "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+blas/"
            "xdot.m" /* pathName */
};

static emlrtRSInfo xe_emlrtRSI =
    {
        15,     /* lineNo */
        "xdot", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xdot.m" /* pathName */
};

static emlrtRSInfo ye_emlrtRSI =
    {
        42,      /* lineNo */
        "xdotx", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xdotx.m" /* pathName */
};

/* Function Definitions */
real_T xdotc(const emlrtStack *sp, int32_T n, const real_T x[9], int32_T ix0,
             const real_T y[9], int32_T iy0)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T d;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ve_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &we_emlrtRSI;
  c_st.site = &xe_emlrtRSI;
  d = 0.0;
  d_st.site = &ye_emlrtRSI;
  if (n > 2147483646) {
    e_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  i = (uint8_T)n;
  for (k = 0; k < i; k++) {
    d += x[(ix0 + k) - 1] * y[(iy0 + k) - 1];
  }
  return d;
}

/* End of code generation (xdotc.c) */