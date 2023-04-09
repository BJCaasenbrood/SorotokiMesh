/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgeev.c
 *
 * Code generation for function 'xgeev'
 *
 */

/* Include files */
#include "xgeev.h"
#include "LocalsNHFast_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "xdlahqr.h"
#include "xdtrevc3.h"
#include "xnrm2.h"
#include "xscal.h"
#include "xzgebal.h"
#include "xzgehrd.h"
#include "xzlascl.h"
#include "xzunghr.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo if_emlrtRSI = {
    143,       /* lineNo */
    "xzlartg", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlartg.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = {
    159,       /* lineNo */
    "xzlartg", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlartg.m" /* pathName */
};

static emlrtRSInfo nh_emlrtRSI =
    {
        52,      /* lineNo */
        "xgeev", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeev.m" /* pathName */
};

static emlrtRSInfo oh_emlrtRSI = {
    139,      /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = {
    134,      /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = {
    133,      /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo rh_emlrtRSI = {
    131,      /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo sh_emlrtRSI = {
    130,      /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI = {
    102,      /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    101,      /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    97,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo wh_emlrtRSI = {
    94,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo xh_emlrtRSI = {
    91,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo yh_emlrtRSI = {
    90,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo ai_emlrtRSI = {
    88,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo bi_emlrtRSI = {
    87,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    81,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    79,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    62,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo fi_emlrtRSI = {
    58,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo gi_emlrtRSI = {
    53,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo hi_emlrtRSI = {
    49,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo ii_emlrtRSI = {
    46,       /* lineNo */
    "xdgeev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdgeev.m" /* pathName */
};

static emlrtRSInfo lj_emlrtRSI = {
    18,        /* lineNo */
    "xzgebak", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgebak.m" /* pathName */
};

/* Function Definitions */
int32_T xgeev(const emlrtStack *sp, const real_T A[9], creal_T W[3],
              creal_T VR[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A[9];
  real_T vr[9];
  real_T absxk;
  real_T anrm;
  int32_T b_i;
  int32_T b_tmp_tmp;
  int32_T count;
  int32_T i;
  int32_T info;
  int32_T ix;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
  info = 0;
  anrm = 0.0;
  count = 0;
  exitg1 = false;
  while ((!exitg1) && (count < 9)) {
    absxk = muDoubleScalarAbs(A[count]);
    if (muDoubleScalarIsNaN(absxk)) {
      anrm = rtNaN;
      exitg1 = true;
    } else {
      if (absxk > anrm) {
        anrm = absxk;
      }
      count++;
    }
  }
  if (muDoubleScalarIsInf(anrm) || muDoubleScalarIsNaN(anrm)) {
    W[0].re = rtNaN;
    W[0].im = 0.0;
    W[1].re = rtNaN;
    W[1].im = 0.0;
    W[2].re = rtNaN;
    W[2].im = 0.0;
    for (i = 0; i < 9; i++) {
      VR[i].re = rtNaN;
      VR[i].im = 0.0;
    }
  } else {
    real_T scale[3];
    real_T wi[3];
    real_T wr[3];
    real_T tau[2];
    real_T cscale;
    int32_T ilo;
    boolean_T scalea;
    cscale = anrm;
    scalea = false;
    if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
      scalea = true;
      cscale = 6.7178761075670888E-139;
      b_st.site = &ii_emlrtRSI;
      xzlascl(anrm, cscale, b_A);
    } else if (anrm > 1.4885657073574029E+138) {
      scalea = true;
      cscale = 1.4885657073574029E+138;
      b_st.site = &ii_emlrtRSI;
      xzlascl(anrm, cscale, b_A);
    }
    b_st.site = &hi_emlrtRSI;
    ilo = xzgebal(&b_st, b_A, &ix, scale);
    b_st.site = &gi_emlrtRSI;
    xzgehrd(&b_st, b_A, ilo, ix, tau);
    memcpy(&vr[0], &b_A[0], 9U * sizeof(real_T));
    b_st.site = &fi_emlrtRSI;
    xzunghr(&b_st, ilo, ix, vr, tau);
    b_st.site = &ei_emlrtRSI;
    info = xdlahqr(&b_st, ilo, ix, b_A, ilo, ix, vr, wr, wi);
    if (info == 0) {
      real_T scale_tmp;
      real_T smax;
      b_st.site = &di_emlrtRSI;
      xdtrevc3(&b_st, b_A, vr);
      b_st.site = &ci_emlrtRSI;
      if (ilo != ix) {
        c_st.site = &lj_emlrtRSI;
        if ((ilo <= ix) && (ix > 2147483646)) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (b_i = ilo; b_i <= ix; b_i++) {
          i = b_i + 6;
          for (count = b_i; count <= i; count += 3) {
            vr[count - 1] *= scale[b_i - 1];
          }
        }
      }
      i = ilo - 1;
      for (b_i = i; b_i >= 1; b_i--) {
        scale_tmp = scale[b_i - 1];
        if ((int32_T)scale_tmp != b_i) {
          absxk = vr[b_i - 1];
          vr[b_i - 1] = vr[(int32_T)scale_tmp - 1];
          vr[(int32_T)scale_tmp - 1] = absxk;
          absxk = vr[b_i + 2];
          vr[b_i + 2] = vr[(int32_T)scale_tmp + 2];
          vr[(int32_T)scale_tmp + 2] = absxk;
          absxk = vr[b_i + 5];
          vr[b_i + 5] = vr[(int32_T)scale_tmp + 5];
          vr[(int32_T)scale_tmp + 5] = absxk;
        }
      }
      i = ix + 1;
      for (b_i = i; b_i < 4; b_i++) {
        scale_tmp = scale[b_i - 1];
        if ((int32_T)scale_tmp != b_i) {
          absxk = vr[b_i - 1];
          vr[b_i - 1] = vr[(int32_T)scale_tmp - 1];
          vr[(int32_T)scale_tmp - 1] = absxk;
          absxk = vr[b_i + 2];
          vr[b_i + 2] = vr[(int32_T)scale_tmp + 2];
          vr[(int32_T)scale_tmp + 2] = absxk;
          absxk = vr[b_i + 5];
          vr[b_i + 5] = vr[(int32_T)scale_tmp + 5];
          vr[(int32_T)scale_tmp + 5] = absxk;
        }
      }
      for (b_i = 0; b_i < 3; b_i++) {
        scale_tmp = wi[b_i];
        if (!(scale_tmp < 0.0)) {
          if ((b_i + 1 != 3) && (scale_tmp > 0.0)) {
            real_T cs;
            real_T s;
            ix = b_i * 3 + 1;
            b_st.site = &bi_emlrtRSI;
            absxk = xnrm2(&b_st, 3, vr, ix);
            b_tmp_tmp = (b_i + 1) * 3;
            b_st.site = &ai_emlrtRSI;
            smax = xnrm2(&b_st, 3, vr, b_tmp_tmp + 1);
            absxk = 1.0 / muDoubleScalarHypot(absxk, smax);
            b_st.site = &yh_emlrtRSI;
            b_xscal(&b_st, absxk, vr, ix);
            b_st.site = &xh_emlrtRSI;
            b_xscal(&b_st, absxk, vr, b_tmp_tmp + 1);
            b_st.site = &wh_emlrtRSI;
            c_st.site = &gf_emlrtRSI;
            b_st.site = &wh_emlrtRSI;
            c_st.site = &gf_emlrtRSI;
            scale_tmp = vr[3 * b_i];
            absxk = vr[b_tmp_tmp];
            scale[0] = scale_tmp * scale_tmp + absxk * absxk;
            b_st.site = &wh_emlrtRSI;
            c_st.site = &gf_emlrtRSI;
            b_st.site = &wh_emlrtRSI;
            c_st.site = &gf_emlrtRSI;
            scale_tmp = vr[ix];
            absxk = vr[b_tmp_tmp + 1];
            scale[1] = scale_tmp * scale_tmp + absxk * absxk;
            b_st.site = &wh_emlrtRSI;
            c_st.site = &gf_emlrtRSI;
            b_st.site = &wh_emlrtRSI;
            c_st.site = &gf_emlrtRSI;
            scale_tmp = vr[3 * b_i + 2];
            absxk = vr[b_tmp_tmp + 2];
            count = 0;
            smax = muDoubleScalarAbs(scale[0]);
            s = muDoubleScalarAbs(scale[1]);
            if (s > smax) {
              count = 1;
              smax = s;
            }
            if (muDoubleScalarAbs(scale_tmp * scale_tmp + absxk * absxk) >
                smax) {
              count = 2;
            }
            b_st.site = &vh_emlrtRSI;
            i = count + b_tmp_tmp;
            s = vr[i];
            if (s == 0.0) {
              cs = 1.0;
              s = 0.0;
            } else {
              smax = vr[count + 3 * b_i];
              if (smax == 0.0) {
                cs = 0.0;
                s = 1.0;
              } else {
                real_T b_scale_tmp;
                scale_tmp = muDoubleScalarAbs(smax);
                b_scale_tmp = muDoubleScalarAbs(s);
                absxk = muDoubleScalarMax(scale_tmp, b_scale_tmp);
                count = 0;
                if (absxk >= 7.4428285367870146E+137) {
                  do {
                    count++;
                    smax *= 1.3435752215134178E-138;
                    s *= 1.3435752215134178E-138;
                  } while ((muDoubleScalarMax(muDoubleScalarAbs(smax),
                                              muDoubleScalarAbs(s)) >=
                            7.4428285367870146E+137) &&
                           (count < 20));
                  absxk = muDoubleScalarHypot(smax, s);
                  cs = smax / absxk;
                  s /= absxk;
                  c_st.site = &if_emlrtRSI;
                } else if (absxk <= 1.3435752215134178E-138) {
                  do {
                    count++;
                    smax *= 7.4428285367870146E+137;
                    s *= 7.4428285367870146E+137;
                  } while (!!(muDoubleScalarMax(muDoubleScalarAbs(smax),
                                                muDoubleScalarAbs(s)) <=
                              1.3435752215134178E-138));
                  absxk = muDoubleScalarHypot(smax, s);
                  cs = smax / absxk;
                  s /= absxk;
                  c_st.site = &jf_emlrtRSI;
                  if (count > 2147483646) {
                    d_st.site = &db_emlrtRSI;
                    check_forloop_overflow_error(&d_st);
                  }
                } else {
                  absxk = muDoubleScalarHypot(smax, s);
                  cs = smax / absxk;
                  s /= absxk;
                }
                if ((scale_tmp > b_scale_tmp) && (cs < 0.0)) {
                  cs = -cs;
                  s = -s;
                }
              }
            }
            ix = b_i * 3;
            absxk = cs * vr[ix] + s * vr[b_tmp_tmp];
            vr[b_tmp_tmp] = cs * vr[b_tmp_tmp] - s * vr[ix];
            vr[ix] = absxk;
            absxk = vr[b_tmp_tmp + 1];
            smax = vr[ix + 1];
            vr[b_tmp_tmp + 1] = cs * absxk - s * smax;
            vr[ix + 1] = cs * smax + s * absxk;
            absxk = vr[b_tmp_tmp + 2];
            smax = vr[ix + 2];
            vr[b_tmp_tmp + 2] = cs * absxk - s * smax;
            vr[ix + 2] = cs * smax + s * absxk;
            vr[i] = 0.0;
          } else {
            ix = b_i * 3 + 1;
            b_st.site = &uh_emlrtRSI;
            absxk = 1.0 / xnrm2(&b_st, 3, vr, ix);
            b_st.site = &th_emlrtRSI;
            b_xscal(&b_st, absxk, vr, ix);
          }
        }
      }
      for (i = 0; i < 9; i++) {
        VR[i].re = vr[i];
        VR[i].im = 0.0;
      }
      for (b_tmp_tmp = 0; b_tmp_tmp < 2; b_tmp_tmp++) {
        if ((wi[b_tmp_tmp] > 0.0) && (wi[b_tmp_tmp + 1] < 0.0)) {
          absxk = VR[3 * b_tmp_tmp].re;
          ix = 3 * (b_tmp_tmp + 1);
          smax = VR[ix].re;
          VR[3 * b_tmp_tmp].re = absxk;
          VR[3 * b_tmp_tmp].im = smax;
          VR[ix].re = absxk;
          VR[ix].im = -smax;
          count = 3 * b_tmp_tmp + 1;
          absxk = VR[count].re;
          smax = VR[ix + 1].re;
          VR[count].re = absxk;
          VR[count].im = smax;
          VR[ix + 1].re = absxk;
          VR[ix + 1].im = -smax;
          count = 3 * b_tmp_tmp + 2;
          absxk = VR[count].re;
          smax = VR[ix + 2].re;
          VR[count].re = absxk;
          VR[count].im = smax;
          VR[ix + 2].re = absxk;
          VR[ix + 2].im = -smax;
        }
      }
    } else {
      for (i = 0; i < 9; i++) {
        VR[i].re = rtNaN;
        VR[i].im = 0.0;
      }
    }
    if (scalea) {
      b_st.site = &sh_emlrtRSI;
      b_xzlascl(&b_st, cscale, anrm, 3 - info, wr, info + 1);
      b_st.site = &rh_emlrtRSI;
      b_xzlascl(&b_st, cscale, anrm, 3 - info, wi, info + 1);
      if (info != 0) {
        b_st.site = &qh_emlrtRSI;
        b_xzlascl(&b_st, cscale, anrm, ilo - 1, wr, 1);
        b_st.site = &ph_emlrtRSI;
        b_xzlascl(&b_st, cscale, anrm, ilo - 1, wi, 1);
      }
    }
    if (info != 0) {
      b_st.site = &oh_emlrtRSI;
      if ((ilo <= info) && (info > 2147483646)) {
        c_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (b_i = ilo; b_i <= info; b_i++) {
        wr[b_i - 1] = rtNaN;
        wi[b_i - 1] = 0.0;
      }
    }
    W[0].re = wr[0];
    W[0].im = wi[0];
    W[1].re = wr[1];
    W[1].im = wi[1];
    W[2].re = wr[2];
    W[2].im = wi[2];
  }
  return info;
}

/* End of code generation (xgeev.c) */
