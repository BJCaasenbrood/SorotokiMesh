/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * round.c
 *
 * Code generation for function 'round'
 *
 */

/* Include files */
#include "round.h"
#include "LocalsNHFastElastic_data.h"
#include "LocalsNHFastElastic_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo uc_emlrtRSI = {
    10,      /* lineNo */
    "round", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/elfun/round.m" /* pathName
                                                                     */
};

static emlrtRSInfo vc_emlrtRSI = {
    33,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

/* Function Definitions */
void b_round(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[1];
  b_st.site = &vc_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    c_st.site = &k_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarRound(x->data[k]);
  }
}

/* End of code generation (round.c) */
