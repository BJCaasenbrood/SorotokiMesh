/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFast_data.c
 *
 * Code generation for function 'LocalsNHFast_data'
 *
 */

/* Include files */
#include "LocalsNHFast_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131642U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "LocalsNHFast",                                       /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo db_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" /* pathName */
};

emlrtRSInfo pb_emlrtRSI =
    {
        28,       /* lineNo */
        "xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

emlrtRSInfo qb_emlrtRSI =
    {
        92,             /* lineNo */
        "ceval_xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

emlrtRSInfo rb_emlrtRSI =
    {
        59,             /* lineNo */
        "ceval_xgetrf", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pathName */
};

emlrtRSInfo tb_emlrtRSI =
    {
        30,      /* lineNo */
        "xswap", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xswap.m" /* pathName */
};

emlrtRSInfo ub_emlrtRSI =
    {
        20,      /* lineNo */
        "xswap", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xswap.m" /* pathName */
};

emlrtRSInfo
    wb_emlrtRSI =
        {
            45,     /* lineNo */
            "xger", /* fcnName */
            "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+blas/"
            "xger.m" /* pathName */
};

emlrtRSInfo xb_emlrtRSI =
    {
        15,     /* lineNo */
        "xger", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xger.m" /* pathName */
};

emlrtRSInfo yb_emlrtRSI =
    {
        41,      /* lineNo */
        "xgerx", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgerx.m" /* pathName */
};

emlrtRSInfo ed_emlrtRSI =
    {
        64,      /* lineNo */
        "xgemv", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xgemv.m" /* pathName */
};

emlrtRSInfo fd_emlrtRSI =
    {
        37,      /* lineNo */
        "xgemv", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgemv.m" /* pathName */
};

emlrtRSInfo gd_emlrtRSI =
    {
        45,      /* lineNo */
        "xgerc", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+blas/"
        "xgerc.m" /* pathName */
};

emlrtRSInfo fe_emlrtRSI = {
    33,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

emlrtRSInfo ff_emlrtRSI =
    {
        54,      /* lineNo */
        "xgerx", /* fcnName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+refblas/"
        "xgerx.m" /* pathName */
};

emlrtRSInfo gf_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/matfun/mpower.m" /* pathName
                                                                       */
};

emlrtRSInfo sf_emlrtRSI = {
    46,        /* lineNo */
    "xzgehrd", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgehrd.m" /* pathName */
};

emlrtRSInfo tf_emlrtRSI = {
    50,        /* lineNo */
    "xzgehrd", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgehrd.m" /* pathName */
};

emlrtRSInfo uf_emlrtRSI = {
    58,        /* lineNo */
    "xzgehrd", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzgehrd.m" /* pathName */
};

emlrtRSInfo vf_emlrtRSI = {
    84,       /* lineNo */
    "xzlarf", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarf.m" /* pathName */
};

emlrtRSInfo wf_emlrtRSI = {
    91,       /* lineNo */
    "xzlarf", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xzlarf.m" /* pathName */
};

emlrtRSInfo lg_emlrtRSI = {
    349,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

emlrtRSInfo mg_emlrtRSI = {
    345,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

emlrtRSInfo ng_emlrtRSI = {
    342,       /* lineNo */
    "xdlahqr", /* fcnName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+reflapack/"
    "xdlahqr.m" /* pathName */
};

emlrtRTEInfo d_emlrtRTEI =
    {
        138,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI =
    {
        133,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo f_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo g_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
    "infocheck.m" /* pName */
};

emlrtRTEInfo j_emlrtRTEI = {
    13,                                                            /* lineNo */
    9,                                                             /* colNo */
    "sqrt",                                                        /* fName */
    "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName */
};

emlrtRTEInfo xb_emlrtRTEI =
    {
        76,                  /* lineNo */
        9,                   /* colNo */
        "eml_mtimes_helper", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" /* pName */
};

emlrtRTEInfo kc_emlrtRTEI =
    {
        1,        /* lineNo */
        37,       /* colNo */
        "xgetrf", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pName */
};

emlrtRTEInfo mc_emlrtRTEI =
    {
        59,       /* lineNo */
        29,       /* colNo */
        "xgetrf", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pName */
};

emlrtRTEInfo nc_emlrtRTEI =
    {
        90,       /* lineNo */
        27,       /* colNo */
        "xgetrf", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pName */
};

emlrtRTEInfo qc_emlrtRTEI =
    {
        59,       /* lineNo */
        5,        /* colNo */
        "xgetrf", /* fName */
        "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/+lapack/"
        "xgetrf.m" /* pName */
};

emlrtRTEInfo tf_emlrtRTEI =
    {
        339,            /* lineNo */
        47,             /* colNo */
        "LocalsNHFast", /* fName */
        "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/"
        "LocalsNHFast.m" /* pName */
};

const char_T cv[19] = {'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
                       'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k'};

/* End of code generation (LocalsNHFast_data.c) */
