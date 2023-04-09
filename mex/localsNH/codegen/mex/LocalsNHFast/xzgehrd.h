/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgehrd.h
 *
 * Code generation for function 'xzgehrd'
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
void xzgehrd(const emlrtStack *sp, real_T a[9], int32_T ilo, int32_T ihi,
             real_T tau[2]);

/* End of code generation (xzgehrd.h) */
