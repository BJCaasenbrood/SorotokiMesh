/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unsafeSxfun.c
 *
 * Code generation for function 'unsafeSxfun'
 *
 */

/* Include files */
#include "unsafeSxfun.h"
#include "LocalsNHFast_data.h"
#include "LocalsNHFast_emxutil.h"
#include "LocalsNHFast_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo cg_emlrtRTEI =
    {
        339,            /* lineNo */
        48,             /* colNo */
        "LocalsNHFast", /* fName */
        "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/"
        "LocalsNHFast.m" /* pName */
};

/* Function Definitions */
void f_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in3, const emxArray_real_T *in4)
{
  emxArray_real_T *b_in3;
  const real_T *in3_data;
  const real_T *in4_data;
  real_T *b_in3_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in4_data = in4->data;
  in3_data = in3->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in3, 1, &cg_emlrtRTEI);
  if (in4->size[0] == 1) {
    loop_ub = in3->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  i = b_in3->size[0];
  b_in3->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in3, i, &cg_emlrtRTEI);
  b_in3_data = b_in3->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in3_data[i] = in3_data[i * stride_0_0] - in4_data[i * stride_1_0];
  }
  i = in1->size[0];
  in1->size[0] = b_in3->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &tf_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in3->size[0];
  for (i = 0; i < loop_ub; i++) {
    real_T varargin_1;
    varargin_1 = b_in3_data[i];
    in1_data[i] = varargin_1 * varargin_1;
  }
  emxFree_real_T(sp, &b_in3);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (unsafeSxfun.c) */
