/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xhseqr.c
 *
 * Code generation for function 'xhseqr'
 *
 */

/* Include files */
#include "xhseqr.h"
#include "LocalsNHFast_data.h"
#include "rt_nonfinite.h"
#include "xdlanv2.h"
#include "xrot.h"
#include "xzlarfg.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo jg_emlrtRSI =
    {
        21,       /* lineNo */
        "xhseqr", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xhseqr.m" /* pathName */
};

static emlrtRSInfo kg_emlrtRSI = {
    16,        /* lineNo */
    "xdhseqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdhseqr.m" /* pathName */
};

/* Function Definitions */
int32_T xhseqr(const emlrtStack *sp, real_T h[9], real_T z[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T v[3];
  real_T aa;
  real_T d;
  real_T h12;
  real_T h22;
  real_T rt1r;
  real_T rt2r;
  real_T s;
  real_T tr;
  real_T tst;
  int32_T b_k;
  int32_T c_k;
  int32_T i;
  int32_T info;
  int32_T j;
  int32_T kdefl;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &kg_emlrtRSI;
  info = 0;
  h[2] = 0.0;
  kdefl = 0;
  i = 2;
  exitg1 = false;
  while ((!exitg1) && (i + 1 >= 1)) {
    int32_T b_i;
    int32_T its;
    int32_T k;
    int32_T nr;
    boolean_T converged;
    boolean_T exitg2;
    k = -1;
    converged = false;
    its = 0;
    exitg2 = false;
    while ((!exitg2) && (its < 301)) {
      int32_T tst_tmp_tmp;
      boolean_T exitg3;
      k = i - 1;
      exitg3 = false;
      while ((!exitg3) && (k + 2 > 1)) {
        b_i = k + 3 * k;
        d = muDoubleScalarAbs(h[b_i + 1]);
        if (d <= 3.0062525400134592E-292) {
          exitg3 = true;
        } else {
          nr = 3 * (k + 1);
          tst_tmp_tmp = k + nr;
          aa = h[tst_tmp_tmp + 1];
          tr = muDoubleScalarAbs(aa);
          h12 = h[b_i];
          tst = muDoubleScalarAbs(h12) + tr;
          if (tst == 0.0) {
            if (k >= 1) {
              tst = muDoubleScalarAbs(h[k]);
            }
            if (k + 3 <= 3) {
              tst += muDoubleScalarAbs(h[nr + 2]);
            }
          }
          if (d <= 2.2204460492503131E-16 * tst) {
            rt2r = muDoubleScalarAbs(h[tst_tmp_tmp]);
            tst = muDoubleScalarAbs(h12 - aa);
            aa = muDoubleScalarMax(tr, tst);
            tst = muDoubleScalarMin(tr, tst);
            s = aa + tst;
            if (muDoubleScalarMin(d, rt2r) * (muDoubleScalarMax(d, rt2r) / s) <=
                muDoubleScalarMax(3.0062525400134592E-292,
                                  2.2204460492503131E-16 * (tst * (aa / s)))) {
              exitg3 = true;
            } else {
              k--;
            }
          } else {
            k--;
          }
        }
      }
      if (k + 2 > 1) {
        h[(k + 3 * k) + 1] = 0.0;
      }
      if (k + 2 >= i) {
        converged = true;
        exitg2 = true;
      } else {
        __m128d r;
        int32_T m;
        kdefl++;
        if (kdefl - kdefl / 20 * 20 == 0) {
          s = muDoubleScalarAbs(h[i + 3 * (i - 1)]) +
              muDoubleScalarAbs(h[i - 1]);
          tst = 0.75 * s + h[i + 3 * i];
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
          nr = i + 3 * (i - 1);
          tst = h[nr - 1];
          aa = h[nr];
          nr = i + 3 * i;
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
          h12 = muDoubleScalarSqrt(muDoubleScalarAbs(tst));
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
        m = i - 1;
        if (i - 1 >= 1) {
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
        for (c_k = m; c_k <= i; c_k++) {
          b_i = (i - c_k) + 2;
          nr = muIntScalarMin_sint32(3, b_i);
          if (c_k > i - 1) {
            tst_tmp_tmp = ((c_k - 2) * 3 + c_k) - 1;
            for (b_k = 0; b_k < nr; b_k++) {
              v[b_k] = h[tst_tmp_tmp + b_k];
            }
          }
          tst = v[0];
          rt2r = b_xzlarfg(nr, &tst, v);
          if (c_k > i - 1) {
            h[c_k - 1] = tst;
            h[c_k] = 0.0;
            if (c_k < i) {
              h[2] = 0.0;
            }
          }
          d = v[1];
          aa = rt2r * v[1];
          if (nr == 3) {
            __m128d r1;
            __m128d r2;
            int32_T scalarLB;
            s = v[2];
            tst = rt2r * v[2];
            for (j = c_k; j < 4; j++) {
              tst_tmp_tmp = 3 * (j - 1);
              nr = c_k + tst_tmp_tmp;
              h12 = h[nr - 1];
              tr = (h12 + d * h[nr]) + s * h[tst_tmp_tmp + 2];
              h[nr - 1] = h12 - tr * rt2r;
              h[nr] -= tr * aa;
              h[tst_tmp_tmp + 2] -= tr * tst;
            }
            b_i = c_k + 3;
            nr = i + 1;
            b_i = muIntScalarMin_sint32(b_i, nr);
            scalarLB = (b_i / 2) << 1;
            tst_tmp_tmp = scalarLB - 2;
            for (j = 0; j <= tst_tmp_tmp; j += 2) {
              nr = j + 3 * c_k;
              r = _mm_loadu_pd(&h[nr]);
              b_k = j + 3 * (c_k - 1);
              r1 = _mm_loadu_pd(&h[b_k]);
              r2 = _mm_loadu_pd(&h[j + 6]);
              r = _mm_add_pd(_mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(d), r)),
                             _mm_mul_pd(_mm_set1_pd(s), r2));
              r1 = _mm_loadu_pd(&h[b_k]);
              _mm_storeu_pd(&h[b_k],
                            _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(rt2r))));
              r1 = _mm_loadu_pd(&h[nr]);
              _mm_storeu_pd(&h[nr],
                            _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(aa))));
              r1 = _mm_loadu_pd(&h[j + 6]);
              _mm_storeu_pd(&h[j + 6],
                            _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(tst))));
            }
            for (j = scalarLB; j < b_i; j++) {
              tst_tmp_tmp = j + 3 * (c_k - 1);
              h12 = h[tst_tmp_tmp];
              nr = j + 3 * c_k;
              tr = (h12 + d * h[nr]) + s * h[j + 6];
              h[tst_tmp_tmp] = h12 - tr * rt2r;
              h[nr] -= tr * aa;
              h[j + 6] -= tr * tst;
            }
            r = _mm_loadu_pd(&z[3 * c_k]);
            b_i = 3 * (c_k - 1);
            r1 = _mm_loadu_pd(&z[b_i]);
            r2 = _mm_loadu_pd(&z[6]);
            r = _mm_add_pd(_mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(v[1]), r)),
                           _mm_mul_pd(_mm_set1_pd(v[2]), r2));
            r1 = _mm_loadu_pd(&z[b_i]);
            _mm_storeu_pd(&z[b_i],
                          _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(rt2r))));
            r1 = _mm_loadu_pd(&z[3 * c_k]);
            _mm_storeu_pd(&z[3 * c_k],
                          _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(aa))));
            r1 = _mm_loadu_pd(&z[6]);
            _mm_storeu_pd(&z[6],
                          _mm_sub_pd(r1, _mm_mul_pd(r, _mm_set1_pd(tst))));
            h12 = z[b_i + 2];
            nr = 3 * c_k + 2;
            tr = (h12 + v[1] * z[nr]) + v[2] * z[8];
            z[b_i + 2] = h12 - tr * rt2r;
            z[nr] -= tr * aa;
            z[8] -= tr * tst;
          } else if (nr == 2) {
            __m128d r1;
            __m128d r2;
            int32_T scalarLB;
            for (j = c_k; j < 4; j++) {
              b_i = c_k + 3 * (j - 1);
              s = h[b_i - 1];
              rt1r = h[b_i];
              tr = s + d * rt1r;
              s -= tr * rt2r;
              h[b_i - 1] = s;
              rt1r -= tr * aa;
              h[b_i] = rt1r;
            }
            scalarLB = ((i + 1) / 2) << 1;
            tst_tmp_tmp = scalarLB - 2;
            for (j = 0; j <= tst_tmp_tmp; j += 2) {
              b_i = j + 3 * c_k;
              r = _mm_loadu_pd(&h[b_i]);
              nr = j + 3 * (c_k - 1);
              r1 = _mm_loadu_pd(&h[nr]);
              r2 = _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(d), r));
              _mm_storeu_pd(&h[nr],
                            _mm_sub_pd(r1, _mm_mul_pd(r2, _mm_set1_pd(rt2r))));
              _mm_storeu_pd(&h[b_i],
                            _mm_sub_pd(r, _mm_mul_pd(r2, _mm_set1_pd(aa))));
            }
            for (j = scalarLB; j <= i; j++) {
              b_i = j + 3 * (c_k - 1);
              s = h[b_i];
              nr = j + 3 * c_k;
              rt1r = h[nr];
              tr = s + d * rt1r;
              s -= tr * rt2r;
              h[b_i] = s;
              rt1r -= tr * aa;
              h[nr] = rt1r;
            }
            r = _mm_loadu_pd(&z[3 * c_k]);
            b_i = 3 * (c_k - 1);
            r1 = _mm_loadu_pd(&z[b_i]);
            r2 = _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(v[1]), r));
            _mm_storeu_pd(&z[b_i],
                          _mm_sub_pd(r1, _mm_mul_pd(r2, _mm_set1_pd(rt2r))));
            _mm_storeu_pd(&z[3 * c_k],
                          _mm_sub_pd(r, _mm_mul_pd(r2, _mm_set1_pd(aa))));
            d = z[b_i + 2];
            nr = 3 * c_k + 2;
            s = z[nr];
            tr = d + v[1] * s;
            d -= tr * rt2r;
            z[b_i + 2] = d;
            s -= tr * aa;
            z[nr] = s;
          }
        }
        its++;
      }
    }
    if (!converged) {
      info = i + 1;
      exitg1 = true;
    } else {
      if ((k + 2 != i + 1) && (k + 2 == i)) {
        b_i = i + 3 * i;
        d = h[b_i - 1];
        nr = 3 * (i - 1);
        b_k = i + nr;
        s = h[b_k];
        rt1r = h[b_i];
        xdlanv2(&h[b_k - 1], &d, &s, &rt1r, &h12, &aa, &tr, &rt2r, &h22);
        h[b_i - 1] = d;
        h[b_k] = s;
        h[b_i] = rt1r;
        if (i + 1 < 3) {
          b_i = (i + 1) * 3 + i;
          c_st.site = &ng_emlrtRSI;
          xrot(&c_st, 2 - i, h, b_i, b_i + 1, rt2r, h22);
        }
        b_i = i * 3 + 1;
        c_st.site = &mg_emlrtRSI;
        b_xrot(&c_st, i - 1, h, nr + 1, b_i, rt2r, h22);
        c_st.site = &lg_emlrtRSI;
        b_xrot(&c_st, 3, z, nr + 1, b_i, rt2r, h22);
      }
      kdefl = 0;
      i = k;
    }
  }
  h[2] = 0.0;
  return info;
}

/* End of code generation (xhseqr.c) */
