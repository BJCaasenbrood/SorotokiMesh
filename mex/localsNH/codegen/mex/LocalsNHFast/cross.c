/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cross.c
 *
 * Code generation for function 'cross'
 *
 */

/* Include files */
#include "cross.h"
#include "LocalsNHFast_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo c_emlrtRTEI = {
    23,      /* lineNo */
    19,      /* colNo */
    "cross", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/specfun/cross.m" /* pName
                                                                       */
};

/* Function Definitions */
void cross(const emlrtStack *sp, const emxArray_real_T *a,
           const emxArray_real_T *b, real_T c[3])
{
  const real_T *a_data;
  const real_T *b_data;
  b_data = b->data;
  a_data = a->data;
  if ((a->size[0] != 3) || (b->size[0] != 3)) {
    emlrtErrorWithMessageIdR2018a(sp, &c_emlrtRTEI,
                                  "MATLAB:cross:InputSizeMismatch",
                                  "MATLAB:cross:InputSizeMismatch", 0);
  }
  c[0] = a_data[1] * b_data[2] - b_data[1] * a_data[2];
  c[1] = b_data[0] * a_data[2] - a_data[0] * b_data[2];
  c[2] = a_data[0] * b_data[1] - b_data[0] * a_data[1];
}

/* End of code generation (cross.c) */
