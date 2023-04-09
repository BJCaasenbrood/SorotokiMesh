/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xdlaln2.h
 *
 * Code generation for function 'xdlaln2'
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
real_T xdlaln2(int32_T na, int32_T nw, real_T smin, const real_T A[9],
               int32_T ia0, const real_T B[9], int32_T ib0, real_T wr,
               real_T wi, real_T X[4], real_T *xnorm);

/* End of code generation (xdlaln2.h) */
