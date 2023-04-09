/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "LocalsNHFast_data.h"
#include "LocalsNHFast_emxutil.h"
#include "LocalsNHFast_mexutil.h"
#include "LocalsNHFast_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo dc_emlrtRSI = {
    61,        /* lineNo */
    "qrsolve", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo ec_emlrtRSI = {
    72,        /* lineNo */
    "qrsolve", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo fc_emlrtRSI = {
    85,        /* lineNo */
    "qrsolve", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo gc_emlrtRSI =
    {
        63,       /* lineNo */
        "xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI =
    {
        98,             /* lineNo */
        "ceval_xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI =
    {
        138,            /* lineNo */
        "ceval_xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI =
    {
        141,            /* lineNo */
        "ceval_xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI =
    {
        143,            /* lineNo */
        "ceval_xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI =
    {
        148,            /* lineNo */
        "ceval_xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI =
    {
        151,            /* lineNo */
        "ceval_xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI =
    {
        154,            /* lineNo */
        "ceval_xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI =
    {
        158,            /* lineNo */
        "ceval_xgeqp3", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    173,          /* lineNo */
    "rankFromQR", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo id_emlrtRSI = {
    172,          /* lineNo */
    "rankFromQR", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo jd_emlrtRSI = {
    119,         /* lineNo */
    "LSQFromQR", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo kd_emlrtRSI = {
    126,         /* lineNo */
    "LSQFromQR", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo ld_emlrtRSI = {
    128,         /* lineNo */
    "LSQFromQR", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo md_emlrtRSI = {
    138,         /* lineNo */
    "LSQFromQR", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo nd_emlrtRSI = {
    31,         /* lineNo */
    "xunormqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    102,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    108,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    18,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    21,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    23,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    29,          /* lineNo */
    "xzunormqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzunormqr.m" /* pathName */
};

static emlrtMCInfo c_emlrtMCI = {
    53,        /* lineNo */
    19,        /* colNo */
    "flt2str", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/flt2str.m" /* pName
                                                                           */
};

static emlrtRTEInfo sc_emlrtRTEI =
    {
        1,        /* lineNo */
        32,       /* colNo */
        "xgeqp3", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI =
    {
        61,       /* lineNo */
        9,        /* colNo */
        "xgeqp3", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI =
    {
        92,       /* lineNo */
        22,       /* colNo */
        "xgeqp3", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI =
    {
        105,      /* lineNo */
        1,        /* colNo */
        "xgeqp3", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI =
    {
        97,       /* lineNo */
        5,        /* colNo */
        "xgeqp3", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgeqp3.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    85,        /* lineNo */
    26,        /* colNo */
    "qrsolve", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pName
                                                                           */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    1,         /* lineNo */
    24,        /* colNo */
    "qrsolve", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pName
                                                                           */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    109,       /* lineNo */
    1,         /* colNo */
    "qrsolve", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pName
                                                                           */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    119,       /* lineNo */
    5,         /* colNo */
    "qrsolve", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/qrsolve.m" /* pName
                                                                           */
};

static emlrtRSInfo tl_emlrtRSI = {
    53,        /* lineNo */
    "flt2str", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/flt2str.m" /* pathName
                                                                           */
};

/* Function Declarations */
static void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A,
                      const emxArray_real_T *tau, const emxArray_int32_T *jpvt,
                      emxArray_real_T *B, int32_T rankA, emxArray_real_T *Y);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[14]);

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14]);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A,
                      const emxArray_real_T *tau, const emxArray_int32_T *jpvt,
                      emxArray_real_T *B, int32_T rankA, emxArray_real_T *Y)
{
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const real_T *A_data;
  const real_T *tau_data;
  real_T *B_data;
  real_T *Y_data;
  const int32_T *jpvt_data;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T m;
  int32_T mn;
  int32_T nb;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  B_data = B->data;
  jpvt_data = jpvt->data;
  tau_data = tau->data;
  A_data = A->data;
  nb = B->size[1];
  mn = Y->size[0] * Y->size[1];
  Y->size[0] = A->size[1];
  Y->size[1] = B->size[1];
  emxEnsureCapacity_real_T(sp, Y, mn, &ad_emlrtRTEI);
  Y_data = Y->data;
  m = A->size[1] * B->size[1];
  for (mn = 0; mn < m; mn++) {
    Y_data[mn] = 0.0;
  }
  st.site = &jd_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  if ((A->size[0] != 0) && (A->size[1] != 0) &&
      ((B->size[0] != 0) && (B->size[1] != 0))) {
    ptrdiff_t nrc_t;
    boolean_T p;
    nrc_t = (ptrdiff_t)B->size[0];
    nrc_t =
        LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)B->size[1],
                       (ptrdiff_t)muIntScalarMin_sint32(A->size[0], A->size[1]),
                       (real_T *)&A_data[0], (ptrdiff_t)A->size[0],
                       (real_T *)&tau_data[0], &B_data[0], nrc_t);
    c_st.site = &od_emlrtRSI;
    if ((int32_T)nrc_t != 0) {
      boolean_T b_p;
      p = true;
      b_p = false;
      if ((int32_T)nrc_t == -7) {
        b_p = true;
      } else if ((int32_T)nrc_t == -9) {
        b_p = true;
      } else if ((int32_T)nrc_t == -10) {
        b_p = true;
      }
      if (!b_p) {
        if ((int32_T)nrc_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, (int32_T)nrc_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      if (((int32_T)nrc_t == -10) && (B->size[1] > 1)) {
        int32_T b_nb;
        c_st.site = &pd_emlrtRSI;
        m = A->size[0];
        b_nb = B->size[1];
        mn = muIntScalarMin_sint32(A->size[0], A->size[1]);
        d_st.site = &qd_emlrtRSI;
        if (mn > 2147483646) {
          e_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        for (j = 0; j < mn; j++) {
          if (tau_data[j] != 0.0) {
            int32_T a_tmp;
            d_st.site = &rd_emlrtRSI;
            if (b_nb > 2147483646) {
              e_st.site = &db_emlrtRSI;
              check_forloop_overflow_error(&e_st);
            }
            a_tmp = j + 2;
            p = ((j + 2 <= m) && (m > 2147483646));
            for (k = 0; k < b_nb; k++) {
              real_T wj;
              wj = B_data[j + B->size[0] * k];
              d_st.site = &sd_emlrtRSI;
              if (p) {
                e_st.site = &db_emlrtRSI;
                check_forloop_overflow_error(&e_st);
              }
              for (i = a_tmp; i <= m; i++) {
                wj += A_data[(i + A->size[0] * j) - 1] *
                      B_data[(i + B->size[0] * k) - 1];
              }
              wj *= tau_data[j];
              if (wj != 0.0) {
                int32_T scalarLB;
                int32_T vectorUB;
                B_data[j + B->size[0] * k] -= wj;
                d_st.site = &td_emlrtRSI;
                scalarLB = (((((m - j) - 1) / 2) << 1) + j) + 2;
                vectorUB = scalarLB - 2;
                for (i = a_tmp; i <= vectorUB; i += 2) {
                  __m128d r;
                  r = _mm_loadu_pd(&B_data[(i + B->size[0] * k) - 1]);
                  _mm_storeu_pd(
                      &B_data[(i + B->size[0] * k) - 1],
                      _mm_sub_pd(
                          r, _mm_mul_pd(_mm_loadu_pd(
                                            &A_data[(i + A->size[0] * j) - 1]),
                                        _mm_set1_pd(wj))));
                }
                for (i = scalarLB; i <= m; i++) {
                  B_data[(i + B->size[0] * k) - 1] -=
                      A_data[(i + A->size[0] * j) - 1] * wj;
                }
              }
            }
          }
        }
      } else {
        int32_T b_nb;
        m = B->size[0];
        b_nb = B->size[1];
        mn = B->size[0] * B->size[1];
        B->size[0] = m;
        B->size[1] = b_nb;
        emxEnsureCapacity_real_T(&b_st, B, mn, &bd_emlrtRTEI);
        B_data = B->data;
        m *= b_nb;
        for (mn = 0; mn < m; mn++) {
          B_data[mn] = rtNaN;
        }
      }
    }
  }
  st.site = &kd_emlrtRSI;
  if (nb > 2147483646) {
    b_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < nb; k++) {
    st.site = &ld_emlrtRSI;
    if (rankA > 2147483646) {
      b_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (i = 0; i < rankA; i++) {
      Y_data[(jpvt_data[i] + Y->size[0] * k) - 1] = B_data[i + B->size[0] * k];
    }
    for (j = rankA; j >= 1; j--) {
      mn = jpvt_data[j - 1];
      Y_data[(mn + Y->size[0] * k) - 1] /=
          A_data[(j + A->size[0] * (j - 1)) - 1];
      st.site = &md_emlrtRSI;
      for (i = 0; i <= j - 2; i++) {
        Y_data[(jpvt_data[i] + Y->size[0] * k) - 1] -=
            Y_data[(mn + Y->size[0] * k) - 1] *
            A_data[i + A->size[0] * (j - 1)];
      }
    }
  }
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[14])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
                               "sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = {1, 14};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
             const emxArray_real_T *B, emxArray_real_T *Y)
{
  static const int32_T b_offsets[4] = {0, 1, 2, 3};
  static const int32_T offsets[4] = {0, 1, 2, 3};
  static const int32_T iv[2] = {1, 6};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'q', 'p', '3'};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t *jpvt_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_ptrdiff_t *jpvt_t;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const mxArray *m;
  const mxArray *y;
  const real_T *A_data;
  const real_T *B_data;
  real_T tol;
  real_T *b_A_data;
  real_T *tau_data;
  int32_T b_na;
  int32_T k;
  int32_T ma;
  int32_T minmana;
  int32_T na;
  int32_T rankA;
  int32_T *jpvt_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  B_data = B->data;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &dc_emlrtRSI;
  emxInit_real_T(&st, &b_A, 2, &yc_emlrtRTEI);
  k = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&st, b_A, k, &sc_emlrtRTEI);
  b_A_data = b_A->data;
  na = A->size[0] * A->size[1];
  for (k = 0; k < na; k++) {
    b_A_data[k] = A_data[k];
  }
  rankA = b_A->size[0];
  b_na = b_A->size[1] - 1;
  emxInit_int32_T(&st, &jpvt, 2, &yc_emlrtRTEI);
  k = jpvt->size[0] * jpvt->size[1];
  jpvt->size[0] = 1;
  jpvt->size[1] = b_A->size[1];
  emxEnsureCapacity_int32_T(&st, jpvt, k, &tc_emlrtRTEI);
  jpvt_data = jpvt->data;
  na = b_A->size[1];
  for (k = 0; k < na; k++) {
    jpvt_data[k] = 0;
  }
  b_st.site = &gc_emlrtRSI;
  ma = b_A->size[0];
  na = b_A->size[1];
  minmana = muIntScalarMin_sint32(ma, na);
  emxInit_real_T(&b_st, &tau, 1, &yc_emlrtRTEI);
  k = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(&b_st, tau, k, &uc_emlrtRTEI);
  tau_data = tau->data;
  if ((b_A->size[0] == 0) || (b_A->size[1] == 0)) {
    k = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(&b_st, tau, k, &wc_emlrtRTEI);
    tau_data = tau->data;
    for (k = 0; k < minmana; k++) {
      tau_data[k] = 0.0;
    }
    c_st.site = &hc_emlrtRSI;
    if (b_A->size[1] > 2147483646) {
      d_st.site = &db_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    na = (b_A->size[1] / 4) << 2;
    rankA = na - 4;
    for (k = 0; k <= rankA; k += 4) {
      _mm_storeu_si128(
          (__m128i *)&jpvt_data[k],
          _mm_add_epi32(
              _mm_add_epi32(_mm_set1_epi32(k),
                            _mm_loadu_si128((const __m128i *)&offsets[0])),
              _mm_set1_epi32(1)));
    }
    for (k = na; k <= b_na; k++) {
      jpvt_data[k] = k + 1;
    }
  } else {
    ptrdiff_t info_t;
    boolean_T p;
    emxInit_ptrdiff_t(&b_st, &jpvt_t, &vc_emlrtRTEI);
    k = jpvt_t->size[0];
    jpvt_t->size[0] = b_A->size[1];
    emxEnsureCapacity_ptrdiff_t(&b_st, jpvt_t, k, &vc_emlrtRTEI);
    jpvt_t_data = jpvt_t->data;
    na = b_A->size[1];
    for (k = 0; k < na; k++) {
      jpvt_t_data[k] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(
        102, (ptrdiff_t)b_A->size[0], (ptrdiff_t)b_A->size[1], &b_A_data[0],
        (ptrdiff_t)b_A->size[0], &jpvt_t_data[0], &tau_data[0]);
    c_st.site = &ic_emlrtRSI;
    if ((int32_T)info_t != 0) {
      p = true;
      if ((int32_T)info_t != -4) {
        if ((int32_T)info_t == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &fname[0], 12, (int32_T)info_t);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      c_st.site = &jc_emlrtRSI;
      if (b_A->size[1] > 2147483646) {
        d_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (na = 0; na <= b_na; na++) {
        c_st.site = &kc_emlrtRSI;
        if (rankA > 2147483646) {
          d_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (k = 0; k < rankA; k++) {
          b_A_data[na * ma + k] = rtNaN;
        }
      }
      ma = muIntScalarMin_sint32(rankA, b_A->size[1]);
      c_st.site = &lc_emlrtRSI;
      for (k = 0; k < ma; k++) {
        tau_data[k] = rtNaN;
      }
      na = ma + 1;
      c_st.site = &mc_emlrtRSI;
      if ((ma + 1 <= minmana) && (minmana > 2147483646)) {
        d_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (k = na; k <= minmana; k++) {
        tau_data[k - 1] = 0.0;
      }
      c_st.site = &nc_emlrtRSI;
      na = (b_A->size[1] / 4) << 2;
      rankA = na - 4;
      for (k = 0; k <= rankA; k += 4) {
        _mm_storeu_si128(
            (__m128i *)&jpvt_data[k],
            _mm_add_epi32(
                _mm_add_epi32(_mm_set1_epi32(k),
                              _mm_loadu_si128((const __m128i *)&b_offsets[0])),
                _mm_set1_epi32(1)));
      }
      for (k = na; k <= b_na; k++) {
        jpvt_data[k] = k + 1;
      }
    } else {
      c_st.site = &oc_emlrtRSI;
      if (b_A->size[1] > 2147483646) {
        d_st.site = &db_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (k = 0; k <= b_na; k++) {
        jpvt_data[k] = (int32_T)jpvt_t_data[k];
      }
    }
    emxFree_ptrdiff_t(&b_st, &jpvt_t);
  }
  st.site = &ec_emlrtRSI;
  rankA = 0;
  tol = 0.0;
  if (b_A->size[0] < b_A->size[1]) {
    ma = b_A->size[0];
    na = b_A->size[1];
  } else {
    ma = b_A->size[1];
    na = b_A->size[0];
  }
  if (ma > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)na) *
          muDoubleScalarAbs(b_A_data[0]);
    while (
        (rankA < ma) &&
        (!(muDoubleScalarAbs(b_A_data[rankA + b_A->size[0] * rankA]) <= tol))) {
      rankA++;
    }
  }
  if (rankA < ma) {
    char_T str[14];
    b_st.site = &hd_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    c_st.site = &tl_emlrtRSI;
    emlrt_marshallIn(&c_st,
                     b_sprintf(&c_st, y, emlrt_marshallOut(tol), &c_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &id_emlrtRSI;
    b_warning(&b_st, rankA, str);
  }
  emxInit_real_T(sp, &b_B, 2, &xc_emlrtRTEI);
  k = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = B->size[1];
  emxEnsureCapacity_real_T(sp, b_B, k, &xc_emlrtRTEI);
  tau_data = b_B->data;
  na = B->size[0] * B->size[1] - 1;
  for (k = 0; k <= na; k++) {
    tau_data[k] = B_data[k];
  }
  st.site = &fc_emlrtRSI;
  LSQFromQR(&st, b_A, tau, jpvt, b_B, rankA, Y);
  emxFree_real_T(sp, &b_B);
  emxFree_real_T(sp, &tau);
  emxFree_int32_T(sp, &jpvt);
  emxFree_real_T(sp, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (qrsolve.c) */
