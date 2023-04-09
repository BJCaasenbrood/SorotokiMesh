/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgehrd.c
 *
 * Code generation for function 'xzgehrd'
 *
 */

/* Include files */
#include "xzgehrd.h"
#include "LocalsNHFast_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "xgemv.h"
#include "xgerc.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo jh_emlrtRSI = {
    28,        /* lineNo */
    "xzgehrd", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgehrd.m" /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = {
    37,        /* lineNo */
    "xzgehrd", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgehrd.m" /* pathName */
};

/* Function Definitions */
void xzgehrd(const emlrtStack *sp, real_T a[9], int32_T ilo, int32_T ihi,
             real_T tau[2])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T alpha1;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((ihi - ilo) + 1 > 1) {
    real_T work[3];
    int32_T b;
    int32_T lastc;
    st.site = &jh_emlrtRSI;
    if (ilo - 1 > 2147483646) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    lastc = (uint8_T)(ilo - 1);
    if (lastc - 1 >= 0) {
      memset(&tau[0], 0, (uint32_T)lastc * sizeof(real_T));
    }
    for (i = ihi; i < 3; i++) {
      tau[i - 1] = 0.0;
    }
    work[0] = 0.0;
    work[1] = 0.0;
    work[2] = 0.0;
    b = ihi - 1;
    st.site = &kh_emlrtRSI;
    if ((ilo <= ihi - 1) && (ihi - 1 > 2147483646)) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (i = ilo; i <= b; i++) {
      real_T d;
      int32_T alpha1_tmp_tmp;
      int32_T in;
      int32_T lastv;
      int32_T n;
      lastc = (i - 1) * 3;
      in = i * 3 + 1;
      alpha1_tmp_tmp = i + lastc;
      alpha1 = a[alpha1_tmp_tmp];
      n = ihi - i;
      st.site = &sf_emlrtRSI;
      d = xzlarfg(&st, n, &alpha1, a, lastc + 3);
      tau[i - 1] = d;
      a[alpha1_tmp_tmp] = 1.0;
      st.site = &tf_emlrtRSI;
      if (d != 0.0) {
        boolean_T exitg2;
        lastv = n;
        lastc = (alpha1_tmp_tmp + n) + 1;
        while ((lastv > 0) && (a[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }
        lastc = ihi;
        exitg2 = false;
        while ((!exitg2) && (lastc > 0)) {
          int32_T exitg1;
          int32_T ia;
          int32_T rowleft;
          rowleft = (in + lastc) - 1;
          ia = rowleft;
          do {
            exitg1 = 0;
            if (ia <= rowleft + (lastv - 1) * 3) {
              if (a[ia - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ia += 3;
              }
            } else {
              lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);
          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        lastv = 0;
        lastc = 0;
      }
      if (lastv > 0) {
        b_st.site = &vf_emlrtRSI;
        xgemv(&b_st, lastc, lastv, a, in, a, alpha1_tmp_tmp + 1, work);
        b_st.site = &wf_emlrtRSI;
        xgerc(&b_st, lastc, lastv, -tau[i - 1], work, alpha1_tmp_tmp + 1, a,
              in);
      }
      st.site = &uf_emlrtRSI;
      xzlarf(&st, n, 3 - i, alpha1_tmp_tmp + 1, tau[i - 1], a, i + in, work);
      a[alpha1_tmp_tmp] = alpha1;
    }
  }
}

/* End of code generation (xzgehrd.c) */
