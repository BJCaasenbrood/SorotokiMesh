/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xdlahqr.c
 *
 * Code generation for function 'xdlahqr'
 *
 */

/* Include files */
#include "xdlahqr.h"
#include "LocalsNHFast_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "xdlanv2.h"
#include "xrot.h"
#include "xzlarfg.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo og_emlrtRSI = {
    337,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo pg_emlrtRSI = {
    309,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo qg_emlrtRSI = {
    301,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = {
    281,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo sg_emlrtRSI = {
    273,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo tg_emlrtRSI = {
    243,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo ug_emlrtRSI = {
    240,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo vg_emlrtRSI = {
    226,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = {
    172,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo xg_emlrtRSI = {
    33,        /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

static emlrtRSInfo yg_emlrtRSI = {
    16,        /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

/* Function Definitions */
int32_T xdlahqr(const emlrtStack *sp, int32_T ilo, int32_T ihi, real_T h[9],
                int32_T iloz, int32_T ihiz, real_T z[9], real_T wr[3],
                real_T wi[3])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T v[3];
  real_T aa;
  real_T d;
  real_T h12;
  real_T h22;
  real_T rt1r;
  real_T tr;
  real_T tst;
  int32_T b_i;
  int32_T b_k;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  info = 0;
  st.site = &yg_emlrtRSI;
  if (ilo - 1 > 2147483646) {
    b_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  i = (uint8_T)(ilo - 1);
  for (b_i = 0; b_i < i; b_i++) {
    wr[b_i] = h[b_i + 3 * b_i];
    wi[b_i] = 0.0;
  }
  i = ihi + 1;
  for (b_i = i; b_i < 4; b_i++) {
    wr[b_i - 1] = h[(b_i + 3 * (b_i - 1)) - 1];
    wi[b_i - 1] = 0.0;
  }
  if (ilo == ihi) {
    wr[ilo - 1] = h[(ilo + 3 * (ilo - 1)) - 1];
    wi[ilo - 1] = 0.0;
  } else {
    real_T smlnum;
    int32_T kdefl;
    int32_T nz_tmp;
    boolean_T exitg1;
    st.site = &xg_emlrtRSI;
    if ((ilo <= ihi - 3) && (ihi - 3 > 2147483646)) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    if (ilo <= ihi - 2) {
      h[ihi - 1] = 0.0;
    }
    nz_tmp = (ihiz - iloz) + 1;
    smlnum = 2.2250738585072014E-308 *
             ((real_T)((ihi - ilo) + 1) / 2.2204460492503131E-16);
    kdefl = 0;
    b_i = ihi - 1;
    exitg1 = false;
    while ((!exitg1) && (b_i + 1 >= ilo)) {
      int32_T its;
      int32_T ix0;
      int32_T l;
      boolean_T converged;
      boolean_T exitg2;
      l = ilo;
      converged = false;
      its = 0;
      exitg2 = false;
      while ((!exitg2) && (its < 301)) {
        real_T rt2r;
        real_T s;
        int32_T nr;
        boolean_T exitg3;
        k = b_i;
        exitg3 = false;
        while ((!exitg3) && (k + 1 > l)) {
          i = k + 3 * (k - 1);
          d = muDoubleScalarAbs(h[i]);
          if (d <= smlnum) {
            exitg3 = true;
          } else {
            nr = k + 3 * k;
            aa = h[nr];
            tr = muDoubleScalarAbs(aa);
            h12 = h[i - 1];
            tst = muDoubleScalarAbs(h12) + tr;
            if (tst == 0.0) {
              if (k - 1 >= ilo) {
                tst = muDoubleScalarAbs(h[k - 1]);
              }
              if (k + 2 <= ihi) {
                tst += muDoubleScalarAbs(h[3 * k + 2]);
              }
            }
            if (d <= 2.2204460492503131E-16 * tst) {
              rt2r = muDoubleScalarAbs(h[nr - 1]);
              tst = muDoubleScalarAbs(h12 - aa);
              aa = muDoubleScalarMax(tr, tst);
              tst = muDoubleScalarMin(tr, tst);
              s = aa + tst;
              if (muDoubleScalarMin(d, rt2r) *
                      (muDoubleScalarMax(d, rt2r) / s) <=
                  muDoubleScalarMax(smlnum, 2.2204460492503131E-16 *
                                                (tst * (aa / s)))) {
                exitg3 = true;
              } else {
                k--;
              }
            } else {
              k--;
            }
          }
        }
        l = k + 1;
        if (k + 1 > ilo) {
          h[k + 3 * (k - 1)] = 0.0;
        }
        if (k + 1 >= b_i) {
          converged = true;
          exitg2 = true;
        } else {
          __m128d r;
          int32_T m;
          kdefl++;
          if (kdefl - kdefl / 20 * 20 == 0) {
            s = muDoubleScalarAbs(h[b_i + 3 * (b_i - 1)]) +
                muDoubleScalarAbs(h[b_i - 1]);
            tst = 0.75 * s + h[b_i + 3 * b_i];
            h12 = -0.4375 * s;
            aa = s;
            h22 = tst;
          } else if (kdefl - kdefl / 10 * 10 == 0) {
            s = muDoubleScalarAbs(h[1]) + muDoubleScalarAbs(h[5]);
            tst = 0.75 * s + h[0];
            h12 = -0.4375 * s;
            aa = s;
            h22 = tst;
          } else {
            nr = b_i + 3 * (b_i - 1);
            tst = h[nr - 1];
            aa = h[nr];
            nr = b_i + 3 * b_i;
            h12 = h[nr - 1];
            h22 = h[nr];
          }
          s = ((muDoubleScalarAbs(tst) + muDoubleScalarAbs(h12)) +
               muDoubleScalarAbs(aa)) +
              muDoubleScalarAbs(h22);
          if (s == 0.0) {
            rt1r = 0.0;
            tst = 0.0;
            rt2r = 0.0;
            h12 = 0.0;
          } else {
            tst /= s;
            aa /= s;
            h12 /= s;
            h22 /= s;
            tr = (tst + h22) / 2.0;
            tst = (tst - tr) * (h22 - tr) - h12 * aa;
            h12 = muDoubleScalarAbs(tst);
            st.site = &wg_emlrtRSI;
            if (h12 < 0.0) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &j_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }
            h12 = muDoubleScalarSqrt(h12);
            if (tst >= 0.0) {
              rt1r = tr * s;
              rt2r = rt1r;
              tst = h12 * s;
              h12 = -tst;
            } else {
              rt1r = tr + h12;
              rt2r = tr - h12;
              if (muDoubleScalarAbs(rt1r - h22) <=
                  muDoubleScalarAbs(rt2r - h22)) {
                rt1r *= s;
                rt2r = rt1r;
              } else {
                rt2r *= s;
                rt1r = rt2r;
              }
              tst = 0.0;
              h12 = 0.0;
            }
          }
          m = b_i - 1;
          if (b_i - 1 >= 1) {
            aa = h[0] - rt2r;
            s = (muDoubleScalarAbs(aa) + muDoubleScalarAbs(h12)) +
                muDoubleScalarAbs(h[1]);
            tr = h[1] / s;
            v[0] = (tr * h[3] + (h[0] - rt1r) * (aa / s)) - tst * (h12 / s);
            v[1] = tr * (((h[0] + h[4]) - rt1r) - rt2r);
            v[2] = tr * h[5];
            s = (muDoubleScalarAbs(v[0]) + muDoubleScalarAbs(v[1])) +
                muDoubleScalarAbs(v[2]);
            r = _mm_loadu_pd(&v[0]);
            _mm_storeu_pd(&v[0], _mm_div_pd(r, _mm_set1_pd(s)));
            v[2] /= s;
          }
          st.site = &vg_emlrtRSI;
          if ((b_i - 1 <= b_i) && (b_i > 2147483646)) {
            b_st.site = &db_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }
          for (k = m; k <= b_i; k++) {
            i = (b_i - k) + 2;
            nr = muIntScalarMin_sint32(3, i);
            if (k > b_i - 1) {
              ix0 = ((k - 2) * 3 + k) - 1;
              st.site = &ug_emlrtRSI;
              i = (uint8_T)nr;
              for (b_k = 0; b_k < i; b_k++) {
                v[b_k] = h[ix0 + b_k];
              }
            }
            tst = v[0];
            st.site = &tg_emlrtRSI;
            rt2r = b_xzlarfg(nr, &tst, v);
            if (k > b_i - 1) {
              h[k - 1] = tst;
              h[k] = 0.0;
              if (k < b_i) {
                h[2] = 0.0;
              }
            }
            d = v[1];
            aa = rt2r * v[1];
            if (nr == 3) {
              __m128d r1;
              __m128d r2;
              int32_T scalarLB;
              rt1r = v[2];
              tst = rt2r * v[2];
              for (j = k; j < 4; j++) {
                nr = 3 * (j - 1);
                ix0 = k + nr;
                h12 = h[ix0 - 1];
                tr = (h12 + d * h[ix0]) + rt1r * h[nr + 2];
                h[ix0 - 1] = h12 - tr * rt2r;
                h[ix0] -= tr * aa;
                h[nr + 2] -= tr * tst;
              }
              i = k + 3;
              nr = b_i + 1;
              nr = muIntScalarMin_sint32(i, nr);
              st.site = &sg_emlrtRSI;
              if (nr > 2147483646) {
                b_st.site = &db_emlrtRSI;
                check_forloop_overflow_error(&b_st);
              }
              i = (uint8_T)nr;
              scalarLB = ((uint8_T)nr >> 1) << 1;
              nr = scalarLB - 2;
              for (j = 0; j <= nr; j += 2) {
                ix0 = j + 3 * k;
                r = _mm_loadu_pd(&h[ix0]);
                b_k = j + 3 * (k - 1);
                r1 = _mm_loadu_pd(&h[b_k]);
                r2 = _mm_loadu_pd(&h[j + 6]);
                r = _mm_add_pd(_mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(d), r)),
                               _mm_mul_pd(_mm_set1_pd(rt1r), r2));
                r1 = _mm_loadu_pd(&h[b_k]);
                _mm_storeu_pd(&h[b_k],
                              _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(rt2r))));
                r1 = _mm_loadu_pd(&h[ix0]);
                _mm_storeu_pd(&h[ix0],
                              _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(aa))));
                r1 = _mm_loadu_pd(&h[j + 6]);
                _mm_storeu_pd(&h[j + 6],
                              _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(tst))));
              }
              for (j = scalarLB; j < i; j++) {
                nr = j + 3 * (k - 1);
                h12 = h[nr];
                ix0 = j + 3 * k;
                tr = (h12 + d * h[ix0]) + rt1r * h[j + 6];
                h[nr] = h12 - tr * rt2r;
                h[ix0] -= tr * aa;
                h[j + 6] -= tr * tst;
              }
              st.site = &rg_emlrtRSI;
              if ((iloz <= ihiz) && (ihiz > 2147483646)) {
                b_st.site = &db_emlrtRSI;
                check_forloop_overflow_error(&b_st);
              }
              scalarLB = ((nz_tmp / 2) << 1) + iloz;
              nr = scalarLB - 2;
              for (j = iloz; j <= nr; j += 2) {
                i = (j + 3 * k) - 1;
                r = _mm_loadu_pd(&z[i]);
                ix0 = (j + 3 * (k - 1)) - 1;
                r1 = _mm_loadu_pd(&z[ix0]);
                r2 = _mm_loadu_pd(&z[j + 5]);
                r = _mm_add_pd(_mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(d), r)),
                               _mm_mul_pd(_mm_set1_pd(rt1r), r2));
                r1 = _mm_loadu_pd(&z[ix0]);
                _mm_storeu_pd(&z[ix0],
                              _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(rt2r))));
                r1 = _mm_loadu_pd(&z[i]);
                _mm_storeu_pd(&z[i],
                              _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(aa))));
                r1 = _mm_loadu_pd(&z[j + 5]);
                _mm_storeu_pd(&z[j + 5],
                              _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(tst))));
              }
              for (j = scalarLB; j <= ihiz; j++) {
                nr = (j + 3 * (k - 1)) - 1;
                h12 = z[nr];
                ix0 = (j + 3 * k) - 1;
                tr = (h12 + d * z[ix0]) + rt1r * z[j + 5];
                z[nr] = h12 - tr * rt2r;
                z[ix0] -= tr * aa;
                z[j + 5] -= tr * tst;
              }
            } else if (nr == 2) {
              __m128d r1;
              __m128d r2;
              int32_T scalarLB;
              for (j = k; j < 4; j++) {
                i = k + 3 * (j - 1);
                rt1r = h[i - 1];
                h22 = h[i];
                tr = rt1r + d * h22;
                rt1r -= tr * rt2r;
                h[i - 1] = rt1r;
                h22 -= tr * aa;
                h[i] = h22;
              }
              st.site = &qg_emlrtRSI;
              if (b_i + 1 > 2147483646) {
                b_st.site = &db_emlrtRSI;
                check_forloop_overflow_error(&b_st);
              }
              i = (uint8_T)(b_i + 1);
              scalarLB = ((uint8_T)(b_i + 1) >> 1) << 1;
              nr = scalarLB - 2;
              for (j = 0; j <= nr; j += 2) {
                ix0 = j + 3 * k;
                r = _mm_loadu_pd(&h[ix0]);
                b_k = j + 3 * (k - 1);
                r1 = _mm_loadu_pd(&h[b_k]);
                r2 = _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(d), r));
                _mm_storeu_pd(
                    &h[b_k], _mm_sub_pd(r1, _mm_mul_pd(r2, _mm_set1_pd(rt2r))));
                _mm_storeu_pd(&h[ix0],
                              _mm_sub_pd(r, _mm_mul_pd(r2, _mm_set1_pd(aa))));
              }
              for (j = scalarLB; j < i; j++) {
                ix0 = j + 3 * (k - 1);
                rt1r = h[ix0];
                b_k = j + 3 * k;
                h22 = h[b_k];
                tr = rt1r + d * h22;
                rt1r -= tr * rt2r;
                h[ix0] = rt1r;
                h22 -= tr * aa;
                h[b_k] = h22;
              }
              st.site = &pg_emlrtRSI;
              if ((iloz <= ihiz) && (ihiz > 2147483646)) {
                b_st.site = &db_emlrtRSI;
                check_forloop_overflow_error(&b_st);
              }
              scalarLB = ((nz_tmp / 2) << 1) + iloz;
              nr = scalarLB - 2;
              for (j = iloz; j <= nr; j += 2) {
                i = (j + 3 * k) - 1;
                r = _mm_loadu_pd(&z[i]);
                ix0 = (j + 3 * (k - 1)) - 1;
                r1 = _mm_loadu_pd(&z[ix0]);
                r2 = _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(d), r));
                _mm_storeu_pd(
                    &z[ix0], _mm_sub_pd(r1, _mm_mul_pd(r2, _mm_set1_pd(rt2r))));
                _mm_storeu_pd(&z[i],
                              _mm_sub_pd(r, _mm_mul_pd(r2, _mm_set1_pd(aa))));
              }
              for (j = scalarLB; j <= ihiz; j++) {
                i = (j + 3 * (k - 1)) - 1;
                rt1r = z[i];
                ix0 = (j + 3 * k) - 1;
                h22 = z[ix0];
                tr = rt1r + d * h22;
                rt1r -= tr * rt2r;
                z[i] = rt1r;
                h22 -= tr * aa;
                z[ix0] = h22;
              }
            }
          }
          its++;
        }
      }
      if (!converged) {
        info = b_i + 1;
        exitg1 = true;
      } else {
        if (l == b_i + 1) {
          wr[b_i] = h[b_i + 3 * b_i];
          wi[b_i] = 0.0;
        } else if (l == b_i) {
          i = b_i + 3 * b_i;
          d = h[i - 1];
          ix0 = 3 * (b_i - 1);
          b_k = b_i + ix0;
          rt1r = h[b_k];
          h22 = h[i];
          st.site = &og_emlrtRSI;
          wr[b_i - 1] = xdlanv2(&h[b_k - 1], &d, &rt1r, &h22, &wi[b_i - 1],
                                &tst, &h12, &aa, &tr);
          wr[b_i] = tst;
          wi[b_i] = h12;
          h[i - 1] = d;
          h[b_k] = rt1r;
          h[i] = h22;
          if (b_i + 1 < 3) {
            i = (b_i + 1) * 3 + b_i;
            st.site = &ng_emlrtRSI;
            xrot(&st, 2 - b_i, h, i, i + 1, aa, tr);
          }
          st.site = &mg_emlrtRSI;
          b_xrot(&st, b_i - 1, h, ix0 + 1, b_i * 3 + 1, aa, tr);
          st.site = &lg_emlrtRSI;
          b_xrot(&st, nz_tmp, z, ix0 + iloz, b_i * 3 + iloz, aa, tr);
        }
        kdefl = 0;
        b_i = l - 2;
      }
    }
    h[2] = 0.0;
  }
  return info;
}

/* End of code generation (xdlahqr.c) */
