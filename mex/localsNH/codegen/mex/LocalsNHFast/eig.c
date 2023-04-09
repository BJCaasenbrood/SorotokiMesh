/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "LocalsNHFast_data.h"
#include "anyNonFinite.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeev.h"
#include "xgemv.h"
#include "xgerc.h"
#include "xhseqr.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ie_emlrtRSI = {
    81,                                                            /* lineNo */
    "eig",                                                         /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                    */
};

static emlrtRSInfo je_emlrtRSI = {
    125,                                                           /* lineNo */
    "eig",                                                         /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                    */
};

static emlrtRSInfo ke_emlrtRSI = {
    133,                                                           /* lineNo */
    "eig",                                                         /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                    */
};

static emlrtRSInfo le_emlrtRSI = {
    141,                                                           /* lineNo */
    "eig",                                                         /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/eig.m" /* pathName
                                                                    */
};

static emlrtRSInfo pe_emlrtRSI = {
    27,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = {
    40,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/private/"
    "eigHermitianStandard.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    10,        /* lineNo */
    "xsyheev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xsyheev.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    61,              /* lineNo */
    "ceval_xsyheev", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xsyheev.m" /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = {
    12,                         /* lineNo */
    "eigSkewHermitianStandard", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/private/"
    "eigSkewHermitianStandard.m" /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = {
    22,                             /* lineNo */
    "eigRealSkewSymmetricStandard", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/private/"
    "eigRealSkewSymmetricStandard.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    35,      /* lineNo */
    "schur", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/schur.m" /* pathName
                                                                      */
};

static emlrtRSInfo nf_emlrtRSI = {
    66,      /* lineNo */
    "schur", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/schur.m" /* pathName
                                                                      */
};

static emlrtRSInfo of_emlrtRSI = {
    69,      /* lineNo */
    "schur", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/schur.m" /* pathName
                                                                      */
};

static emlrtRSInfo pf_emlrtRSI = {
    70,      /* lineNo */
    "schur", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/schur.m" /* pathName
                                                                      */
};

static emlrtRSInfo qf_emlrtRSI = {
    83,      /* lineNo */
    "schur", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/schur.m" /* pathName
                                                                      */
};

static emlrtRSInfo rf_emlrtRSI =
    {
        18,       /* lineNo */
        "xgehrd", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgehrd.m" /* pathName */
};

static emlrtRSInfo yf_emlrtRSI = {
    11,          /* lineNo */
    "xungorghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xungorghr.m" /* pathName */
};

static emlrtRSInfo ag_emlrtRSI = {
    69,                /* lineNo */
    "ceval_xungorghr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xungorghr.m" /* pathName */
};

static emlrtRSInfo lh_emlrtRSI = {
    26,            /* lineNo */
    "eigStandard", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/private/"
    "eigStandard.m" /* pathName */
};

static emlrtRSInfo mh_emlrtRSI = {
    45,            /* lineNo */
    "eigStandard", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/private/"
    "eigStandard.m" /* pathName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const real_T A[9], creal_T V[9], creal_T D[9])
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'o', 'r', 'g', 'h', 'r'};
  static const char_T fname[13] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 's', 'y', 'e', 'v'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T U[9];
  real_T b_A[9];
  real_T work[3];
  real_T tau[2];
  real_T lambda;
  int32_T j;
  int32_T lastv;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ie_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (anyNonFinite(A)) {
    for (lastv = 0; lastv < 9; lastv++) {
      V[lastv].re = rtNaN;
      V[lastv].im = 0.0;
      D[lastv].re = 0.0;
      D[lastv].im = 0.0;
    }
    D[0].re = rtNaN;
    D[0].im = 0.0;
    D[4].re = rtNaN;
    D[4].im = 0.0;
    D[8].re = rtNaN;
    D[8].im = 0.0;
  } else {
    int32_T exitg1;
    int32_T lastc;
    boolean_T exitg2;
    boolean_T p;
    p = true;
    j = 0;
    exitg2 = false;
    while ((!exitg2) && (j < 3)) {
      lastc = 0;
      do {
        exitg1 = 0;
        if (lastc <= j) {
          if (!(A[lastc + 3 * j] == A[j + 3 * lastc])) {
            p = false;
            exitg1 = 1;
          } else {
            lastc++;
          }
        } else {
          j++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
    if (p) {
      ptrdiff_t info_t;
      st.site = &je_emlrtRSI;
      b_st.site = &pe_emlrtRSI;
      memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
      c_st.site = &re_emlrtRSI;
      info_t = (ptrdiff_t)3;
      info_t = LAPACKE_dsyev(102, 'V', 'L', info_t, &b_A[0], info_t, &work[0]);
      d_st.site = &se_emlrtRSI;
      if ((int32_T)info_t < 0) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 13, &fname[0], 12, (int32_T)info_t);
        }
      }
      memset(&D[0], 0, 9U * sizeof(creal_T));
      D[0].re = work[0];
      D[0].im = 0.0;
      D[4].re = work[1];
      D[4].im = 0.0;
      D[8].re = work[2];
      D[8].im = 0.0;
      for (lastv = 0; lastv < 9; lastv++) {
        V[lastv].re = b_A[lastv];
        V[lastv].im = 0.0;
      }
      if ((int32_T)info_t != 0) {
        b_st.site = &qe_emlrtRSI;
        c_warning(&b_st);
      }
    } else {
      p = true;
      j = 0;
      exitg2 = false;
      while ((!exitg2) && (j < 3)) {
        lastc = 0;
        do {
          exitg1 = 0;
          if (lastc <= j) {
            if (!(A[lastc + 3 * j] == -A[j + 3 * lastc])) {
              p = false;
              exitg1 = 1;
            } else {
              lastc++;
            }
          } else {
            j++;
            exitg1 = 2;
          }
        } while (exitg1 == 0);
        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
      if (p) {
        real_T ai;
        int32_T ia;
        st.site = &ke_emlrtRSI;
        b_st.site = &kf_emlrtRSI;
        c_st.site = &lf_emlrtRSI;
        d_st.site = &mf_emlrtRSI;
        if (anyNonFinite(A)) {
          for (lastv = 0; lastv < 9; lastv++) {
            U[lastv] = rtNaN;
          }
          lastc = 2;
          for (j = 0; j < 2; j++) {
            if (lastc <= 3) {
              memset(&U[(j * 3 + lastc) + -1], 0,
                     (uint32_T)(-lastc + 4) * sizeof(real_T));
            }
            lastc++;
          }
          for (lastv = 0; lastv < 9; lastv++) {
            b_A[lastv] = rtNaN;
          }
        } else {
          ptrdiff_t info_t;
          d_st.site = &nf_emlrtRSI;
          memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
          e_st.site = &rf_emlrtRSI;
          work[0] = 0.0;
          work[1] = 0.0;
          work[2] = 0.0;
          lambda = b_A[1];
          f_st.site = &sf_emlrtRSI;
          ai = xzlarfg(&f_st, 2, &lambda, b_A, 3);
          tau[0] = ai;
          b_A[1] = 1.0;
          f_st.site = &tf_emlrtRSI;
          if (ai != 0.0) {
            lastv = 2;
            lastc = 2;
            while ((lastv > 0) && (b_A[lastc] == 0.0)) {
              lastv--;
              lastc--;
            }
            lastc = 3;
            exitg2 = false;
            while ((!exitg2) && (lastc > 0)) {
              ia = lastc + 3;
              do {
                exitg1 = 0;
                if (ia <= (lastc + (lastv - 1) * 3) + 3) {
                  if (b_A[ia - 1] != 0.0) {
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
            g_st.site = &vf_emlrtRSI;
            xgemv(&g_st, lastc, lastv, b_A, 4, b_A, 2, work);
            g_st.site = &wf_emlrtRSI;
            xgerc(&g_st, lastc, lastv, -ai, work, 2, b_A, 4);
          }
          f_st.site = &uf_emlrtRSI;
          xzlarf(&f_st, 2, 2, 2, ai, b_A, 5, work);
          b_A[1] = lambda;
          lambda = b_A[5];
          f_st.site = &sf_emlrtRSI;
          ai = xzlarfg(&f_st, 1, &lambda, b_A, 6);
          tau[1] = ai;
          b_A[5] = 1.0;
          f_st.site = &tf_emlrtRSI;
          if (ai != 0.0) {
            lastc = 3;
            exitg2 = false;
            while ((!exitg2) && (lastc > 0)) {
              ia = lastc + 6;
              do {
                exitg1 = 0;
                if (ia <= lastc + 6) {
                  if (b_A[ia - 1] != 0.0) {
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
            g_st.site = &vf_emlrtRSI;
            xgemv(&g_st, lastc, 1, b_A, 7, b_A, 6, work);
            g_st.site = &wf_emlrtRSI;
            xgerc(&g_st, lastc, 1, -ai, work, 6, b_A, 7);
          }
          f_st.site = &uf_emlrtRSI;
          xzlarf(&f_st, 1, 1, 6, ai, b_A, 9, work);
          b_A[5] = lambda;
          d_st.site = &of_emlrtRSI;
          memcpy(&U[0], &b_A[0], 9U * sizeof(real_T));
          e_st.site = &yf_emlrtRSI;
          info_t = LAPACKE_dorghr(102, (ptrdiff_t)3, (ptrdiff_t)1, (ptrdiff_t)3,
                                  &U[0], (ptrdiff_t)3, &tau[0]);
          f_st.site = &ag_emlrtRSI;
          if ((int32_T)info_t != 0) {
            boolean_T b_p;
            p = true;
            b_p = false;
            if ((int32_T)info_t == -5) {
              b_p = true;
            } else if ((int32_T)info_t == -7) {
              b_p = true;
            }
            if (!b_p) {
              if ((int32_T)info_t == -1010) {
                emlrtErrorWithMessageIdR2018a(
                    &f_st, &g_emlrtRTEI, "MATLAB:nomem", "MATLAB:nomem", 0);
              } else {
                emlrtErrorWithMessageIdR2018a(
                    &f_st, &f_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0],
                    12, (int32_T)info_t);
              }
            }
          } else {
            p = false;
          }
          if (p) {
            for (lastv = 0; lastv < 9; lastv++) {
              U[lastv] = rtNaN;
            }
          }
          d_st.site = &pf_emlrtRSI;
          lastc = xhseqr(&d_st, b_A, U);
          if (lastc != 0) {
            d_st.site = &qf_emlrtRSI;
            d_warning(&d_st);
          }
        }
        memset(&D[0], 0, 9U * sizeof(creal_T));
        lastc = 1;
        do {
          exitg1 = 0;
          if (lastc <= 3) {
            if (lastc != 3) {
              lastv = lastc + 3 * (lastc - 1);
              ai = b_A[lastv];
              if (ai != 0.0) {
                lambda = muDoubleScalarAbs(ai);
                D[lastv - 1].re = 0.0;
                D[lastv - 1].im = lambda;
                lastv = lastc + 3 * lastc;
                D[lastv].re = 0.0;
                D[lastv].im = -lambda;
                lastc += 2;
              } else {
                lastc++;
              }
            } else {
              lastc++;
            }
          } else {
            exitg1 = 1;
          }
        } while (exitg1 == 0);
        for (lastv = 0; lastv < 9; lastv++) {
          V[lastv].re = U[lastv];
          V[lastv].im = 0.0;
        }
        j = 1;
        do {
          exitg1 = 0;
          if (j <= 3) {
            if (j != 3) {
              lastv = 3 * (j - 1);
              ai = b_A[j + lastv];
              if (ai != 0.0) {
                if (ai < 0.0) {
                  lastc = 1;
                } else {
                  lastc = -1;
                }
                lambda = V[lastv].re;
                ai = (real_T)lastc * V[3 * j].re;
                if (ai == 0.0) {
                  V[lastv].re = lambda / 1.4142135623730951;
                  V[lastv].im = 0.0;
                } else if (lambda == 0.0) {
                  V[lastv].re = 0.0;
                  V[lastv].im = ai / 1.4142135623730951;
                } else {
                  V[lastv].re = lambda / 1.4142135623730951;
                  V[lastv].im = ai / 1.4142135623730951;
                }
                V[3 * j].re = V[lastv].re;
                V[3 * j].im = -V[lastv].im;
                lambda = V[lastv + 1].re;
                ia = 3 * j + 1;
                ai = (real_T)lastc * V[ia].re;
                if (ai == 0.0) {
                  V[lastv + 1].re = lambda / 1.4142135623730951;
                  V[lastv + 1].im = 0.0;
                } else if (lambda == 0.0) {
                  V[lastv + 1].re = 0.0;
                  V[lastv + 1].im = ai / 1.4142135623730951;
                } else {
                  V[lastv + 1].re = lambda / 1.4142135623730951;
                  V[lastv + 1].im = ai / 1.4142135623730951;
                }
                V[ia].re = V[lastv + 1].re;
                V[ia].im = -V[lastv + 1].im;
                lambda = V[lastv + 2].re;
                ia = 3 * j + 2;
                ai = (real_T)lastc * V[ia].re;
                if (ai == 0.0) {
                  V[lastv + 2].re = lambda / 1.4142135623730951;
                  V[lastv + 2].im = 0.0;
                } else if (lambda == 0.0) {
                  V[lastv + 2].re = 0.0;
                  V[lastv + 2].im = ai / 1.4142135623730951;
                } else {
                  V[lastv + 2].re = lambda / 1.4142135623730951;
                  V[lastv + 2].im = ai / 1.4142135623730951;
                }
                V[ia].re = V[lastv + 2].re;
                V[ia].im = -V[lastv + 2].im;
                j += 2;
              } else {
                j++;
              }
            } else {
              j++;
            }
          } else {
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        creal_T dt[3];
        st.site = &le_emlrtRSI;
        b_st.site = &lh_emlrtRSI;
        lastc = xgeev(&b_st, A, dt, V);
        memset(&D[0], 0, 9U * sizeof(creal_T));
        D[0] = dt[0];
        D[4] = dt[1];
        D[8] = dt[2];
        if (lastc != 0) {
          b_st.site = &mh_emlrtRSI;
          c_warning(&b_st);
        }
      }
    }
  }
}

/* End of code generation (eig.c) */
