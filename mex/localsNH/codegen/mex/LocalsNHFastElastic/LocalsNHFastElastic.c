/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFastElastic.c
 *
 * Code generation for function 'LocalsNHFastElastic'
 *
 */

/* Include files */
#include "LocalsNHFastElastic.h"
#include "LocalsNHFastElastic_data.h"
#include "LocalsNHFastElastic_emxutil.h"
#include "LocalsNHFastElastic_types.h"
#include "colon.h"
#include "det.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    39,                    /* lineNo */
    "LocalsNHFastElastic", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    40,                    /* lineNo */
    "LocalsNHFastElastic", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    41,                    /* lineNo */
    "LocalsNHFastElastic", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    44,                    /* lineNo */
    "LocalsNHFastElastic", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    47,                    /* lineNo */
    "LocalsNHFastElastic", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    56,                    /* lineNo */
    "LocalsNHFastElastic", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    59,                    /* lineNo */
    "LocalsNHFastElastic", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI =
    {
        91,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI =
    {
        60,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    20,                /* lineNo */
    "mrdivide_helper", /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    106,                   /* lineNo */
    "DeformationGradient", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    107,                   /* lineNo */
    "DeformationGradient", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    108,                   /* lineNo */
    "DeformationGradient", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    109,                   /* lineNo */
    "DeformationGradient", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    112,                   /* lineNo */
    "DeformationGradient", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    115,                   /* lineNo */
    "DeformationGradient", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    116,                   /* lineNo */
    "DeformationGradient", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    117,                   /* lineNo */
    "DeformationGradient", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    117,                                                          /* lineNo */
    "colon",                                                      /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/colon.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    79,             /* lineNo */
    "PiollaStress", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    80,             /* lineNo */
    "PiollaStress", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    81,             /* lineNo */
    "PiollaStress", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    85,             /* lineNo */
    "PiollaStress", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    88,             /* lineNo */
    "PiollaStress", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    94,             /* lineNo */
    "PiollaStress", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    44,                                                            /* lineNo */
    "mpower",                                                      /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/mpower.m" /* pathName
                                                                    */
};

static emlrtRSInfo jd_emlrtRSI = {
    71,                                                           /* lineNo */
    "power",                                                      /* fcnName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/power.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    129,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    130,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    36,                    /* lineNo */
    20,                    /* colNo */
    "Ns",                  /* aName */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    37,                    /* lineNo */
    24,                    /* colNo */
    "dNdxis",              /* aName */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    59,                    /* lineNo */
    17,                    /* colNo */
    "W",                   /* aName */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                    /* nDims */
    59,                    /* lineNo */
    10,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo emlrtRTEI = {
    16,                /* lineNo */
    19,                /* colNo */
    "mrdivide_helper", /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/eml/+coder/+internal/"
    "mrdivide_helper.m" /* pName */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    108,                   /* lineNo */
    6,                     /* colNo */
    "UU",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,                    /* nDims */
    108,                   /* lineNo */
    1,                     /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    109,                   /* lineNo */
    6,                     /* colNo */
    "UU",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,                    /* nDims */
    109,                   /* lineNo */
    1,                     /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    113,                   /* lineNo */
    13,                    /* colNo */
    "F0",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    113,                   /* lineNo */
    15,                    /* colNo */
    "F0",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    113,                   /* lineNo */
    23,                    /* colNo */
    "F0",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    113,                   /* lineNo */
    25,                    /* colNo */
    "F0",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    113,                   /* lineNo */
    34,                    /* colNo */
    "F0",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    113,                   /* lineNo */
    36,                    /* colNo */
    "F0",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    113,                   /* lineNo */
    42,                    /* colNo */
    "F0",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    113,                   /* lineNo */
    44,                    /* colNo */
    "F0",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    116,                   /* lineNo */
    10,                    /* colNo */
    "UU",                  /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,                    /* nDims */
    116,                   /* lineNo */
    5,                     /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    2,                     /* nDims */
    117,                   /* lineNo */
    9,                     /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    83,                                                           /* lineNo */
    5,                                                            /* colNo */
    "fltpower",                                                   /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/power.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    105,                   /* lineNo */
    12,                    /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    105,                   /* lineNo */
    12,                    /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    4                        /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    105,                   /* lineNo */
    15,                    /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    105,                   /* lineNo */
    15,                    /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    4                        /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    22,                    /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    22,                    /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    4                        /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    29,                    /* lineNo */
    15,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    29,                    /* lineNo */
    15,                    /* colNo */
    "Utmp",                /* aName */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    30,                    /* lineNo */
    16,                    /* colNo */
    "dUtmp",               /* aName */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    39,                    /* lineNo */
    19,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    39,                    /* lineNo */
    19,                    /* colNo */
    "Node0",               /* aName */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    105,                   /* lineNo */
    1,                     /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    108,                   /* lineNo */
    13,                    /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    108,                   /* lineNo */
    13,                    /* colNo */
    "U",                   /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    109,                   /* lineNo */
    13,                    /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    109,                   /* lineNo */
    13,                    /* colNo */
    "U",                   /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    116,                   /* lineNo */
    17,                    /* colNo */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    116,                   /* lineNo */
    17,                    /* colNo */
    "U",                   /* aName */
    "DeformationGradient", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    134,                           /* lineNo */
    16,                            /* colNo */
    "dNdx",                        /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    135,                           /* lineNo */
    16,                            /* colNo */
    "dNdx",                        /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    2,                             /* nDims */
    151,                           /* lineNo */
    17,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    2,                             /* nDims */
    152,                           /* lineNo */
    17,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo h_emlrtECI = {
    2,                             /* nDims */
    164,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo i_emlrtECI = {
    2,                             /* nDims */
    165,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo j_emlrtECI = {
    2,                             /* nDims */
    166,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo k_emlrtECI = {
    2,                             /* nDims */
    167,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo l_emlrtECI = {
    2,                             /* nDims */
    168,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo m_emlrtECI = {
    2,                             /* nDims */
    169,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo n_emlrtECI = {
    2,                             /* nDims */
    170,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo o_emlrtECI = {
    2,                             /* nDims */
    171,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo p_emlrtECI = {
    2,                             /* nDims */
    172,                           /* lineNo */
    24,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    132,                           /* lineNo */
    4,                             /* colNo */
    "NN",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo q_emlrtECI = {
    -1,                            /* nDims */
    132,                           /* lineNo */
    1,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    133,                           /* lineNo */
    4,                             /* colNo */
    "NN",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo r_emlrtECI = {
    -1,                            /* nDims */
    133,                           /* lineNo */
    1,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    138,                           /* lineNo */
    8,                             /* colNo */
    "NN",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    138,                           /* lineNo */
    10,                            /* colNo */
    "NN",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    138,                           /* lineNo */
    15,                            /* colNo */
    "NN",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo s_emlrtECI = {
    -1,                            /* nDims */
    138,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtECInfo t_emlrtECI = {
    -1,                            /* nDims */
    147,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    148,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo u_emlrtECI = {
    -1,                            /* nDims */
    148,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    149,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo v_emlrtECI = {
    -1,                            /* nDims */
    149,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    150,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo w_emlrtECI = {
    -1,                            /* nDims */
    150,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    151,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo x_emlrtECI = {
    -1,                            /* nDims */
    151,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    152,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo y_emlrtECI = {
    -1,                            /* nDims */
    152,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    155,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    155,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    155,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo ab_emlrtECI = {
    -1,                            /* nDims */
    155,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    156,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    156,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    156,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo bb_emlrtECI = {
    -1,                            /* nDims */
    156,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    157,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    157,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    157,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo cb_emlrtECI = {
    -1,                            /* nDims */
    157,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    158,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    158,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    158,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo db_emlrtECI = {
    -1,                            /* nDims */
    158,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    159,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    159,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    159,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo eb_emlrtECI = {
    -1,                            /* nDims */
    159,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    160,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    160,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    160,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo fb_emlrtECI = {
    -1,                            /* nDims */
    160,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    161,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    161,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    161,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo gb_emlrtECI = {
    -1,                            /* nDims */
    161,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    162,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    162,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    162,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo hb_emlrtECI = {
    -1,                            /* nDims */
    162,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    163,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    163,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    163,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo ib_emlrtECI = {
    -1,                            /* nDims */
    163,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    164,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    164,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    164,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo jb_emlrtECI = {
    -1,                            /* nDims */
    164,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    165,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    165,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    165,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo kb_emlrtECI = {
    -1,                            /* nDims */
    165,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    166,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    166,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    166,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo lb_emlrtECI = {
    -1,                            /* nDims */
    166,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    167,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    167,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    167,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo mb_emlrtECI = {
    -1,                            /* nDims */
    167,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    168,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    168,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    168,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo nb_emlrtECI = {
    -1,                            /* nDims */
    168,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    169,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    169,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    169,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo ob_emlrtECI = {
    -1,                            /* nDims */
    169,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    170,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    170,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    170,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo pb_emlrtECI = {
    -1,                            /* nDims */
    170,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo fd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    171,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    171,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    171,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo qb_emlrtECI = {
    -1,                            /* nDims */
    171,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtBCInfo id_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    172,                           /* lineNo */
    8,                             /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    172,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    172,                           /* lineNo */
    15,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtECInfo rb_emlrtECI = {
    -1,                            /* nDims */
    172,                           /* lineNo */
    5,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtDCInfo m_emlrtDCI = {
    127,                           /* lineNo */
    15,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    144,                           /* lineNo */
    12,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    144,                           /* lineNo */
    12,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    4                        /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    144,                           /* lineNo */
    21,                            /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    127,                           /* lineNo */
    1,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    132,                           /* lineNo */
    6,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    132,                           /* lineNo */
    6,                             /* colNo */
    "NN",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    133,                           /* lineNo */
    6,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    133,                           /* lineNo */
    6,                             /* colNo */
    "NN",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    144,                           /* lineNo */
    1,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    1                        /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    144,                           /* lineNo */
    1,                             /* colNo */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    4                        /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    147,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    148,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    149,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    150,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    151,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = {
    -1,                            /* iFirst */
    -1,                            /* iLast */
    152,                           /* lineNo */
    10,                            /* colNo */
    "Bn",                          /* aName */
    "NonlinearStrainOperatorFast", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m", /* pName */
    0                        /* checkKind */
};

static emlrtRTEInfo k_emlrtRTEI = {
    13,                                                            /* lineNo */
    9,                                                             /* colNo */
    "sqrt",                                                        /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/elfun/sqrt.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    22,                    /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    29,                    /* lineNo */
    15,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    29,                    /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    39,                    /* lineNo */
    19,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    39,                    /* lineNo */
    13,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    37,                    /* lineNo */
    13,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    105,                   /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    84,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/colon.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    90,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/colon.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    88,                                                           /* lineNo */
    5,                                                            /* colNo */
    "colon",                                                      /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/colon.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    106,                   /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    105,                                                          /* lineNo */
    9,                                                            /* colNo */
    "colon",                                                      /* fName */
    "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/colon.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    107,                   /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    112,                   /* lineNo */
    5,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    115,                   /* lineNo */
    5,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    117,                   /* lineNo */
    9,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    36,                    /* lineNo */
    13,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI =
    {
        75,                  /* lineNo */
        9,                   /* colNo */
        "eml_mtimes_helper", /* fName */
        "/usr/local/MATLAB/R2021a/toolbox/eml/lib/matlab/ops/"
        "eml_mtimes_helper.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    39,                    /* lineNo */
    5,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    40,                    /* lineNo */
    5,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    2,                     /* lineNo */
    9,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    106,                   /* lineNo */
    13,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    127,                   /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    129,                   /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    130,                   /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    132,                   /* lineNo */
    6,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    133,                   /* lineNo */
    6,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    141,                   /* lineNo */
    5,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    144,                   /* lineNo */
    1,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    139,                   /* lineNo */
    5,                     /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    147,                   /* lineNo */
    10,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    147,                   /* lineNo */
    17,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    155,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    148,                   /* lineNo */
    10,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    148,                   /* lineNo */
    17,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    156,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    149,                   /* lineNo */
    10,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    149,                   /* lineNo */
    17,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    157,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    150,                   /* lineNo */
    10,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    150,                   /* lineNo */
    17,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    158,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    151,                   /* lineNo */
    17,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    151,                   /* lineNo */
    32,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    159,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    151,                   /* lineNo */
    10,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    152,                   /* lineNo */
    17,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    160,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    152,                   /* lineNo */
    32,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    152,                   /* lineNo */
    10,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    161,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    162,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    163,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI = {
    164,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    164,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    165,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    165,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    166,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    166,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    167,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    167,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    168,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    168,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    169,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    169,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI = {
    170,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    170,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo de_emlrtRTEI = {
    171,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = {
    171,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = {
    172,                   /* lineNo */
    24,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = {
    172,                   /* lineNo */
    39,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRTEInfo he_emlrtRTEI = {
    122,                   /* lineNo */
    17,                    /* colNo */
    "LocalsNHFastElastic", /* fName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pName */
};

static emlrtRSInfo od_emlrtRSI = {
    172,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    171,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    170,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    169,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    168,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    167,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    166,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    165,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    164,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    163,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    162,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo ae_emlrtRSI = {
    161,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo be_emlrtRSI = {
    160,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = {
    159,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    158,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    157,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = {
    156,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    155,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    138,                           /* lineNo */
    "NonlinearStrainOperatorFast", /* fcnName */
    "/home/brandon/Documents/MATLAB/SorotokiCode/src/fem/mex/localsNH/"
    "LocalsNHFastElastic.m" /* pathName */
};

/* Function Declarations */
static void NonlinearStrainOperatorFast(const emlrtStack *sp,
                                        const emxArray_real_T *N,
                                        const emxArray_real_T *dNdx,
                                        const real_T F[9], emxArray_real_T *Bn);

static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator,
                             int32_T denominator);

/* Function Definitions */
static void NonlinearStrainOperatorFast(const emlrtStack *sp,
                                        const emxArray_real_T *N,
                                        const emxArray_real_T *dNdx,
                                        const real_T F[9], emxArray_real_T *Bn)
{
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_real_T *NN;
  emxArray_real_T *id1;
  emxArray_real_T *id2;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  real_T d;
  real_T zz;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &NN, 2, &ic_emlrtRTEI, true);
  /* ------------------------------------------------ nonlinear strain operator
   */
  zz = (real_T)dNdx->size[1] * (real_T)N->size[0];
  i = NN->size[0] * NN->size[1];
  NN->size[0] = dNdx->size[1];
  emxEnsureCapacity_real_T(sp, NN, i, &ic_emlrtRTEI);
  if (zz != (int32_T)zz) {
    emlrtIntegerCheckR2012b(zz, &m_emlrtDCI, (emlrtCTX)sp);
  }
  i = NN->size[0] * NN->size[1];
  NN->size[1] = (int32_T)zz;
  emxEnsureCapacity_real_T(sp, NN, i, &ic_emlrtRTEI);
  if (zz != (int32_T)zz) {
    emlrtIntegerCheckR2012b(zz, &q_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = dNdx->size[1] * (int32_T)zz;
  for (i = 0; i < loop_ub; i++) {
    NN->data[i] = 0.0;
  }
  st.site = &kd_emlrtRSI;
  emxInit_real_T(&st, &id1, 2, &jc_emlrtRTEI, true);
  if ((dNdx->size[1] == 0) || (zz < 1.0)) {
    id1->size[0] = 1;
    id1->size[1] = 0;
  } else {
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    id1->size[1] =
        (int32_T)muDoubleScalarFloor((zz - 1.0) / (real_T)dNdx->size[1]) + 1;
    emxEnsureCapacity_real_T(&st, id1, i, &jc_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((zz - 1.0) / (real_T)dNdx->size[1]);
    for (i = 0; i <= loop_ub; i++) {
      id1->data[i] = (real_T)dNdx->size[1] * (real_T)i + 1.0;
    }
  }
  st.site = &ld_emlrtRSI;
  emxInit_real_T(&st, &id2, 2, &kc_emlrtRTEI, true);
  if ((dNdx->size[1] == 0) || (zz < 2.0)) {
    id2->size[0] = 1;
    id2->size[1] = 0;
  } else {
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] =
        (int32_T)muDoubleScalarFloor((zz - 2.0) / (real_T)dNdx->size[1]) + 1;
    emxEnsureCapacity_real_T(&st, id2, i, &kc_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((zz - 2.0) / (real_T)dNdx->size[1]);
    for (i = 0; i <= loop_ub; i++) {
      id2->data[i] = (real_T)dNdx->size[1] * (real_T)i + 2.0;
    }
  }
  if (1 > dNdx->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, dNdx->size[1], &w_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &r, 1, &lc_emlrtRTEI, true);
  i = r->size[0];
  r->size[0] = id1->size[1];
  emxEnsureCapacity_real_T(sp, r, i, &lc_emlrtRTEI);
  loop_ub = id1->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = id1->data[i];
  }
  emxInit_int32_T(sp, &r1, 1, &he_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = r->size[0];
  emxEnsureCapacity_int32_T(sp, r1, i, &lc_emlrtRTEI);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)r->data[i];
    if (r->data[i] != i1) {
      emlrtIntegerCheckR2012b(r->data[i], &r_emlrtDCI, (emlrtCTX)sp);
    }
    if ((i1 < 1) || (i1 > (int32_T)zz)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)r->data[i], 1, (int32_T)zz,
                                    &ld_emlrtBCI, (emlrtCTX)sp);
    }
    r1->data[i] = i1 - 1;
  }
  iv[0] = 1;
  iv[1] = r1->size[0];
  iv1[0] = 1;
  iv1[1] = N->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &q_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = N->size[0];
  for (i = 0; i < loop_ub; i++) {
    NN->data[NN->size[0] * r1->data[i]] = N->data[i];
  }
  if (2 > NN->size[0]) {
    emlrtDynamicBoundsCheckR2012b(2, 1, NN->size[0], &x_emlrtBCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &r2, 1, &mc_emlrtRTEI, true);
  i = r2->size[0];
  r2->size[0] = id2->size[1];
  emxEnsureCapacity_real_T(sp, r2, i, &mc_emlrtRTEI);
  loop_ub = id2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = id2->data[i];
  }
  i = r1->size[0];
  r1->size[0] = r2->size[0];
  emxEnsureCapacity_int32_T(sp, r1, i, &mc_emlrtRTEI);
  loop_ub = r2->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)r2->data[i];
    if (r2->data[i] != i1) {
      emlrtIntegerCheckR2012b(r2->data[i], &s_emlrtDCI, (emlrtCTX)sp);
    }
    if ((i1 < 1) || (i1 > NN->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)r2->data[i], 1, NN->size[1],
                                    &md_emlrtBCI, (emlrtCTX)sp);
    }
    r1->data[i] = i1 - 1;
  }
  iv[0] = 1;
  iv[1] = r1->size[0];
  iv1[0] = 1;
  iv1[1] = N->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &r_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = N->size[0];
  for (i = 0; i < loop_ub; i++) {
    NN->data[NN->size[0] * r1->data[i] + 1] = N->data[i];
  }
  if (1 > dNdx->size[1]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, dNdx->size[1], &u_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (2 > dNdx->size[1]) {
    emlrtDynamicBoundsCheckR2012b(2, 1, dNdx->size[1], &v_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (dNdx->size[1] == 3) {
    if (3.0 > zz) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (3 > NN->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, NN->size[1], &ab_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 3;
      i1 = 3;
      if (((int32_T)zz < 1) || ((int32_T)zz > NN->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz, 1, NN->size[1], &bb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)zz;
    }
    if (3 > NN->size[0]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, NN->size[0], &y_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &he_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    iv1[0] = 1;
    iv1[1] = N->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &s_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = dNdx->size[0];
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    id1->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id1, i, &pc_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id1->data[i] = dNdx->data[i + dNdx->size[0] * 2];
    }
  } else {
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    id1->size[1] = 1;
    emxEnsureCapacity_real_T(sp, id1, i, &nc_emlrtRTEI);
    id1->data[0] = 0.0;
  }
  emxFree_real_T(&NN);
  d = ((real_T)dNdx->size[1] - 1.0) * 3.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &o_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &n_emlrtDCI, (emlrtCTX)sp);
  }
  i = Bn->size[0] * Bn->size[1];
  Bn->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, Bn, i, &oc_emlrtRTEI);
  if (zz != (int32_T)zz) {
    emlrtIntegerCheckR2012b(zz, &p_emlrtDCI, (emlrtCTX)sp);
  }
  i = Bn->size[0] * Bn->size[1];
  Bn->size[1] = (int32_T)zz;
  emxEnsureCapacity_real_T(sp, Bn, i, &oc_emlrtRTEI);
  d = ((real_T)dNdx->size[1] - 1.0) * 3.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &u_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)d) {
    emlrtIntegerCheckR2012b(d, &t_emlrtDCI, (emlrtCTX)sp);
  }
  if (zz != (int32_T)zz) {
    emlrtIntegerCheckR2012b(zz, &t_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = (int32_T)d * (int32_T)zz;
  for (i = 0; i < loop_ub; i++) {
    Bn->data[i] = 0.0;
  }
  emxInit_real_T(sp, &r3, 2, &he_emlrtRTEI, true);
  if (dNdx->size[1] == 2) {
    /*  2-dimensional */
    i = r1->size[0];
    r1->size[0] = r->size[0];
    emxEnsureCapacity_int32_T(sp, r1, i, &qc_emlrtRTEI);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r->data[i];
      if ((i1 < 1) || (i1 > (int32_T)zz)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r->data[i], 1, (int32_T)zz,
                                      &nd_emlrtBCI, (emlrtCTX)sp);
      }
      r1->data[i] = i1 - 1;
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &rc_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[0];
    }
    iv[0] = 1;
    iv[1] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &t_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      Bn->data[Bn->size[0] * r1->data[i]] = id2->data[i];
    }
    if (1 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[0], &cb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = r1->size[0];
    r1->size[0] = r2->size[0];
    emxEnsureCapacity_int32_T(sp, r1, i, &tc_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r2->data[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r2->data[i], 1, Bn->size[1],
                                      &od_emlrtBCI, (emlrtCTX)sp);
      }
      r1->data[i] = i1 - 1;
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &uc_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[1];
    }
    iv[0] = 1;
    iv[1] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &u_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      Bn->data[Bn->size[0] * r1->data[i]] = id2->data[i];
    }
    if (2 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &db_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = r1->size[0];
    r1->size[0] = r->size[0];
    emxEnsureCapacity_int32_T(sp, r1, i, &wc_emlrtRTEI);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r->data[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r->data[i], 1, Bn->size[1],
                                      &pd_emlrtBCI, (emlrtCTX)sp);
      }
      r1->data[i] = i1 - 1;
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &xc_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i + dNdx->size[0]] * F[3];
    }
    iv[0] = 1;
    iv[1] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &v_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      Bn->data[Bn->size[0] * r1->data[i] + 1] = id2->data[i];
    }
    if (2 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &eb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = r1->size[0];
    r1->size[0] = r2->size[0];
    emxEnsureCapacity_int32_T(sp, r1, i, &ad_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r2->data[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r2->data[i], 1, Bn->size[1],
                                      &qd_emlrtBCI, (emlrtCTX)sp);
      }
      r1->data[i] = i1 - 1;
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &bd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i + dNdx->size[0]] * F[4];
    }
    iv[0] = 1;
    iv[1] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &w_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      Bn->data[Bn->size[0] * r1->data[i] + 1] = id2->data[i];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &dd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[3];
    }
    loop_ub = dNdx->size[0];
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r3, i, &ed_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = dNdx->data[i + dNdx->size[0]] * F[0];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &f_emlrtECI, (emlrtCTX)sp);
    if (3 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &fb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = r1->size[0];
    r1->size[0] = r->size[0];
    emxEnsureCapacity_int32_T(sp, r1, i, &gd_emlrtRTEI);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r->data[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r->data[i], 1, Bn->size[1],
                                      &rd_emlrtBCI, (emlrtCTX)sp);
      }
      r1->data[i] = i1 - 1;
    }
    iv[0] = 1;
    iv[1] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &x_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      Bn->data[Bn->size[0] * r1->data[i] + 2] = id2->data[i] + r3->data[i];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &hd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[4];
    }
    loop_ub = dNdx->size[0];
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r3, i, &jd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = dNdx->data[i + dNdx->size[0]] * F[1];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &g_emlrtECI, (emlrtCTX)sp);
    if (3 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &gb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i = r1->size[0];
    r1->size[0] = r2->size[0];
    emxEnsureCapacity_int32_T(sp, r1, i, &kd_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r2->data[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r2->data[i], 1, Bn->size[1],
                                      &sd_emlrtBCI, (emlrtCTX)sp);
      }
      r1->data[i] = i1 - 1;
    }
    iv[0] = 1;
    iv[1] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &y_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      Bn->data[Bn->size[0] * r1->data[i] + 2] = id2->data[i] + r3->data[i];
    }
  } else {
    /*  3-dimensional */
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (1.0 > d))) {
      i = 1;
      i1 = 0;
    } else {
      if (1 > (int32_T)zz) {
        emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)zz, &ib_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > (int32_T)zz)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, (int32_T)zz, &jb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = (int32_T)d;
    }
    i2 = (dNdx->size[1] - 1) * 3;
    if (1 > i2) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i2, &hb_emlrtBCI, (emlrtCTX)sp);
    }
    loop_ub = dNdx->size[0];
    i2 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i2, &sc_emlrtRTEI);
    for (i2 = 0; i2 < loop_ub; i2++) {
      id2->data[i2] = dNdx->data[i2] * F[0];
    }
    iv[0] = 1;
    st.site = &ge_emlrtRSI;
    iv[1] = div_s32_floor(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &ab_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bn->data[Bn->size[0] * (i * i1)] = id2->data[i1];
    }
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (2.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (2 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &lb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &mb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (1 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[0], &kb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = dNdx->size[0];
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i3, &vc_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      id2->data[i3] = dNdx->data[i3] * F[1];
    }
    iv[0] = 1;
    st.site = &fe_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &bb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1)] = id2->data[i2];
    }
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (3.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (3 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &ob_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &pb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (1 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[0], &nb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = dNdx->size[0];
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i3, &yc_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      id2->data[i3] = dNdx->data[i3] * F[2];
    }
    iv[0] = 1;
    st.site = &ee_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &cb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1)] = id2->data[i2];
    }
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (1.0 > d))) {
      i = 1;
      i1 = 0;
    } else {
      if (1 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &rb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &sb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = (int32_T)d;
    }
    if (2 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &qb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = dNdx->size[0];
    i2 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i2, &cd_emlrtRTEI);
    for (i2 = 0; i2 < loop_ub; i2++) {
      id2->data[i2] = dNdx->data[i2 + dNdx->size[0]] * F[3];
    }
    iv[0] = 1;
    st.site = &de_emlrtRSI;
    iv[1] = div_s32_floor(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &db_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bn->data[Bn->size[0] * (i * i1) + 1] = id2->data[i1];
    }
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (2.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (2 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &ub_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &vb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (2 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &tb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = dNdx->size[0];
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i3, &fd_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      id2->data[i3] = dNdx->data[i3 + dNdx->size[0]] * F[4];
    }
    iv[0] = 1;
    st.site = &ce_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &eb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 1] = id2->data[i2];
    }
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (3.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (3 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &xb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &yb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (2 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &wb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = dNdx->size[0];
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i3, &id_emlrtRTEI);
    for (i3 = 0; i3 < loop_ub; i3++) {
      id2->data[i3] = dNdx->data[i3 + dNdx->size[0]] * F[5];
    }
    iv[0] = 1;
    st.site = &be_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &fb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 1] = id2->data[i2];
    }
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (1.0 > d))) {
      i = 1;
      i1 = 0;
    } else {
      if (1 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &bc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &cc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = (int32_T)d;
    }
    if (3 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &ac_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i2 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, id2, i2, &ld_emlrtRTEI);
    loop_ub = id1->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      id2->data[i2] = id1->data[i2] * F[6];
    }
    iv[0] = 1;
    st.site = &ae_emlrtRSI;
    iv[1] = div_s32_floor(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &gb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bn->data[Bn->size[0] * (i * i1) + 2] = id2->data[i1];
    }
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (2.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (2 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &ec_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &fc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (3 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &dc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, id2, i3, &md_emlrtRTEI);
    loop_ub = id1->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      id2->data[i3] = id1->data[i3] * F[7];
    }
    iv[0] = 1;
    st.site = &yd_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &hb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 2] = id2->data[i2];
    }
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (3.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (3 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &hc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &ic_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (3 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &gc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, id2, i3, &nd_emlrtRTEI);
    loop_ub = id1->size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      id2->data[i3] = id1->data[i3] * F[8];
    }
    iv[0] = 1;
    st.site = &xd_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &ib_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 2] = id2->data[i2];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &od_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[3];
    }
    loop_ub = dNdx->size[0];
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r3, i, &pd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = dNdx->data[i + dNdx->size[0]] * F[0];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &h_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (1.0 > d))) {
      i = 1;
      i1 = 0;
    } else {
      if (1 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &kc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &lc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = (int32_T)d;
    }
    if (4 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(4, 1, Bn->size[0], &jc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &wd_emlrtRSI;
    iv[1] = div_s32_floor(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &jb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bn->data[Bn->size[0] * (i * i1) + 3] = id2->data[i1] + r3->data[i1];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &qd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[4];
    }
    loop_ub = dNdx->size[0];
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r3, i, &rd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = dNdx->data[i + dNdx->size[0]] * F[1];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &i_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (2.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (2 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &nc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &oc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (4 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(4, 1, Bn->size[0], &mc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &vd_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &kb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 3] =
          id2->data[i2] + r3->data[i2];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &sd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[5];
    }
    loop_ub = dNdx->size[0];
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r3, i, &td_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = dNdx->data[i + dNdx->size[0]] * F[2];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &j_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (3.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (3 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &qc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &rc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (4 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(4, 1, Bn->size[0], &pc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &ud_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &lb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 3] =
          id2->data[i2] + r3->data[i2];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &ud_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i + dNdx->size[0]] * F[6];
    }
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r3, i, &vd_emlrtRTEI);
    loop_ub = id1->size[1];
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = id1->data[i] * F[3];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &k_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (1.0 > d))) {
      i = 1;
      i1 = 0;
    } else {
      if (1 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &tc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &uc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = (int32_T)d;
    }
    if (5 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(5, 1, Bn->size[0], &sc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &td_emlrtRSI;
    iv[1] = div_s32_floor(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &mb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bn->data[Bn->size[0] * (i * i1) + 4] = id2->data[i1] + r3->data[i1];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &wd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i + dNdx->size[0]] * F[7];
    }
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r3, i, &xd_emlrtRTEI);
    loop_ub = id1->size[1];
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = id1->data[i] * F[4];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &l_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (2.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (2 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &wc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &xc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (5 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(5, 1, Bn->size[0], &vc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &sd_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &nb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 4] =
          id2->data[i2] + r3->data[i2];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &yd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i + dNdx->size[0]] * F[8];
    }
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r3, i, &ae_emlrtRTEI);
    loop_ub = id1->size[1];
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = id1->data[i] * F[5];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &m_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (3.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (3 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &ad_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &bd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (5 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(5, 1, Bn->size[0], &yc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &rd_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &ob_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 4] =
          id2->data[i2] + r3->data[i2];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &be_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[6];
    }
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r3, i, &ce_emlrtRTEI);
    loop_ub = id1->size[1];
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = id1->data[i] * F[0];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &n_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (1.0 > d))) {
      i = 1;
      i1 = 0;
    } else {
      if (1 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &dd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &ed_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i1 = (int32_T)d;
    }
    if (6 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(6, 1, Bn->size[0], &cd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &qd_emlrtRSI;
    iv[1] = div_s32_floor(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &pb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bn->data[Bn->size[0] * (i * i1) + 5] = id2->data[i1] + r3->data[i1];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &de_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[7];
    }
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r3, i, &ee_emlrtRTEI);
    loop_ub = id1->size[1];
    for (i = 0; i < loop_ub; i++) {
      r3->data[i] = id1->data[i] * F[1];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])r3->size)[0];
    iv1[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &o_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (2.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (2 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &gd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &hd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (6 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(6, 1, Bn->size[0], &fd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &pd_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &qb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 5] =
          id2->data[i2] + r3->data[i2];
    }
    loop_ub = dNdx->size[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &fe_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      id2->data[i] = dNdx->data[i] * F[8];
    }
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    emxEnsureCapacity_real_T(sp, id1, i, &ge_emlrtRTEI);
    loop_ub = id1->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      id1->data[i] *= F[2];
    }
    iv[0] = (*(int32_T(*)[2])id2->size)[0];
    iv[1] = (*(int32_T(*)[2])id2->size)[1];
    iv1[0] = (*(int32_T(*)[2])id1->size)[0];
    iv1[1] = (*(int32_T(*)[2])id1->size)[1];
    emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &p_emlrtECI, (emlrtCTX)sp);
    d = (real_T)dNdx->size[1] * (real_T)N->size[0];
    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (3.0 > d))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (3 > Bn->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &jd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)d < 1) || ((int32_T)d > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bn->size[1], &kd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = (int32_T)d;
    }
    if (6 > Bn->size[0]) {
      emlrtDynamicBoundsCheckR2012b(6, 1, Bn->size[0], &id_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    st.site = &od_emlrtRSI;
    iv[1] = div_s32_floor(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &rb_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bn->data[Bn->size[0] * ((i + i1 * i2) - 1) + 5] =
          id2->data[i2] + id1->data[i2];
    }
  }
  emxFree_real_T(&r2);
  emxFree_real_T(&r);
  emxFree_int32_T(&r1);
  emxFree_real_T(&r3);
  emxFree_real_T(&id2);
  emxFree_real_T(&id1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator,
                             int32_T denominator)
{
  int32_T quotient;
  uint32_T absDenominator;
  uint32_T absNumerator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, (emlrtCTX)sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }
    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }
  return quotient;
}

void LocalsNHFastElastic(const emlrtStack *sp, const emxArray_real_T *eNode,
                         const emxArray_real_T *eDof, real_T dV, real_T Rb,
                         real_T Dim, const emxArray_real_T *Node0,
                         const emxArray_real_T *Ns,
                         const emxArray_real_T *dNdxis,
                         const emxArray_real_T *W, const emxArray_real_T *Utmp,
                         const emxArray_real_T *dUtmp, real_T Rho, real_T Zeta,
                         const emxArray_real_T *Grav, real_T Mu, real_T Lambda,
                         emxArray_real_T *Fe)
{
  static const int8_T b_b[6] = {2, 2, 2, 0, 0, 0};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *b_eDof;
  emxArray_real_T *Delta;
  emxArray_real_T *J0;
  emxArray_real_T *b_dNdxis;
  emxArray_real_T *dNdx;
  emxArray_real_T *id1;
  emxArray_real_T *id2;
  emxArray_real_T *r;
  emxArray_real_T *y;
  real_T C[9];
  real_T F[9];
  real_T I3E[6];
  real_T Se_data[6];
  real_T I3;
  real_T a;
  real_T b;
  real_T b_a;
  real_T b_tmp;
  real_T c_a;
  real_T d;
  real_T d_a;
  real_T nn;
  int32_T e_eDof[2];
  int32_T iv[2];
  int32_T Se_size;
  int32_T b_Node0;
  int32_T b_loop_ub;
  int32_T c_eDof;
  int32_T c_loop_ub;
  int32_T d_eDof;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  int32_T g_loop_ub;
  int32_T h_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i10;
  int32_T i11;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T i_loop_ub;
  int32_T j_loop_ub;
  int32_T loop_ub;
  int32_T n;
  int32_T q;
  (void)dV;
  (void)Rb;
  (void)Rho;
  (void)Zeta;
  (void)Grav;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*    % Fem.Dim */
  /*  % Node0 */
  /*      % shpfnc for Fem.ShapeFnc{nn} */
  /*  % derive shpfnc for Fem.ShapeFnc{nn} */
  /*      % weights shapefnc */
  /*   % current displacements */
  /*  % current velocities */
  /*    % density */
  /*   % dampings */
  /*   % gravity */
  /*  get order */
  if ((eNode->size[0] == 0) || (eNode->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(eNode->size[0], eNode->size[1]);
  }
  /*  get gauss points and weights */
  /* W   = Fem.ShapeFnc{nn}.W; */
  d = Dim * (real_T)n;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &f_emlrtDCI, (emlrtCTX)sp);
  }
  I3 = (int32_T)muDoubleScalarFloor(d);
  if (d != I3) {
    emlrtIntegerCheckR2012b(d, &e_emlrtDCI, (emlrtCTX)sp);
  }
  i = Fe->size[0];
  loop_ub = (int32_T)d;
  Fe->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, Fe, i, &l_emlrtRTEI);
  if (d != I3) {
    emlrtIntegerCheckR2012b(d, &e_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < loop_ub; i++) {
    Fe->data[i] = 0.0;
  }
  emxInit_int32_T(sp, &b_eDof, 2, &m_emlrtRTEI, true);
  /*  get displacement field */
  i = b_eDof->size[0] * b_eDof->size[1];
  b_eDof->size[0] = eDof->size[0];
  b_eDof->size[1] = eDof->size[1];
  emxEnsureCapacity_int32_T(sp, b_eDof, i, &m_emlrtRTEI);
  loop_ub = eDof->size[0] * eDof->size[1];
  for (i = 0; i < loop_ub; i++) {
    d = eDof->data[i];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &g_emlrtDCI, (emlrtCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > Utmp->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Utmp->size[0], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_eDof->data[i] = (int32_T)d;
  }
  emxInit_real_T(sp, &Delta, 2, &n_emlrtRTEI, true);
  n = eDof->size[0] * eDof->size[1];
  loop_ub = Utmp->size[1];
  i = Delta->size[0] * Delta->size[1];
  Delta->size[0] = n;
  Delta->size[1] = Utmp->size[1];
  emxEnsureCapacity_real_T(sp, Delta, i, &n_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < n; i1++) {
      Delta->data[i1 + Delta->size[0] * i] =
          Utmp->data[(b_eDof->data[i1] + Utmp->size[0] * i) - 1];
    }
  }
  loop_ub = eDof->size[0] * eDof->size[1];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)eDof->data[i];
    if ((i1 < 1) || (i1 > dUtmp->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, dUtmp->size[0], &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  /*  quadrature loop */
  i = W->size[0];
  if (0 <= W->size[0] - 1) {
    b_Node0 = Node0->size[0];
    b_loop_ub = eNode->size[0] * eNode->size[1];
    i2 = Node0->size[1];
    c_loop_ub = Node0->size[1];
    i3 = dNdxis->size[0];
    d_loop_ub = dNdxis->size[0];
    i4 = dNdxis->size[1];
    e_loop_ub = dNdxis->size[1];
    f_loop_ub = dNdxis->size[0];
    i5 = dNdxis->size[1];
    g_loop_ub = dNdxis->size[1];
    i6 = dNdxis->size[1];
    h_loop_ub = dNdxis->size[0];
    i7 = dNdxis->size[1];
    i_loop_ub = dNdxis->size[1];
    if ((eDof->size[0] * eDof->size[1] == 0) || (Utmp->size[1] == 0)) {
      n = 0;
    } else if (eDof->size[0] * eDof->size[1] > Utmp->size[1]) {
      n = eDof->size[0] * eDof->size[1];
    } else {
      n = Utmp->size[1];
    }
    nn = muDoubleScalarRound((real_T)n / Dim);
    b_tmp = Dim * nn;
    i8 = Utmp->size[1];
    c_eDof = eDof->size[0] * eDof->size[1] * Utmp->size[1];
    i9 = Utmp->size[1];
    d_eDof = eDof->size[0] * eDof->size[1] * Utmp->size[1];
    a = Mu / 2.0;
    i10 = Ns->size[0];
    j_loop_ub = Ns->size[0];
  }
  emxInit_real_T(sp, &J0, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(sp, &dNdx, 2, &fb_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 2, &gb_emlrtRTEI, true);
  emxInit_real_T(sp, &id1, 1, &v_emlrtRTEI, true);
  emxInit_real_T(sp, &id2, 1, &x_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_dNdxis, 2, &q_emlrtRTEI, true);
  for (q = 0; q < i; q++) {
    /*  extract shape-functions */
    if (q + 1 > Ns->size[2]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, Ns->size[2], &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (q + 1 > dNdxis->size[2]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, dNdxis->size[2], &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = b_eDof->size[0] * b_eDof->size[1];
    b_eDof->size[0] = eNode->size[0];
    b_eDof->size[1] = eNode->size[1];
    emxEnsureCapacity_int32_T(sp, b_eDof, i1, &o_emlrtRTEI);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      d = eNode->data[i1];
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &h_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > b_Node0)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, b_Node0, &q_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      b_eDof->data[i1] = (int32_T)d;
    }
    n = eNode->size[0] * eNode->size[1];
    i1 = r->size[0] * r->size[1];
    r->size[0] = n;
    r->size[1] = i2;
    emxEnsureCapacity_real_T(sp, r, i1, &p_emlrtRTEI);
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      for (i11 = 0; i11 < n; i11++) {
        r->data[i11 + r->size[0] * i1] =
            Node0->data[(b_eDof->data[i11] + Node0->size[0] * i1) - 1];
      }
    }
    st.site = &emlrtRSI;
    i1 = b_dNdxis->size[0] * b_dNdxis->size[1];
    b_dNdxis->size[0] = d_loop_ub;
    b_dNdxis->size[1] = i4;
    emxEnsureCapacity_real_T(&st, b_dNdxis, i1, &q_emlrtRTEI);
    for (i1 = 0; i1 < e_loop_ub; i1++) {
      for (i11 = 0; i11 < d_loop_ub; i11++) {
        b_dNdxis->data[i11 + b_dNdxis->size[0] * i1] =
            dNdxis->data[(i11 + dNdxis->size[0] * i1) +
                         dNdxis->size[0] * dNdxis->size[1] * q];
      }
    }
    b_st.site = &i_emlrtRSI;
    dynamic_size_checks(&b_st, r, b_dNdxis, eNode->size[0] * eNode->size[1],
                        i3);
    i1 = b_dNdxis->size[0] * b_dNdxis->size[1];
    b_dNdxis->size[0] = f_loop_ub;
    b_dNdxis->size[1] = i5;
    emxEnsureCapacity_real_T(&st, b_dNdxis, i1, &q_emlrtRTEI);
    for (i1 = 0; i1 < g_loop_ub; i1++) {
      for (i11 = 0; i11 < f_loop_ub; i11++) {
        b_dNdxis->data[i11 + b_dNdxis->size[0] * i1] =
            dNdxis->data[(i11 + dNdxis->size[0] * i1) +
                         dNdxis->size[0] * dNdxis->size[1] * q];
      }
    }
    b_st.site = &h_emlrtRSI;
    mtimes(&b_st, r, b_dNdxis, J0);
    st.site = &b_emlrtRSI;
    if (J0->size[1] != i6) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:dimagree",
                                    "MATLAB:dimagree", 0);
    }
    i1 = b_dNdxis->size[0] * b_dNdxis->size[1];
    b_dNdxis->size[0] = h_loop_ub;
    b_dNdxis->size[1] = i7;
    emxEnsureCapacity_real_T(&st, b_dNdxis, i1, &q_emlrtRTEI);
    for (i1 = 0; i1 < i_loop_ub; i1++) {
      for (i11 = 0; i11 < h_loop_ub; i11++) {
        b_dNdxis->data[i11 + b_dNdxis->size[0] * i1] =
            dNdxis->data[(i11 + dNdxis->size[0] * i1) +
                         dNdxis->size[0] * dNdxis->size[1] * q];
      }
    }
    b_st.site = &m_emlrtRSI;
    mrdiv(&b_st, b_dNdxis, J0, dNdx);
    st.site = &c_emlrtRSI;
    b = det(&st, J0);
    /*  deformation gradient    */
    st.site = &d_emlrtRSI;
    /* ---------------------------------------------------------- polar
     * decompose */
    if (!(nn >= 0.0)) {
      emlrtNonNegativeCheckR2012b(nn, &b_emlrtDCI, &st);
    }
    if (nn != (int32_T)nn) {
      emlrtIntegerCheckR2012b(nn, &emlrtDCI, &st);
    }
    i1 = J0->size[0] * J0->size[1];
    J0->size[0] = (int32_T)nn;
    emxEnsureCapacity_real_T(&st, J0, i1, &r_emlrtRTEI);
    if (!(Dim >= 0.0)) {
      emlrtNonNegativeCheckR2012b(Dim, &d_emlrtDCI, &st);
    }
    d = (int32_T)muDoubleScalarFloor(Dim);
    if (Dim != d) {
      emlrtIntegerCheckR2012b(Dim, &c_emlrtDCI, &st);
    }
    i1 = J0->size[0] * J0->size[1];
    J0->size[1] = (int32_T)Dim;
    emxEnsureCapacity_real_T(&st, J0, i1, &r_emlrtRTEI);
    if (nn != (int32_T)nn) {
      emlrtIntegerCheckR2012b(nn, &i_emlrtDCI, &st);
    }
    if (Dim != d) {
      emlrtIntegerCheckR2012b(Dim, &i_emlrtDCI, &st);
    }
    loop_ub = (int32_T)nn * (int32_T)Dim;
    for (i1 = 0; i1 < loop_ub; i1++) {
      J0->data[i1] = 0.0;
    }
    b_st.site = &jc_emlrtRSI;
    if (muDoubleScalarIsNaN(b_tmp)) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, y, i1, &s_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if ((Dim == 0.0) || (b_tmp < 1.0)) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if (muDoubleScalarIsInf(b_tmp) &&
               (muDoubleScalarIsInf(Dim) || (1.0 == b_tmp))) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, y, i1, &u_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if (muDoubleScalarIsInf(Dim)) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, y, i1, &t_emlrtRTEI);
      y->data[0] = 1.0;
    } else if (Dim == Dim) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor((b_tmp - 1.0) / Dim);
      y->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&b_st, y, i1, &w_emlrtRTEI);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        y->data[i1] = Dim * (real_T)i1 + 1.0;
      }
    } else {
      c_st.site = &rc_emlrtRSI;
      eml_float_colon(&c_st, Dim, b_tmp, y);
    }
    b_st.site = &jc_emlrtRSI;
    b_round(&b_st, y);
    i1 = id1->size[0];
    id1->size[0] = y->size[1];
    emxEnsureCapacity_real_T(&st, id1, i1, &v_emlrtRTEI);
    loop_ub = y->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      id1->data[i1] = y->data[i1];
    }
    b_st.site = &kc_emlrtRSI;
    if (muDoubleScalarIsNaN(b_tmp)) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, y, i1, &s_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if ((Dim == 0.0) || (b_tmp < 2.0)) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if (muDoubleScalarIsInf(b_tmp) &&
               (muDoubleScalarIsInf(Dim) || (2.0 == b_tmp))) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, y, i1, &u_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if (muDoubleScalarIsInf(Dim)) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, y, i1, &t_emlrtRTEI);
      y->data[0] = 2.0;
    } else if (Dim == Dim) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor((b_tmp - 2.0) / Dim);
      y->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&b_st, y, i1, &w_emlrtRTEI);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        y->data[i1] = Dim * (real_T)i1 + 2.0;
      }
    } else {
      c_st.site = &rc_emlrtRSI;
      b_eml_float_colon(&c_st, Dim, b_tmp, y);
    }
    b_st.site = &kc_emlrtRSI;
    b_round(&b_st, y);
    i1 = id2->size[0];
    id2->size[0] = y->size[1];
    emxEnsureCapacity_real_T(&st, id2, i1, &x_emlrtRTEI);
    loop_ub = y->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      id2->data[i1] = y->data[i1];
    }
    e_eDof[0] = eDof->size[0] * eDof->size[1];
    e_eDof[1] = i8;
    b_st.site = &lc_emlrtRSI;
    indexShapeCheck(&b_st, e_eDof, id1->size[0]);
    if (1 > (int32_T)Dim) {
      emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)Dim, &d_emlrtBCI, &st);
    }
    loop_ub = id1->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (id1->data[i1] != (int32_T)muDoubleScalarFloor(id1->data[i1])) {
        emlrtIntegerCheckR2012b(id1->data[i1], &j_emlrtDCI, &st);
      }
      i11 = (int32_T)id1->data[i1];
      if ((i11 < 1) || (i11 > c_eDof)) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, c_eDof, &r_emlrtBCI, &st);
      }
    }
    n = (int32_T)nn;
    emlrtSubAssignSizeCheckR2012b(&n, 1, &id1->size[0], 1, &b_emlrtECI, &st);
    loop_ub = id1->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      J0->data[i1] = Delta->data[(int32_T)id1->data[i1] - 1];
    }
    e_eDof[0] = eDof->size[0] * eDof->size[1];
    e_eDof[1] = i9;
    b_st.site = &mc_emlrtRSI;
    indexShapeCheck(&b_st, e_eDof, id2->size[0]);
    if (2 > J0->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, J0->size[1], &e_emlrtBCI, &st);
    }
    loop_ub = id2->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      if (id2->data[i1] != (int32_T)muDoubleScalarFloor(id2->data[i1])) {
        emlrtIntegerCheckR2012b(id2->data[i1], &k_emlrtDCI, &st);
      }
      i11 = (int32_T)id2->data[i1];
      if ((i11 < 1) || (i11 > d_eDof)) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, d_eDof, &s_emlrtBCI, &st);
      }
    }
    emlrtSubAssignSizeCheckR2012b(&J0->size[0], 1, &id2->size[0], 1,
                                  &c_emlrtECI, &st);
    loop_ub = id2->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      J0->data[i1 + J0->size[0]] = Delta->data[(int32_T)id2->data[i1] - 1];
    }
    if (Dim == 2.0) {
      b_st.site = &nc_emlrtRSI;
      c_st.site = &i_emlrtRSI;
      dynamic_size_checks(&c_st, dNdx, J0, dNdx->size[0], J0->size[0]);
      c_st.site = &h_emlrtRSI;
      mtimes(&c_st, dNdx, J0, b_dNdxis);
      i1 = J0->size[0] * J0->size[1];
      J0->size[0] = b_dNdxis->size[1];
      J0->size[1] = b_dNdxis->size[0];
      emxEnsureCapacity_real_T(&st, J0, i1, &y_emlrtRTEI);
      loop_ub = b_dNdxis->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        n = b_dNdxis->size[1];
        for (i11 = 0; i11 < n; i11++) {
          J0->data[i11 + J0->size[0] * i1] =
              b_dNdxis->data[i1 + b_dNdxis->size[0] * i11];
        }
      }
      if (1 > J0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, J0->size[0], &f_emlrtBCI, &st);
      }
      if (1 > J0->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, J0->size[1], &g_emlrtBCI, &st);
      }
      if (1 > J0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, J0->size[0], &h_emlrtBCI, &st);
      }
      if (2 > J0->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, J0->size[1], &i_emlrtBCI, &st);
      }
      if (2 > J0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, J0->size[0], &j_emlrtBCI, &st);
      }
      if (1 > J0->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, J0->size[1], &k_emlrtBCI, &st);
      }
      if (2 > J0->size[0]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, J0->size[0], &l_emlrtBCI, &st);
      }
      if (2 > J0->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, J0->size[1], &m_emlrtBCI, &st);
      }
      F[0] = J0->data[0] + 1.0;
      F[3] = J0->data[J0->size[0]];
      F[6] = 0.0;
      F[1] = J0->data[1];
      F[4] = J0->data[J0->size[0] + 1] + 1.0;
      F[7] = 0.0;
      F[2] = 0.0;
      F[5] = 0.0;
      F[8] = 1.0;
    } else {
      b_st.site = &oc_emlrtRSI;
      I3 = Dim * nn;
      if (muDoubleScalarIsNaN(I3)) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, y, i1, &s_emlrtRTEI);
        y->data[0] = rtNaN;
      } else if ((Dim == 0.0) || (I3 < 3.0)) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (muDoubleScalarIsInf(I3) &&
                 (muDoubleScalarIsInf(Dim) || (3.0 == I3))) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, y, i1, &u_emlrtRTEI);
        y->data[0] = rtNaN;
      } else if (muDoubleScalarIsInf(Dim)) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, y, i1, &t_emlrtRTEI);
        y->data[0] = 3.0;
      } else if (Dim == Dim) {
        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor((I3 - 3.0) / Dim);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(&b_st, y, i1, &w_emlrtRTEI);
        for (i1 = 0; i1 <= loop_ub; i1++) {
          y->data[i1] = Dim * (real_T)i1 + 3.0;
        }
      } else {
        c_st.site = &rc_emlrtRSI;
        c_eml_float_colon(&c_st, Dim, I3, y);
      }
      b_st.site = &oc_emlrtRSI;
      b_round(&b_st, y);
      i1 = id1->size[0];
      id1->size[0] = y->size[1];
      emxEnsureCapacity_real_T(&st, id1, i1, &ab_emlrtRTEI);
      loop_ub = y->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        id1->data[i1] = y->data[i1];
      }
      e_eDof[0] = eDof->size[0] * eDof->size[1];
      e_eDof[1] = Utmp->size[1];
      b_st.site = &pc_emlrtRSI;
      indexShapeCheck(&b_st, e_eDof, id1->size[0]);
      if (3 > J0->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, J0->size[1], &n_emlrtBCI, &st);
      }
      n = eDof->size[0] * eDof->size[1] * Utmp->size[1];
      loop_ub = id1->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (id1->data[i1] != (int32_T)muDoubleScalarFloor(id1->data[i1])) {
          emlrtIntegerCheckR2012b(id1->data[i1], &l_emlrtDCI, &st);
        }
        i11 = (int32_T)id1->data[i1];
        if ((i11 < 1) || (i11 > n)) {
          emlrtDynamicBoundsCheckR2012b(i11, 1, n, &t_emlrtBCI, &st);
        }
      }
      emlrtSubAssignSizeCheckR2012b(&J0->size[0], 1, &id1->size[0], 1,
                                    &d_emlrtECI, &st);
      loop_ub = id1->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        J0->data[i1 + J0->size[0] * 2] =
            Delta->data[(int32_T)id1->data[i1] - 1];
      }
      b_st.site = &qc_emlrtRSI;
      c_st.site = &i_emlrtRSI;
      dynamic_size_checks(&c_st, dNdx, J0, dNdx->size[0], J0->size[0]);
      c_st.site = &h_emlrtRSI;
      mtimes(&c_st, dNdx, J0, b_dNdxis);
      i1 = r->size[0] * r->size[1];
      r->size[0] = b_dNdxis->size[1];
      r->size[1] = b_dNdxis->size[0];
      emxEnsureCapacity_real_T(&st, r, i1, &bb_emlrtRTEI);
      loop_ub = b_dNdxis->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        n = b_dNdxis->size[1];
        for (i11 = 0; i11 < n; i11++) {
          r->data[i11 + r->size[0] * i1] =
              b_dNdxis->data[i1 + b_dNdxis->size[0] * i11];
        }
      }
      e_eDof[0] = 3;
      e_eDof[1] = 3;
      iv[0] = (*(int32_T(*)[2])r->size)[0];
      iv[1] = (*(int32_T(*)[2])r->size)[1];
      emlrtSizeEqCheckNDR2012b(&iv[0], &e_eDof[0], &e_emlrtECI, &st);
      memset(&F[0], 0, 9U * sizeof(real_T));
      F[0] = 1.0;
      F[4] = 1.0;
      F[8] = 1.0;
      for (i1 = 0; i1 < 9; i1++) {
        F[i1] += r->data[i1];
      }
    }
    /*  get internal stress matrix */
    st.site = &e_emlrtRSI;
    /* Se = 2nd PK stress [S11, S22, S33, S12, S23, S13]; */
    for (i1 = 0; i1 < 3; i1++) {
      for (i11 = 0; i11 < 3; i11++) {
        C[i1 + 3 * i11] =
            (F[3 * i1] * F[3 * i11] + F[3 * i1 + 1] * F[3 * i11 + 1]) +
            F[3 * i1 + 2] * F[3 * i11 + 2];
      }
    }
    b_st.site = &xc_emlrtRSI;
    I3 = b_det(&b_st, C);
    b_st.site = &yc_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    d_st.site = &jd_emlrtRSI;
    if (I3 < 0.0) {
      emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                    "Coder:toolbox:power_domainError",
                                    "Coder:toolbox:power_domainError", 0);
    }
    b_st.site = &ad_emlrtRSI;
    if (I3 < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &k_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    /*  */
    b_st.site = &bd_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    b_st.site = &bd_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    b_st.site = &bd_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    I3E[0] = 2.0 * (C[4] * C[8] - C[7] * C[7]);
    I3E[1] = 2.0 * (C[0] * C[8] - C[6] * C[6]);
    I3E[2] = 2.0 * (C[0] * C[4] - C[3] * C[3]);
    I3E[3] = 2.0 * (C[6] * C[7] - C[3] * C[8]);
    I3E[4] = 2.0 * (C[3] * C[6] - C[0] * C[7]);
    I3E[5] = 2.0 * (C[3] * C[7] - C[4] * C[6]);
    /*  */
    b_st.site = &cd_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    b_a = muDoubleScalarPower(I3, -0.33333333333333331);
    b_st.site = &cd_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    c_a = 0.33333333333333331 * ((C[0] + C[4]) + C[8]) *
          muDoubleScalarPower(I3, -1.3333333333333333);
    b_st.site = &cd_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    d_a = 0.5 * muDoubleScalarPower(I3, -0.5);
    /*  */
    /*  */
    b_st.site = &dd_emlrtRSI;
    c_st.site = &id_emlrtRSI;
    I3 = Lambda / 2.0 * (muDoubleScalarSqrt(I3) - 1.0);
    for (i1 = 0; i1 < 6; i1++) {
      d = I3E[i1];
      d = a * (b_a * (real_T)b_b[i1] - c_a * d) + I3 * (d_a * d);
      I3E[i1] = d;
    }
    C[0] = I3E[0];
    C[3] = I3E[3];
    C[6] = I3E[5];
    C[4] = I3E[1];
    C[7] = I3E[4];
    C[8] = I3E[2];
    /*  voigt-notation vectorize */
    /* --------------------------------------------------- Kelvin-voight
     * notation */
    I3E[0] = C[0];
    I3E[1] = C[4];
    I3E[2] = C[8];
    I3E[3] = C[3];
    I3E[4] = C[7];
    I3E[5] = C[6];
    /*  reduced isotropic matrices */
    /* ------------------------------------------------ nonlinear strain
     * operator */
    if (Dim == 2.0) {
      Se_size = 3;
      Se_data[0] = C[0];
      Se_data[1] = C[4];
      Se_data[2] = C[3];
    } else {
      Se_size = 6;
      for (i1 = 0; i1 < 6; i1++) {
        Se_data[i1] = I3E[i1];
      }
    }
    /*  nonlinear strain-displacement operator */
    i1 = id1->size[0];
    id1->size[0] = i10;
    emxEnsureCapacity_real_T(sp, id1, i1, &cb_emlrtRTEI);
    for (i1 = 0; i1 < j_loop_ub; i1++) {
      id1->data[i1] = Ns->data[i1 + Ns->size[0] * q];
    }
    st.site = &f_emlrtRSI;
    NonlinearStrainOperatorFast(&st, id1, dNdx, F, J0);
    /*  internal force vector */
    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = b_dNdxis->size[0] * b_dNdxis->size[1];
    b_dNdxis->size[0] = J0->size[1];
    b_dNdxis->size[1] = J0->size[0];
    emxEnsureCapacity_real_T(sp, b_dNdxis, i1, &db_emlrtRTEI);
    loop_ub = J0->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      n = J0->size[1];
      for (i11 = 0; i11 < n; i11++) {
        b_dNdxis->data[i11 + b_dNdxis->size[0] * i1] =
            W->data[q] * J0->data[i1 + J0->size[0] * i11];
      }
    }
    st.site = &g_emlrtRSI;
    b_st.site = &i_emlrtRSI;
    b_dynamic_size_checks(&b_st, b_dNdxis, b_dNdxis->size[1], Se_size);
    b_st.site = &h_emlrtRSI;
    b_mtimes(&b_st, b_dNdxis, Se_data, Se_size, id1);
    loop_ub = id1->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      id1->data[i1] *= b;
    }
    loop_ub = Fe->size[0];
    if (Fe->size[0] != id1->size[0]) {
      emlrtSizeEqCheck1DR2012b(Fe->size[0], id1->size[0], &emlrtECI,
                               (emlrtCTX)sp);
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      Fe->data[i1] += id1->data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(&b_dNdxis);
  emxFree_int32_T(&b_eDof);
  emxFree_real_T(&y);
  emxFree_real_T(&id2);
  emxFree_real_T(&id1);
  emxFree_real_T(&r);
  emxFree_real_T(&dNdx);
  emxFree_real_T(&J0);
  emxFree_real_T(&Delta);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (LocalsNHFastElastic.c) */
