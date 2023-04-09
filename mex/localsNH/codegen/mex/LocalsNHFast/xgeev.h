/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgeev.h
 *
 * Code generation for function 'xgeev'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
int32_T xgeev(const emlrtStack *sp, const real_T A[9], creal_T W[3],
              creal_T VR[9]);

/* End of code generation (xgeev.h) */
