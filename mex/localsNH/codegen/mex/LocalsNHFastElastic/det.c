/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * det.c
 *
 * Code generation for function 'det'
 *
 */

/* Include files */
#include "det.h"
#include "LocalsNHFastElastic_data.h"
#include "LocalsNHFastElastic_emxutil.h"
#include "LocalsNHFastElastic_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo bb_emlrtRSI =
    {
        45,      /* lineNo */
        "xgeru", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xgeru.m" /* pathName */
};

static emlrtRSInfo
    cb_emlrtRSI =
        {
            45,     /* lineNo */
            "xger", /* fcnName */
            "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+blas/"
            "xger.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI =
    {
        15,     /* lineNo */
        "xger", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xger.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI =
    {
        41,      /* lineNo */
        "xgerx", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgerx.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    21,                                                            /* lineNo */
    "det",                                                         /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/matfun/det.m" /* pathName
                                                                    */
};

static emlrtRSInfo ed_emlrtRSI =
    {
        30,       /* lineNo */
        "xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    50,        /* lineNo */
    "xzgetrf", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgetrf.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    58,        /* lineNo */
    "xzgetrf", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgetrf.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI =
    {
        54,      /* lineNo */
        "xgerx", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgerx.m" /* pathName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    12,                                                            /* lineNo */
    15,                                                            /* colNo */
    "det",                                                         /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/matfun/det.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    1,                                                             /* lineNo */
    14,                                                            /* colNo */
    "det",                                                         /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/matfun/det.m" /* pName */
};

/* Function Definitions */
real_T b_det(const emlrtStack *sp, const real_T x[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T b_x[9];
  real_T s;
  real_T smax;
  real_T y;
  int32_T b_tmp;
  int32_T ijA;
  int32_T j;
  int32_T jA;
  int32_T jp1j;
  int32_T k;
  int32_T n;
  int8_T ipiv[3];
  boolean_T isodd;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ic_emlrtRSI;
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
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  b_st.site = &ed_emlrtRSI;
  ipiv[0] = 1;
  ipiv[1] = 2;
  for (j = 0; j < 2; j++) {
    b_tmp = j << 2;
    jp1j = b_tmp + 2;
    n = 3 - j;
    jA = 0;
    smax = muDoubleScalarAbs(b_x[b_tmp]);
    for (k = 2; k <= n; k++) {
      s = muDoubleScalarAbs(b_x[(b_tmp + k) - 1]);
      if (s > smax) {
        jA = k - 1;
        smax = s;
      }
    }
    if (b_x[b_tmp + jA] != 0.0) {
      if (jA != 0) {
        jA += j;
        ipiv[j] = (int8_T)(jA + 1);
        smax = b_x[j];
        b_x[j] = b_x[jA];
        b_x[jA] = smax;
        smax = b_x[j + 3];
        b_x[j + 3] = b_x[jA + 3];
        b_x[jA + 3] = smax;
        smax = b_x[j + 6];
        b_x[j + 6] = b_x[jA + 6];
        b_x[jA + 6] = smax;
      }
      k = (b_tmp - j) + 3;
      c_st.site = &fd_emlrtRSI;
      for (jA = jp1j; jA <= k; jA++) {
        b_x[jA - 1] /= b_x[b_tmp];
      }
    }
    n = 1 - j;
    c_st.site = &gd_emlrtRSI;
    d_st.site = &bb_emlrtRSI;
    e_st.site = &cb_emlrtRSI;
    f_st.site = &db_emlrtRSI;
    jA = b_tmp + 5;
    g_st.site = &eb_emlrtRSI;
    for (jp1j = 0; jp1j <= n; jp1j++) {
      smax = b_x[(b_tmp + jp1j * 3) + 3];
      if (smax != 0.0) {
        k = (jA - j) + 1;
        g_st.site = &hd_emlrtRSI;
        if ((jA <= k) && (k > 2147483646)) {
          h_st.site = &k_emlrtRSI;
          check_forloop_overflow_error(&h_st);
        }
        for (ijA = jA; ijA <= k; ijA++) {
          b_x[ijA - 1] += b_x[((b_tmp + ijA) - jA) + 1] * -smax;
        }
      }
      jA += 3;
    }
  }
  isodd = (ipiv[0] > 1);
  y = b_x[0] * b_x[4] * b_x[8];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }
  if (isodd) {
    y = -y;
  }
  return y;
}

real_T det(const emlrtStack *sp, const emxArray_real_T *x)
{
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r;
  emxArray_real_T *b_x;
  real_T y;
  int32_T i;
  int32_T loop_ub;
  int32_T m;
  int32_T n;
  boolean_T isodd;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (x->size[0] != x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 1.0;
  } else {
    emxInit_real_T(sp, &b_x, 2, &gc_emlrtRTEI, true);
    m = x->size[0];
    n = x->size[1];
    st.site = &ic_emlrtRSI;
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, b_x, i, &ob_emlrtRTEI);
    loop_ub = x->size[0] * x->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_x->data[i] = x->data[i];
    }
    emxInit_int32_T(&st, &ipiv, 2, &gc_emlrtRTEI, true);
    emxInit_ptrdiff_t(&st, &ipiv_t, 1, &ub_emlrtRTEI, true);
    emxInit_ptrdiff_t(&st, &r, 1, &qb_emlrtRTEI, true);
    b_st.site = &w_emlrtRSI;
    c_st.site = &y_emlrtRSI;
    repmat(&c_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(m, n), r);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&b_st, ipiv_t, i, &qb_emlrtRTEI);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x->size[0],
                                 (ptrdiff_t)x->size[1], &b_x->data[0],
                                 (ptrdiff_t)x->size[0], &ipiv_t->data[0]);
    m = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&b_st, ipiv, i, &rb_emlrtRTEI);
    c_st.site = &x_emlrtRSI;
    emxFree_ptrdiff_t(&r);
    if (m < 0) {
      if (m == -1010) {
        emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &f_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, m);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (m = 0; m <= i; m++) {
      ipiv->data[m] = (int32_T)ipiv_t->data[m];
    }
    emxFree_ptrdiff_t(&ipiv_t);
    y = b_x->data[0];
    i = b_x->size[0];
    for (m = 0; m <= i - 2; m++) {
      y *= b_x->data[(m + b_x->size[0] * (m + 1)) + 1];
    }
    emxFree_real_T(&b_x);
    isodd = false;
    i = ipiv->size[1];
    for (m = 0; m <= i - 2; m++) {
      if (ipiv->data[m] > m + 1) {
        isodd = !isodd;
      }
    }
    emxFree_int32_T(&ipiv);
    if (isodd) {
      y = -y;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (det.c) */
