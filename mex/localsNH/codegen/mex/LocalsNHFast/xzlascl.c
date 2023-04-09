/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlascl.c
 *
 * Code generation for function 'xzlascl'
 *
 */

/* Include files */
#include "xzlascl.h"
#include "LocalsNHFast_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo te_emlrtRSI = {
    32,        /* lineNo */
    "xzlascl", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlascl.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = {
    34,        /* lineNo */
    "xzlascl", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlascl.m" /* pathName */
};

/* Function Definitions */
void b_xzlascl(const emlrtStack *sp, real_T cfrom, real_T cto, int32_T m,
               real_T A[3], int32_T iA0)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T cfromc;
  real_T ctoc;
  int32_T b_i;
  boolean_T notdone;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    int32_T i;
    int32_T i1;
    int32_T scalarLB;
    int32_T vectorUB;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) &&
        (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    st.site = &te_emlrtRSI;
    i = (uint8_T)m;
    st.site = &ue_emlrtRSI;
    if (m > 2147483646) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    scalarLB = ((uint8_T)m >> 1) << 1;
    vectorUB = scalarLB - 2;
    for (b_i = 0; b_i <= vectorUB; b_i += 2) {
      __m128d r;
      i1 = (iA0 + b_i) - 1;
      r = _mm_loadu_pd(&A[i1]);
      _mm_storeu_pd(&A[i1], _mm_mul_pd(r, _mm_set1_pd(mul)));
    }
    for (b_i = scalarLB; b_i < i; b_i++) {
      i1 = (iA0 + b_i) - 1;
      A[i1] *= mul;
    }
  }
}

void xzlascl(real_T cfrom, real_T cto, real_T A[9])
{
  real_T cfromc;
  real_T ctoc;
  int32_T j;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((muDoubleScalarAbs(cfrom1) > muDoubleScalarAbs(ctoc)) &&
        (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (muDoubleScalarAbs(cto1) > muDoubleScalarAbs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }
    for (j = 0; j < 3; j++) {
      int32_T offset;
      offset = j * 3 - 1;
      A[offset + 1] *= mul;
      A[offset + 2] *= mul;
      A[offset + 3] *= mul;
    }
  }
}

/* End of code generation (xzlascl.c) */
