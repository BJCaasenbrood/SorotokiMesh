/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFast_terminate.c
 *
 * Code generation for function 'LocalsNHFast_terminate'
 *
 */

/* Include files */
#include "LocalsNHFast_terminate.h"
#include "LocalsNHFast_data.h"
#include "_coder_LocalsNHFast_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LocalsNHFast_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void LocalsNHFast_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (LocalsNHFast_terminate.c) */
