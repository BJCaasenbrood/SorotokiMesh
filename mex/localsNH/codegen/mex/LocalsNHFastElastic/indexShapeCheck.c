/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo wc_emlrtRSI = {
    33,                /* lineNo */
    "indexShapeCheck", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" /* pathName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    121,           /* lineNo */
    5,             /* colNo */
    "errOrWarnIf", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "indexShapeCheck.m" /* pName */
};

/* Function Definitions */
void indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
                     int32_T indexSize)
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = sp;
  st.tls = sp->tls;
  nonSingletonDimFound = (matrixSize[0] != 1);
  if (matrixSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }
  if (nonSingletonDimFound && (indexSize != 1)) {
    if (((matrixSize[0] == 1) != (indexSize == 1)) || (matrixSize[1] != 1)) {
      nonSingletonDimFound = true;
    } else {
      nonSingletonDimFound = false;
    }
    st.site = &wc_emlrtRSI;
    if (nonSingletonDimFound) {
      emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
                                    "Coder:FE:PotentialMatrixMatrix_MV",
                                    "Coder:FE:PotentialMatrixMatrix_MV", 0);
    }
  }
}

/* End of code generation (indexShapeCheck.c) */
