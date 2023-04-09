/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "LocalsNHFast_emxutil.h"
#include "LocalsNHFast_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRTEInfo rc_emlrtRTEI = {
    53,       /* lineNo */
    9,        /* colNo */
    "repmat", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/elmat/repmat.m" /* pName */
};

/* Function Definitions */
void repmat(const emlrtStack *sp, ptrdiff_t a, int32_T varargin_1,
            emxArray_ptrdiff_t *b)
{
  ptrdiff_t *b_data;
  int32_T i;
  i = b->size[0];
  b->size[0] = varargin_1;
  emxEnsureCapacity_ptrdiff_t(sp, b, i, &rc_emlrtRTEI);
  b_data = b->data;
  for (i = 0; i < varargin_1; i++) {
    b_data[i] = a;
  }
}

/* End of code generation (repmat.c) */