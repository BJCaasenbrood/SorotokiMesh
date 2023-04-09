/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "LocalsNHFast_data.h"
#include "LocalsNHFast_emxutil.h"
#include "LocalsNHFast_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo bg_emlrtRTEI =
    {
        76,                  /* lineNo */
        13,                  /* colNo */
        "eml_mtimes_helper", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" /* pName */
};

/* Function Definitions */
void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, int32_T in3,
                        const emxArray_real_T *in4, real_T in5)
{
  emxArray_real_T *c_in2;
  const real_T *in2_data;
  const real_T *in4_data;
  real_T b_in2;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in4_data = in4->data;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  b_in2 = in2_data[in3];
  emxInit_real_T(sp, &c_in2, 2, &bg_emlrtRTEI);
  if (in4->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  i = c_in2->size[0] * c_in2->size[1];
  c_in2->size[0] = loop_ub;
  if (in4->size[1] == 1) {
    b_loop_ub = in1->size[1];
  } else {
    b_loop_ub = in4->size[1];
  }
  c_in2->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, c_in2, i, &bg_emlrtRTEI);
  b_in2_data = c_in2->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (in4->size[0] != 1);
  stride_1_1 = (in4->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in2_data[i1 + c_in2->size[0] * i] =
          b_in2 *
          (in1_data[i1 * stride_0_0 + in1->size[0] * aux_0_1] +
           in4_data[i1 * stride_1_0 + in4->size[0] * aux_1_1]) *
          in5;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = c_in2->size[0];
  in1->size[1] = c_in2->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &bg_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = c_in2->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = c_in2->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in2_data[i1 + c_in2->size[0] * i];
    }
  }
  emxFree_real_T(sp, &c_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                      const emxArray_real_T *in2, int32_T in3,
                      const emxArray_real_T *in4, const emxArray_real_T *in5,
                      real_T in6)
{
  const real_T *in2_data;
  const real_T *in4_data;
  const real_T *in5_data;
  real_T b_in2;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in5_data = in5->data;
  in4_data = in4->data;
  in2_data = in2->data;
  b_in2 = in2_data[in3];
  i = in1->size[0] * in1->size[1];
  in1->size[0] = in5->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &xb_emlrtRTEI);
  if (in5->size[0] == 1) {
    loop_ub = in4->size[1];
  } else {
    loop_ub = in5->size[0];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &xb_emlrtRTEI);
  in1_data = in1->data;
  stride_0_1 = (in4->size[1] != 1);
  stride_1_1 = (in5->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < loop_ub; i++) {
    int32_T b_loop_ub;
    b_loop_ub = in5->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          b_in2 * (in4_data[aux_0_1] + in5_data[aux_1_1 + in5->size[0] * i1]) *
          in6;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

void c_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           const emxArray_real_T *b, int32_T innerDimA,
                           int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void d_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2)
{
  emxArray_real_T *r;
  const real_T *in2_data;
  real_T *in1_data;
  real_T *r1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &r, 1, &bg_emlrtRTEI);
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }
  i = r->size[0];
  r->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, r, i, &bg_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    r1[i] = 0.5 * (in1_data[i * stride_0_0] + in2_data[i * stride_1_0]);
  }
  i = in1->size[0];
  in1->size[0] = r->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &bg_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = r1[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void d_dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                           int32_T innerDimA, int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if ((a->size[0] == 1) && (a->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void dynamic_size_checks(const emlrtStack *sp, const emxArray_real_T *a,
                         const emxArray_real_T *b, int32_T innerDimA,
                         int32_T innerDimB)
{
  if (innerDimA != innerDimB) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) ||
        ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(
          sp, &e_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(sp, &d_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
}

void e_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2)
{
  emxArray_real_T *r;
  const real_T *in2_data;
  real_T *in1_data;
  real_T *r1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &r, 1, &bg_emlrtRTEI);
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }
  i = r->size[0];
  r->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, r, i, &bg_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    r1[i] = 6.0 * (in1_data[i * stride_0_0] + in2_data[i * stride_1_0]);
  }
  i = in1->size[0];
  in1->size[0] = r->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &bg_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = r1[i];
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (eml_mtimes_helper.c) */
