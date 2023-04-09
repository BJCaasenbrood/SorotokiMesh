/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LocalsNHFast_mex.c
 *
 * Code generation for function '_coder_LocalsNHFast_mex'
 *
 */

/* Include files */
#include "_coder_LocalsNHFast_mex.h"
#include "LocalsNHFast_data.h"
#include "LocalsNHFast_initialize.h"
#include "LocalsNHFast_terminate.h"
#include "_coder_LocalsNHFast_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LocalsNHFast_mexFunction(int32_T nlhs, mxArray *plhs[16], int32_T nrhs,
                              const mxArray *prhs[16])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[16];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 16) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 16, 4,
                        12, "LocalsNHFast");
  }
  if (nlhs > 16) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "LocalsNHFast");
  }
  /* Call the function. */
  LocalsNHFast_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&LocalsNHFast_atexit);
  /* Module initialization. */
  LocalsNHFast_initialize();
  /* Dispatch the entry-point. */
  LocalsNHFast_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  LocalsNHFast_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_LocalsNHFast_mex.c) */