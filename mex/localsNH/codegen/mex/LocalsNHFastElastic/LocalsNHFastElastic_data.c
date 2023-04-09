/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFastElastic_data.c
 *
 * Code generation for function 'LocalsNHFastElastic_data'
 *
 */

/* Include files */
#include "LocalsNHFastElastic_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131610U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "LocalsNHFastElastic",                                /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo k_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo w_emlrtRSI =
    {
        27,       /* lineNo */
        "xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

emlrtRSInfo x_emlrtRSI =
    {
        91,             /* lineNo */
        "ceval_xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

emlrtRSInfo y_emlrtRSI =
    {
        58,             /* lineNo */
        "ceval_xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

emlrtRTEInfo f_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo g_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo ob_emlrtRTEI =
    {
        1,        /* lineNo */
        37,       /* colNo */
        "xgetrf", /* fName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pName */
};

emlrtRTEInfo qb_emlrtRTEI =
    {
        58,       /* lineNo */
        29,       /* colNo */
        "xgetrf", /* fName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pName */
};

emlrtRTEInfo rb_emlrtRTEI =
    {
        89,       /* lineNo */
        27,       /* colNo */
        "xgetrf", /* fName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pName */
};

emlrtRTEInfo ub_emlrtRTEI =
    {
        58,       /* lineNo */
        5,        /* colNo */
        "xgetrf", /* fName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pName */
};

const char_T cv[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
                       'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

/* End of code generation (LocalsNHFastElastic_data.c) */
