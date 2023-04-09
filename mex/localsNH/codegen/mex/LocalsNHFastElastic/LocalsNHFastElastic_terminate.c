/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFastElastic_terminate.c
 *
 * Code generation for function 'LocalsNHFastElastic_terminate'
 *
 */

/* Include files */
#include "LocalsNHFastElastic_terminate.h"
#include "LocalsNHFastElastic_data.h"
#include "_coder_LocalsNHFastElastic_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LocalsNHFastElastic_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void LocalsNHFastElastic_terminate(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (LocalsNHFastElastic_terminate.c) */
