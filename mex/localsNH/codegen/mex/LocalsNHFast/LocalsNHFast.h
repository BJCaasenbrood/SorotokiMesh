/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFast.h
 *
 * Code generation for function 'LocalsNHFast'
 *
 */

#pragma once

/* Include files */
#include "LocalsNHFast_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void LocalsNHFast(const emlrtStack *sp, const emxArray_real_T *eNode,
                  const emxArray_real_T *eDof, real_T dV, real_T Rb, real_T Dim,
                  const emxArray_real_T *Node0, const emxArray_real_T *Ns,
                  const emxArray_real_T *dNdxis, const emxArray_real_T *W,
                  const emxArray_real_T *Utmp, const emxArray_real_T *dUtmp,
                  real_T Rho, real_T Zeta, const emxArray_real_T *Grav,
                  real_T Mu, real_T Lambda, emxArray_real_T *Fe,
                  emxArray_real_T *Fb, emxArray_real_T *Qe, emxArray_real_T *Me,
                  emxArray_real_T *Ce, emxArray_real_T *Ke,
                  emxArray_real_T *Kte, emxArray_real_T *Svme,
                  emxArray_real_T *SS, emxArray_real_T *EE, emxArray_real_T *Te,
                  real_T *Ve, real_T *Vge, emxArray_real_T *Tke, real_T Re[9],
                  real_T Ue[9]);

/* End of code generation (LocalsNHFast.h) */
