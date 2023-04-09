/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "LocalsNHFast_data.h"
#include "LocalsNHFast_emxutil.h"
#include "LocalsNHFast_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "qrsolve.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    44,      /* lineNo */
    "mrdiv", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    67,        /* lineNo */
    "lusolve", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo jb_emlrtRSI = {
    107,          /* lineNo */
    "lusolveNxN", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo kb_emlrtRSI = {
    112,          /* lineNo */
    "lusolveNxN", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo lb_emlrtRSI = {
    135,          /* lineNo */
    "XtimesInvA", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo mb_emlrtRSI = {
    140,          /* lineNo */
    "XtimesInvA", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo nb_emlrtRSI = {
    142,          /* lineNo */
    "XtimesInvA", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo ob_emlrtRSI = {
    147,          /* lineNo */
    "XtimesInvA", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo ac_emlrtRSI =
    {
        67,      /* lineNo */
        "xtrsm", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xtrsm.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    90,              /* lineNo */
    "warn_singular", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    31,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    44,                /* lineNo */
    32,                /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    42,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    44,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    44,                /* lineNo */
    9,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    25,                /* lineNo */
    14,                /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

/* Function Definitions */
void mrdiv(const emlrtStack *sp, const emxArray_real_T *A,
           const emxArray_real_T *B, emxArray_real_T *Y)
{
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t *ipiv_t_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *c_A;
  const real_T *A_data;
  const real_T *B_data;
  real_T temp;
  real_T *Y_data;
  real_T *b_B_data;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  int32_T *ipiv_data;
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  B_data = B->data;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &oc_emlrtRTEI);
  emxInit_int32_T(sp, &ipiv, 2, &pc_emlrtRTEI);
  emxInit_ptrdiff_t(sp, &ipiv_t, &qc_emlrtRTEI);
  emxInit_ptrdiff_t(sp, &r, &mc_emlrtRTEI);
  emxInit_real_T(sp, &b_B, 2, &hc_emlrtRTEI);
  emxInit_real_T(sp, &c_A, 2, &jc_emlrtRTEI);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &gc_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = A->size[0] * B->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    ptrdiff_t info_t;
    st.site = &gb_emlrtRSI;
    b_st.site = &ib_emlrtRSI;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, Y, i, &ic_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = A->size[0] * A->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = A_data[i];
    }
    c_st.site = &jb_emlrtRSI;
    n = B->size[1];
    d_st.site = &lb_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&d_st, b_A, i, &kc_emlrtRTEI);
    b_B_data = b_A->data;
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B_data[i] = B_data[i];
    }
    e_st.site = &pb_emlrtRSI;
    f_st.site = &rb_emlrtRSI;
    repmat(&f_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), r);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&e_st, ipiv_t, i, &mc_emlrtRTEI);
    ipiv_t_data = ipiv_t->data;
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)B->size[1],
                                 (ptrdiff_t)B->size[1], &b_B_data[0],
                                 (ptrdiff_t)B->size[1], &ipiv_t_data[0]);
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&e_st, ipiv, i, &nc_emlrtRTEI);
    ipiv_data = ipiv->data;
    f_st.site = &qb_emlrtRSI;
    if ((int32_T)info_t < 0) {
      if ((int32_T)info_t == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &g_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&f_st, &f_emlrtRTEI,
                                      "Coder:toolbox:LAPACKCallErrorInfo",
                                      "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                      19, &cv[0], 12, (int32_T)info_t);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (n = 0; n <= i; n++) {
      ipiv_data[n] = (int32_T)ipiv_t_data[n];
    }
    n = Y->size[0];
    d_st.site = &mb_emlrtRSI;
    e_st.site = &ac_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    m_t = (ptrdiff_t)Y->size[0];
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)B->size[1];
    ldb_t = (ptrdiff_t)Y->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp, &b_B_data[0],
          &lda_t, &Y_data[0], &ldb_t);
    d_st.site = &nb_emlrtRSI;
    e_st.site = &ac_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    m_t = (ptrdiff_t)Y->size[0];
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)B->size[1];
    ldb_t = (ptrdiff_t)Y->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp, &b_B_data[0],
          &lda_t, &Y_data[0], &ldb_t);
    i = B->size[1] - 1;
    for (loop_ub = i; loop_ub >= 1; loop_ub--) {
      i1 = ipiv_data[loop_ub - 1];
      if (i1 != loop_ub) {
        d_st.site = &ob_emlrtRSI;
        if (n > 2147483646) {
          e_st.site = &db_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        for (b_i = 0; b_i < n; b_i++) {
          temp = Y_data[b_i + Y->size[0] * (loop_ub - 1)];
          Y_data[b_i + Y->size[0] * (loop_ub - 1)] =
              Y_data[b_i + Y->size[0] * (i1 - 1)];
          Y_data[b_i + Y->size[0] * (i1 - 1)] = temp;
        }
      }
    }
    if (((B->size[0] != 1) || (B->size[1] != 1)) && ((int32_T)info_t > 0)) {
      c_st.site = &kb_emlrtRSI;
      d_st.site = &cc_emlrtRSI;
      warning(&d_st);
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, b_B, i, &hc_emlrtRTEI);
    b_B_data = b_B->data;
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = B->size[1];
      for (i1 = 0; i1 < n; i1++) {
        b_B_data[i1 + b_B->size[0] * i] = B_data[i + B->size[0] * i1];
      }
    }
    i = c_A->size[0] * c_A->size[1];
    c_A->size[0] = A->size[1];
    c_A->size[1] = A->size[0];
    emxEnsureCapacity_real_T(sp, c_A, i, &jc_emlrtRTEI);
    b_B_data = c_A->data;
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = A->size[1];
      for (i1 = 0; i1 < n; i1++) {
        b_B_data[i1 + c_A->size[0] * i] = A_data[i + A->size[0] * i1];
      }
    }
    st.site = &hb_emlrtRSI;
    qrsolve(&st, b_B, c_A, b_A);
    b_B_data = b_A->data;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_A->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &lc_emlrtRTEI);
    Y_data = Y->data;
    loop_ub = b_A->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = b_A->size[1];
      for (i1 = 0; i1 < n; i1++) {
        Y_data[i1 + Y->size[0] * i] = b_B_data[i + b_A->size[0] * i1];
      }
    }
  }
  emxFree_real_T(sp, &c_A);
  emxFree_real_T(sp, &b_B);
  emxFree_ptrdiff_t(sp, &r);
  emxFree_ptrdiff_t(sp, &ipiv_t);
  emxFree_int32_T(sp, &ipiv);
  emxFree_real_T(sp, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (mrdivide_helper.c) */
