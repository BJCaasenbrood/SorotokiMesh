/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFast_initialize.c
 *
 * Code generation for function 'LocalsNHFast_initialize'
 *
 */

/* Include files */
#include "LocalsNHFast_initialize.h"
#include "LocalsNHFast_data.h"
#include "_coder_LocalsNHFast_mex.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void LocalsNHFast_once(void);

/* Function Definitions */
static void LocalsNHFast_once(void)
{
  mex_InitInfAndNan();
}

void LocalsNHFast_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    LocalsNHFast_once();
  }
}

/* End of code generation (LocalsNHFast_initialize.c) */
