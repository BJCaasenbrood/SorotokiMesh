/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlarfg.c
 *
 * Code generation for function 'xzlarfg'
 *
 */

/* Include files */
#include "xzlarfg.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "xscal.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo rc_emlrtRSI = {
    81,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    68,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    53,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    41,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    20,        /* lineNo */
    "xzlarfg", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarfg.m" /* pathName */
};

/* Function Definitions */
real_T b_xzlarfg(int32_T n, real_T *alpha1, real_T x[3])
{
  real_T tau;
  int32_T k;
  tau = 0.0;
  if (n > 0) {
    real_T xnorm;
    xnorm = b_xnrm2(n - 1, x);
    if (xnorm != 0.0) {
      real_T beta1;
      beta1 = muDoubleScalarHypot(*alpha1, xnorm);
      if (*alpha1 >= 0.0) {
        beta1 = -beta1;
      }
      if (muDoubleScalarAbs(beta1) < 1.0020841800044864E-292) {
        __m128d r;
        int32_T knt;
        int32_T vectorUB;
        int32_T vectorUB_tmp;
        knt = 0;
        do {
          knt++;
          vectorUB = (((n - 1) / 2) << 1) + 2;
          vectorUB_tmp = vectorUB - 2;
          for (k = 2; k <= vectorUB_tmp; k += 2) {
            r = _mm_loadu_pd(&x[k - 1]);
            _mm_storeu_pd(&x[k - 1],
                          _mm_mul_pd(_mm_set1_pd(9.9792015476736E+291), r));
          }
          for (k = vectorUB; k <= n; k++) {
            x[k - 1] *= 9.9792015476736E+291;
          }
          beta1 *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while ((muDoubleScalarAbs(beta1) < 1.0020841800044864E-292) &&
                 (knt < 20));
        beta1 = muDoubleScalarHypot(*alpha1, b_xnrm2(n - 1, x));
        if (*alpha1 >= 0.0) {
          beta1 = -beta1;
        }
        tau = (beta1 - *alpha1) / beta1;
        xnorm = 1.0 / (*alpha1 - beta1);
        for (k = 2; k <= vectorUB_tmp; k += 2) {
          r = _mm_loadu_pd(&x[k - 1]);
          _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(xnorm), r));
        }
        for (k = vectorUB; k <= n; k++) {
          x[k - 1] *= xnorm;
        }
        for (k = 0; k < knt; k++) {
          beta1 *= 1.0020841800044864E-292;
        }
        *alpha1 = beta1;
      } else {
        int32_T knt;
        int32_T vectorUB;
        tau = (beta1 - *alpha1) / beta1;
        xnorm = 1.0 / (*alpha1 - beta1);
        knt = (((n - 1) / 2) << 1) + 2;
        vectorUB = knt - 2;
        for (k = 2; k <= vectorUB; k += 2) {
          __m128d r;
          r = _mm_loadu_pd(&x[k - 1]);
          _mm_storeu_pd(&x[k - 1], _mm_mul_pd(_mm_set1_pd(xnorm), r));
        }
        for (k = knt; k <= n; k++) {
          x[k - 1] *= xnorm;
        }
        *alpha1 = beta1;
      }
    }
  }
  return tau;
}

real_T xzlarfg(const emlrtStack *sp, int32_T n, real_T *alpha1, real_T x[9],
               int32_T ix0)
{
  emlrtStack st;
  real_T tau;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  tau = 0.0;
  if (n > 0) {
    real_T xnorm;
    st.site = &wc_emlrtRSI;
    xnorm = xnrm2(&st, n - 1, x, ix0);
    if (xnorm != 0.0) {
      xnorm = muDoubleScalarHypot(*alpha1, xnorm);
      if (*alpha1 >= 0.0) {
        xnorm = -xnorm;
      }
      if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
        int32_T knt;
        knt = 0;
        do {
          knt++;
          st.site = &vc_emlrtRSI;
          xscal(&st, n - 1, 9.9792015476736E+291, x, ix0);
          xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while ((muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) &&
                 (knt < 20));
        st.site = &uc_emlrtRSI;
        xnorm = xnrm2(&st, n - 1, x, ix0);
        xnorm = muDoubleScalarHypot(*alpha1, xnorm);
        if (*alpha1 >= 0.0) {
          xnorm = -xnorm;
        }
        tau = (xnorm - *alpha1) / xnorm;
        st.site = &tc_emlrtRSI;
        xscal(&st, n - 1, 1.0 / (*alpha1 - xnorm), x, ix0);
        for (k = 0; k < knt; k++) {
          xnorm *= 1.0020841800044864E-292;
        }
        *alpha1 = xnorm;
      } else {
        tau = (xnorm - *alpha1) / xnorm;
        st.site = &rc_emlrtRSI;
        xscal(&st, n - 1, 1.0 / (*alpha1 - xnorm), x, ix0);
        *alpha1 = xnorm;
      }
    }
  }
  return tau;
}

/* End of code generation (xzlarfg.c) */
