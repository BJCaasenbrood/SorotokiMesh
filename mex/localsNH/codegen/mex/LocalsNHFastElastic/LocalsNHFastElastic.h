/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFastElastic.h
 *
 * Code generation for function 'LocalsNHFastElastic'
 *
 */

#pragma once

/* Include files */
#include "LocalsNHFastElastic_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void LocalsNHFastElastic(const emlrtStack *sp, const emxArray_real_T *eNode,
                         const emxArray_real_T *eDof, real_T dV, real_T Rb,
                         real_T Dim, const emxArray_real_T *Node0,
                         const emxArray_real_T *Ns,
                         const emxArray_real_T *dNdxis,
                         const emxArray_real_T *W, const emxArray_real_T *Utmp,
                         const emxArray_real_T *dUtmp, real_T Rho, real_T Zeta,
                         const emxArray_real_T *Grav, real_T Mu, real_T Lambda,
                         emxArray_real_T *Fe);

/* End of code generation (LocalsNHFastElastic.h) */
