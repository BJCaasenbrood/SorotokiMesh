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
#include "LocalsNHFastElastic_data.h"
#include "LocalsNHFastElastic_emxutil.h"
#include "LocalsNHFastElastic_types.h"
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
static emlrtRSInfo n_emlrtRSI = {
    42,      /* lineNo */
    "mrdiv", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    44,      /* lineNo */
    "mrdiv", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    67,        /* lineNo */
    "lusolve", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo q_emlrtRSI = {
    112,          /* lineNo */
    "lusolveNxN", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo r_emlrtRSI = {
    107,          /* lineNo */
    "lusolveNxN", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo s_emlrtRSI = {
    135,          /* lineNo */
    "XtimesInvA", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo t_emlrtRSI = {
    140,          /* lineNo */
    "XtimesInvA", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo u_emlrtRSI = {
    142,          /* lineNo */
    "XtimesInvA", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo v_emlrtRSI = {
    147,          /* lineNo */
    "XtimesInvA", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRSInfo fb_emlrtRSI =
    {
        67,      /* lineNo */
        "xtrsm", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xtrsm.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    90,              /* lineNo */
    "warn_singular", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/lusolve.m" /* pathName
                                                                           */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    31,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    44,                /* lineNo */
    32,                /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    42,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    44,                /* lineNo */
    35,                /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    44,                /* lineNo */
    5,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    44,                /* lineNo */
    9,                 /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    25,                /* lineNo */
    14,                /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

/* Function Definitions */
void mrdiv(const emlrtStack *sp, const emxArray_real_T *A,
           const emxArray_real_T *B, emxArray_real_T *Y)
{
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
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
  real_T temp;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T j;
  int32_T loop_ub;
  int32_T n;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &sb_emlrtRTEI, true);
  emxInit_int32_T(sp, &ipiv, 2, &tb_emlrtRTEI, true);
  emxInit_ptrdiff_t(sp, &ipiv_t, 1, &ub_emlrtRTEI, true);
  emxInit_ptrdiff_t(sp, &r, 1, &qb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_B, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &c_A, 2, &nb_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &kb_emlrtRTEI);
    loop_ub = A->size[0] * B->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    st.site = &n_emlrtRSI;
    b_st.site = &p_emlrtRSI;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, Y, i, &mb_emlrtRTEI);
    loop_ub = A->size[0] * A->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = A->data[i];
    }
    c_st.site = &r_emlrtRSI;
    n = B->size[1];
    d_st.site = &s_emlrtRSI;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&d_st, b_A, i, &ob_emlrtRTEI);
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_A->data[i] = B->data[i];
    }
    e_st.site = &w_emlrtRSI;
    f_st.site = &y_emlrtRSI;
    repmat(&f_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), r);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&e_st, ipiv_t, i, &qb_emlrtRTEI);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)B->size[1],
                                 (ptrdiff_t)B->size[1], &b_A->data[0],
                                 (ptrdiff_t)B->size[1], &ipiv_t->data[0]);
    loop_ub = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&e_st, ipiv, i, &rb_emlrtRTEI);
    f_st.site = &x_emlrtRSI;
    if (loop_ub < 0) {
      if (loop_ub == -1010) {
        emlrtErrorWithMessageIdR2018a(&f_st, &g_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &f_st, &f_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv[0], 12, loop_ub);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (n = 0; n <= i; n++) {
      ipiv->data[n] = (int32_T)ipiv_t->data[n];
    }
    n = Y->size[0];
    d_st.site = &t_emlrtRSI;
    e_st.site = &fb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)Y->size[0];
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)B->size[1];
    ldb_t = (ptrdiff_t)Y->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp,
          &b_A->data[0], &lda_t, &Y->data[0], &ldb_t);
    d_st.site = &u_emlrtRSI;
    e_st.site = &fb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'R';
    info_t = (ptrdiff_t)n;
    n_t = (ptrdiff_t)B->size[1];
    lda_t = (ptrdiff_t)B->size[1];
    ldb_t = (ptrdiff_t)n;
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &temp,
          &b_A->data[0], &lda_t, &Y->data[0], &ldb_t);
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      i1 = ipiv->data[j - 1];
      if (i1 != j) {
        d_st.site = &v_emlrtRSI;
        if (n > 2147483646) {
          e_st.site = &k_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        for (b_i = 0; b_i < n; b_i++) {
          temp = Y->data[b_i + Y->size[0] * (j - 1)];
          Y->data[b_i + Y->size[0] * (j - 1)] =
              Y->data[b_i + Y->size[0] * (i1 - 1)];
          Y->data[b_i + Y->size[0] * (i1 - 1)] = temp;
        }
      }
    }
    if (((B->size[0] != 1) || (B->size[1] != 1)) && (loop_ub > 0)) {
      c_st.site = &q_emlrtRSI;
      d_st.site = &hb_emlrtRSI;
      warning(&d_st);
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity_real_T(sp, b_B, i, &lb_emlrtRTEI);
    loop_ub = B->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = B->size[1];
      for (i1 = 0; i1 < n; i1++) {
        b_B->data[i1 + b_B->size[0] * i] = B->data[i + B->size[0] * i1];
      }
    }
    i = c_A->size[0] * c_A->size[1];
    c_A->size[0] = A->size[1];
    c_A->size[1] = A->size[0];
    emxEnsureCapacity_real_T(sp, c_A, i, &nb_emlrtRTEI);
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = A->size[1];
      for (i1 = 0; i1 < n; i1++) {
        c_A->data[i1 + c_A->size[0] * i] = A->data[i + A->size[0] * i1];
      }
    }
    st.site = &o_emlrtRSI;
    qrsolve(&st, b_B, c_A, b_A);
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_A->size[0];
    emxEnsureCapacity_real_T(sp, Y, i, &pb_emlrtRTEI);
    loop_ub = b_A->size[0];
    for (i = 0; i < loop_ub; i++) {
      n = b_A->size[1];
      for (i1 = 0; i1 < n; i1++) {
        Y->data[i1 + Y->size[0] * i] = b_A->data[i + b_A->size[0] * i1];
      }
    }
  }
  emxFree_real_T(&c_A);
  emxFree_real_T(&b_B);
  emxFree_ptrdiff_t(&r);
  emxFree_ptrdiff_t(&ipiv_t);
  emxFree_int32_T(&ipiv);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mrdivide_helper.c) */
