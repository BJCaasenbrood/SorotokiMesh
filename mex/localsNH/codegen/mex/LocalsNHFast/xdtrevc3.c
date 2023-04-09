/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xdtrevc3.c
 *
 * Code generation for function 'xdtrevc3'
 *
 */

/* Include files */
#include "xdtrevc3.h"
#include "rt_nonfinite.h"
#include "xdlaln2.h"
#include "xgemv.h"
#include "xscal.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo si_emlrtRSI = {
    235,        /* lineNo */
    "xdtrevc3", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdtrevc3.m" /* pathName */
};

static emlrtRSInfo ti_emlrtRSI = {
    234,        /* lineNo */
    "xdtrevc3", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdtrevc3.m" /* pathName */
};

static emlrtRSInfo ui_emlrtRSI = {
    225,        /* lineNo */
    "xdtrevc3", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdtrevc3.m" /* pathName */
};

static emlrtRSInfo vi_emlrtRSI = {
    223,        /* lineNo */
    "xdtrevc3", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdtrevc3.m" /* pathName */
};

static emlrtRSInfo wi_emlrtRSI = {
    220,        /* lineNo */
    "xdtrevc3", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdtrevc3.m" /* pathName */
};

static emlrtRSInfo bj_emlrtRSI = {
    127,        /* lineNo */
    "xdtrevc3", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdtrevc3.m" /* pathName */
};

static emlrtRSInfo cj_emlrtRSI = {
    122,        /* lineNo */
    "xdtrevc3", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdtrevc3.m" /* pathName */
};

/* Function Definitions */
void xdtrevc3(const emlrtStack *sp, const real_T T[9], real_T vr[9])
{
  emlrtStack st;
  real_T work[9];
  real_T x[4];
  real_T remax;
  int32_T i;
  int32_T ii;
  int32_T ip;
  int32_T k;
  int32_T ki;
  st.prev = sp;
  st.tls = sp->tls;
  memset(&work[0], 0, 9U * sizeof(real_T));
  x[0] = 0.0;
  x[1] = 0.0;
  x[2] = 0.0;
  x[3] = 0.0;
  work[0] = 0.0;
  for (ii = 0; ii < 2; ii++) {
    work[ii + 1] = 0.0;
    for (i = 0; i <= ii; i++) {
      work[ii + 1] += muDoubleScalarAbs(T[i + 3 * (ii + 1)]);
    }
  }
  ip = 0;
  for (ki = 2; ki >= 0; ki--) {
    if (ip == -1) {
      ip = 1;
    } else {
      real_T smin;
      real_T wi;
      real_T wr_tmp;
      if ((ki + 1 == 1) || (T[ki + 3 * (ki - 1)] == 0.0)) {
        ip = 0;
      } else {
        ip = -1;
      }
      i = ki + 3 * ki;
      wr_tmp = T[i];
      wi = 0.0;
      if (ip != 0) {
        wi = muDoubleScalarSqrt(muDoubleScalarAbs(T[ki + 3 * (ki - 1)])) *
             muDoubleScalarSqrt(muDoubleScalarAbs(T[i - 1]));
      }
      smin = muDoubleScalarMax(2.2204460492503131E-16 *
                                   (muDoubleScalarAbs(wr_tmp) + wi),
                               3.0062525400134592E-292);
      if (ip == 0) {
        real_T scale;
        int32_T scalarLB;
        int32_T vectorUB;
        work[ki + 6] = 1.0;
        scalarLB = (ki / 2) << 1;
        vectorUB = scalarLB - 2;
        for (k = 0; k <= vectorUB; k += 2) {
          _mm_storeu_pd(&work[6], _mm_mul_pd(_mm_loadu_pd(&T[3 * ki]),
                                             _mm_set1_pd(-1.0)));
        }
        for (k = scalarLB; k < ki; k++) {
          work[k + 6] = -T[k + 3 * ki];
        }
        ii = ki - 1;
        while (ii + 1 >= 1) {
          if ((ii + 1 == 1) || (T[1] == 0.0)) {
            scale = xdlaln2(1, 1, smin, T, (ii * 3 + ii) + 1, work, ii + 7,
                            wr_tmp, 0.0, x, &remax);
            if ((remax > 1.0) && (work[ii] > 3.3264005158911989E+291 / remax)) {
              x[0] /= remax;
              scale /= remax;
            }
            if (scale != 1.0) {
              int32_T b_i;
              b_i = ki + 7;
              scalarLB = (((ki + 1) / 2) << 1) + 7;
              vectorUB = scalarLB - 2;
              for (k = 7; k <= vectorUB; k += 2) {
                __m128d r;
                r = _mm_loadu_pd(&work[6]);
                _mm_storeu_pd(&work[6], _mm_mul_pd(_mm_set1_pd(scale), r));
              }
              for (k = scalarLB; k <= b_i; k++) {
                work[k - 1] *= scale;
              }
            }
            work[ii + 6] = x[0];
            if ((ii >= 1) && (!(-x[0] == 0.0))) {
              work[6] += -x[0] * T[ii * 3];
            }
            ii--;
          } else {
            scale = xdlaln2(2, 1, smin, T, 1, work, 7, wr_tmp, 0.0, x, &remax);
            if ((remax > 1.0) && (muDoubleScalarMax(work[0], work[1]) >
                                  3.3264005158911989E+291 / remax)) {
              x[0] /= remax;
              x[1] /= remax;
              scale /= remax;
            }
            if (scale != 1.0) {
              int32_T b_i;
              b_i = ki + 7;
              scalarLB = (((ki + 1) / 2) << 1) + 7;
              vectorUB = scalarLB - 2;
              for (k = 7; k <= vectorUB; k += 2) {
                __m128d r;
                r = _mm_loadu_pd(&work[6]);
                _mm_storeu_pd(&work[6], _mm_mul_pd(_mm_set1_pd(scale), r));
              }
              for (k = scalarLB; k <= b_i; k++) {
                work[k - 1] *= scale;
              }
            }
            work[6] = x[0];
            work[7] = x[1];
            ii = -1;
          }
        }
        if (ki + 1 > 1) {
          st.site = &cj_emlrtRSI;
          b_xgemv(&st, ki, work, work[ki + 6], vr, ki * 3 + 1);
        }
        i = ki * 3;
        ii = -1;
        remax = muDoubleScalarAbs(vr[i]);
        scale = muDoubleScalarAbs(vr[i + 1]);
        if (scale > remax) {
          ii = 0;
          remax = scale;
        }
        if (muDoubleScalarAbs(vr[i + 2]) > remax) {
          ii = 1;
        }
        st.site = &bj_emlrtRSI;
        b_xscal(&st, 1.0 / muDoubleScalarAbs(vr[(ii + 3 * ki) + 1]), vr,
                ki * 3 + 1);
      } else {
        real_T scale;
        int32_T b_i;
        remax = T[i - 1];
        b_i = 3 * (ki - 1);
        scale = T[ki + b_i];
        if (muDoubleScalarAbs(remax) >= muDoubleScalarAbs(scale)) {
          work[ki + 2] = 1.0;
          work[ki + 6] = wi / remax;
        } else {
          work[ki + 2] = -wi / scale;
          work[ki + 6] = 1.0;
        }
        work[ki + 3] = 0.0;
        work[ki + 5] = 0.0;
        for (k = 0; k <= ki - 2; k++) {
          work[3] = -work[ki + 2] * T[b_i];
          work[6] = -work[ki + 6] * T[3 * ki];
        }
        ii = ki - 1;
        while (ii >= 1) {
          scale = xdlaln2(1, 2, smin, T, 1, work, 4, wr_tmp, wi, x, &remax);
          if ((remax > 1.0) && (work[0] > 3.3264005158911989E+291 / remax)) {
            x[0] /= remax;
            x[2] /= remax;
            scale /= remax;
          }
          if (scale != 1.0) {
            __m128d r;
            int32_T scalarLB;
            int32_T vectorUB;
            ii = ki + 4;
            i = ((ki + 1) / 2) << 1;
            scalarLB = i + 4;
            vectorUB = i + 2;
            for (k = 4; k <= vectorUB; k += 2) {
              r = _mm_loadu_pd(&work[3]);
              _mm_storeu_pd(&work[3], _mm_mul_pd(_mm_set1_pd(scale), r));
            }
            for (k = scalarLB; k <= ii; k++) {
              work[k - 1] *= scale;
            }
            ii = ki + 7;
            scalarLB = i + 7;
            vectorUB = i + 5;
            for (k = 7; k <= vectorUB; k += 2) {
              r = _mm_loadu_pd(&work[6]);
              _mm_storeu_pd(&work[6], _mm_mul_pd(_mm_set1_pd(scale), r));
            }
            for (k = scalarLB; k <= ii; k++) {
              work[k - 1] *= scale;
            }
          }
          work[3] = x[0];
          work[6] = x[2];
          ii = 0;
        }
        if (ki + 1 > 2) {
          if (work[4] != 1.0) {
            if (work[4] == 0.0) {
              vr[3] = 0.0;
              vr[4] = 0.0;
              vr[5] = 0.0;
            } else {
              vr[3] *= work[4];
              vr[4] *= work[4];
              vr[5] *= work[4];
            }
          }
          vr[3] += vr[0] * work[3];
          vr[4] += vr[1] * work[3];
          vr[5] += vr[2] * work[3];
          st.site = &wi_emlrtRSI;
          b_xgemv(&st, 1, work, work[8], vr, 7);
        } else {
          st.site = &vi_emlrtRSI;
          b_xscal(&st, work[3], vr, b_i + 1);
          st.site = &ui_emlrtRSI;
          b_xscal(&st, work[ki + 6], vr, ki * 3 + 1);
        }
        i = 3 * ki + 1;
        remax =
            1.0 /
            muDoubleScalarMax(
                muDoubleScalarMax(
                    muDoubleScalarMax(0.0, muDoubleScalarAbs(vr[b_i]) +
                                               muDoubleScalarAbs(vr[3 * ki])),
                    muDoubleScalarAbs(vr[b_i + 1]) + muDoubleScalarAbs(vr[i])),
                muDoubleScalarAbs(vr[b_i + 2]) +
                    muDoubleScalarAbs(vr[3 * ki + 2]));
        st.site = &ti_emlrtRSI;
        b_xscal(&st, remax, vr, b_i + 1);
        st.site = &si_emlrtRSI;
        b_xscal(&st, remax, vr, i);
      }
    }
  }
}

/* End of code generation (xdtrevc3.c) */
