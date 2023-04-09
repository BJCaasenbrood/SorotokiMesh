/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LocalsNHFast.c
 *
 * Code generation for function 'LocalsNHFast'
 *
 */

/* Include files */
#include "LocalsNHFast.h"
#include "LocalsNHFast_data.h"
#include "LocalsNHFast_emxutil.h"
#include "LocalsNHFast_types.h"
#include "cross.h"
#include "det.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "svd.h"
#include "unsafeSxfun.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 56,    /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 57,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 60,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 61,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 62,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 65,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 68,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 77,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 86,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 93,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 96,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 99,  /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 102, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 108, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 115, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 121, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 122, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 129, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 137, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 140, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 144, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 145, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 146, /* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 41,  /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 113, /* lineNo */
  "cat_impl",                          /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 94, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 20, /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 210,/* lineNo */
  "DeformationGradient",               /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 211,/* lineNo */
  "DeformationGradient",               /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 212,/* lineNo */
  "DeformationGradient",               /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 213,/* lineNo */
  "DeformationGradient",               /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 216,/* lineNo */
  "DeformationGradient",               /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 219,/* lineNo */
  "DeformationGradient",               /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 220,/* lineNo */
  "DeformationGradient",               /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 221,/* lineNo */
  "DeformationGradient",               /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 227,/* lineNo */
  "PolarDecomposition",                /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 71, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 167,/* lineNo */
  "PiollaStress",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 168,/* lineNo */
  "PiollaStress",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 169,/* lineNo */
  "PiollaStress",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 173,/* lineNo */
  "PiollaStress",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 176,/* lineNo */
  "PiollaStress",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 182,/* lineNo */
  "PiollaStress",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 197,/* lineNo */
  "PiollaStress",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 198,/* lineNo */
  "PiollaStress",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 244,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 245,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 339,/* lineNo */
  "VonMises",                          /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 340,/* lineNo */
  "VonMises",                          /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 341,/* lineNo */
  "VonMises",                          /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 16, /* lineNo */
  "sqrt",                              /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 49, /* lineNo */
  "mean",                              /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/datafun/mean.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 74, /* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 107,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/datafun/private/blockedSummation.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 22, /* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/datafun/private/sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 42, /* lineNo */
  "sumMatrixColumns",                  /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/datafun/private/sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 57, /* lineNo */
  "sumMatrixColumns",                  /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/datafun/private/sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  22,                                  /* colNo */
  "Ns",                                /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  20,                                  /* colNo */
  "Ns",                                /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  24,                                  /* colNo */
  "dNdxis",                            /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  27,                                  /* colNo */
  "dNdxi",                             /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  38,                                  /* colNo */
  "dNdxi",                             /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  21,                                  /* colNo */
  "W",                                 /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 1,     /* nDims */
  93,                                  /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 1,   /* nDims */
  96,                                  /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  21,                                  /* colNo */
  "W",                                 /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { 1,   /* nDims */
  99,                                  /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  99,                                  /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  23,                                  /* colNo */
  "W",                                 /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { 1,   /* nDims */
  102,                                 /* lineNo */
  27,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  102,                                 /* lineNo */
  27,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { 1,   /* nDims */
  102,                                 /* lineNo */
  11,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  102,                                 /* lineNo */
  11,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 1,   /* nDims */
  108,                                 /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  108,                                 /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 1,   /* nDims */
  111,                                 /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { 2,   /* nDims */
  111,                                 /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  21,                                  /* colNo */
  "W",                                 /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { 1,   /* nDims */
  115,                                 /* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  20,                                  /* colNo */
  "W",                                 /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  121,                                 /* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  123,                                 /* lineNo */
  24,                                  /* colNo */
  "Vgetmp",                            /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  10,                                  /* colNo */
  "NNe",                               /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  27,                                  /* colNo */
  "NNe",                               /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  133,                                 /* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  9,                                   /* colNo */
  "SGP",                               /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  9,                                   /* colNo */
  "EGP",                               /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = { 16,  /* lineNo */
  19,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/mrdivide_helper.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 288,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 25,    /* lineNo */
  13,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 25,  /* lineNo */
  19,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 26,  /* lineNo */
  13,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 26,  /* lineNo */
  19,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 27,  /* lineNo */
  13,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 27,  /* lineNo */
  19,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 28,  /* lineNo */
  13,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 28,  /* lineNo */
  19,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 22,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 22,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 23,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 24,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 25,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 25,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 26,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 27,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 28,  /* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 45,  /* lineNo */
  15,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  15,                                  /* colNo */
  "Utmp",                              /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  16,                                  /* colNo */
  "dUtmp",                             /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 60,  /* lineNo */
  19,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  19,                                  /* colNo */
  "Node0",                             /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  21,                                  /* colNo */
  "W",                                 /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  21,                                  /* colNo */
  "W",                                 /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  22,                                  /* colNo */
  "W",                                 /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  35,                                  /* colNo */
  "Node0",                             /* aName */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  212,                                 /* lineNo */
  6,                                   /* colNo */
  "UU",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  212,                                 /* lineNo */
  1,                                   /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  6,                                   /* colNo */
  "UU",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  213,                                 /* lineNo */
  1,                                   /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  13,                                  /* colNo */
  "F0",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  15,                                  /* colNo */
  "F0",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  23,                                  /* colNo */
  "F0",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  25,                                  /* colNo */
  "F0",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  34,                                  /* colNo */
  "F0",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  36,                                  /* colNo */
  "F0",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  42,                                  /* colNo */
  "F0",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  217,                                 /* lineNo */
  44,                                  /* colNo */
  "F0",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  220,                                 /* lineNo */
  10,                                  /* colNo */
  "UU",                                /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  220,                                 /* lineNo */
  5,                                   /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { 1,   /* nDims */
  221,                                 /* lineNo */
  9,                                   /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { 2,   /* nDims */
  221,                                 /* lineNo */
  9,                                   /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtDCInfo t_emlrtDCI = { 209, /* lineNo */
  12,                                  /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 209, /* lineNo */
  12,                                  /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 209, /* lineNo */
  15,                                  /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 209, /* lineNo */
  15,                                  /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 209, /* lineNo */
  1,                                   /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 212, /* lineNo */
  13,                                  /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  212,                                 /* lineNo */
  13,                                  /* colNo */
  "U",                                 /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 213,/* lineNo */
  13,                                  /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  213,                                 /* lineNo */
  13,                                  /* colNo */
  "U",                                 /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 220,/* lineNo */
  17,                                  /* colNo */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  220,                                 /* lineNo */
  17,                                  /* colNo */
  "U",                                 /* aName */
  "DeformationGradient",               /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo k_emlrtRTEI = { 82,/* lineNo */
  5,                                   /* colNo */
  "fltpower",                          /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/power.m"/* pName */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  16,                                  /* colNo */
  "dNdx",                              /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  250,                                 /* lineNo */
  16,                                  /* colNo */
  "dNdx",                              /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { 2,   /* nDims */
  267,                                 /* lineNo */
  17,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo v_emlrtECI = { 2,   /* nDims */
  268,                                 /* lineNo */
  17,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { 2,   /* nDims */
  285,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { 2,   /* nDims */
  286,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { 2,   /* nDims */
  287,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { 2,  /* nDims */
  288,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 2,  /* nDims */
  289,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  290,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { 2,  /* nDims */
  291,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { 2,  /* nDims */
  292,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 2,  /* nDims */
  293,                                 /* lineNo */
  24,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  4,                                   /* colNo */
  "NN",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gb_emlrtECI = { -1, /* nDims */
  247,                                 /* lineNo */
  1,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  4,                                   /* colNo */
  "NN",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  248,                                 /* lineNo */
  1,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  8,                                   /* colNo */
  "NN",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  10,                                  /* colNo */
  "NN",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  15,                                  /* colNo */
  "NN",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  253,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  263,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo kb_emlrtECI = { -1, /* nDims */
  264,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  265,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo lb_emlrtECI = { -1, /* nDims */
  265,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mb_emlrtECI = { -1, /* nDims */
  266,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  267,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo nb_emlrtECI = { -1, /* nDims */
  267,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  268,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ob_emlrtECI = { -1, /* nDims */
  268,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  276,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  277,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  277,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  278,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { -1, /* nDims */
  278,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  279,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  279,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  279,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo sb_emlrtECI = { -1, /* nDims */
  279,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  280,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  280,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  281,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  281,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  281,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ub_emlrtECI = { -1, /* nDims */
  281,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  282,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo vb_emlrtECI = { -1, /* nDims */
  282,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  283,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  283,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  283,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo wb_emlrtECI = { -1, /* nDims */
  283,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  284,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  284,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  284,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo xb_emlrtECI = { -1, /* nDims */
  284,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo yb_emlrtECI = { -1, /* nDims */
  285,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  286,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  286,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  286,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ac_emlrtECI = { -1, /* nDims */
  286,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bc_emlrtECI = { -1, /* nDims */
  287,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo cc_emlrtECI = { -1, /* nDims */
  288,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  289,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo dc_emlrtECI = { -1, /* nDims */
  289,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ec_emlrtECI = { -1, /* nDims */
  290,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo fc_emlrtECI = { -1, /* nDims */
  291,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  292,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  292,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  292,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo gc_emlrtECI = { -1, /* nDims */
  292,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  293,                                 /* lineNo */
  8,                                   /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  293,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  293,                                 /* lineNo */
  15,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hc_emlrtECI = { -1, /* nDims */
  293,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo ic_emlrtECI = { -1, /* nDims */
  270,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  271,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jc_emlrtECI = { -1, /* nDims */
  271,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo kc_emlrtECI = { -1, /* nDims */
  272,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  273,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo lc_emlrtECI = { -1, /* nDims */
  273,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  295,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  295,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  295,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mc_emlrtECI = { -1, /* nDims */
  295,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  296,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo nc_emlrtECI = { -1, /* nDims */
  296,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo oc_emlrtECI = { -1, /* nDims */
  297,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  298,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pc_emlrtECI = { -1, /* nDims */
  298,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  299,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  299,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  299,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qc_emlrtECI = { -1, /* nDims */
  299,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  300,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  300,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  300,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo rc_emlrtECI = { -1, /* nDims */
  300,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  301,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  301,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  301,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo sc_emlrtECI = { -1, /* nDims */
  301,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  302,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo tc_emlrtECI = { -1, /* nDims */
  302,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  303,                                 /* lineNo */
  8,                                   /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  303,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  303,                                 /* lineNo */
  15,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo uc_emlrtECI = { -1, /* nDims */
  303,                                 /* lineNo */
  5,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtDCInfo cb_emlrtDCI = { 242,/* lineNo */
  15,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 259,/* lineNo */
  12,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 259,/* lineNo */
  12,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 259,/* lineNo */
  21,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 260,/* lineNo */
  12,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 260,/* lineNo */
  12,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 260,/* lineNo */
  28,                                  /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 242,/* lineNo */
  1,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 247,/* lineNo */
  6,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  247,                                 /* lineNo */
  6,                                   /* colNo */
  "NN",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 248,/* lineNo */
  6,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  6,                                   /* colNo */
  "NN",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 259,/* lineNo */
  1,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 260,/* lineNo */
  1,                                   /* colNo */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  263,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  265,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  266,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  267,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  268,                                 /* lineNo */
  10,                                  /* colNo */
  "Bn",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  270,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  271,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  273,                                 /* lineNo */
  10,                                  /* colNo */
  "Bg",                                /* aName */
  "NonlinearStrainOperatorFast",       /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo vc_emlrtECI = { 1,  /* nDims */
  339,                                 /* lineNo */
  17,                                  /* colNo */
  "VonMises",                          /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo wc_emlrtECI = { 1,  /* nDims */
  340,                                 /* lineNo */
  10,                                  /* colNo */
  "VonMises",                          /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo xc_emlrtECI = { 1,  /* nDims */
  339,                                 /* lineNo */
  48,                                  /* colNo */
  "VonMises",                          /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo yc_emlrtECI = { 1,  /* nDims */
  339,                                 /* lineNo */
  33,                                  /* colNo */
  "VonMises",                          /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtECInfo ad_emlrtECI = { 1,  /* nDims */
  339,                                 /* lineNo */
  18,                                  /* colNo */
  "VonMises",                          /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 24,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 25,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 26,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 29,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 30,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 38,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 45,/* lineNo */
  15,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 45,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 46,/* lineNo */
  16,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 46,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 74,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 53,/* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 60,/* lineNo */
  19,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 56,/* lineNo */
  19,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 56,/* lineNo */
  30,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 146,/* lineNo */
  21,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 60,/* lineNo */
  13,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 146,/* lineNo */
  29,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 146,/* lineNo */
  37,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 147,/* lineNo */
  21,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 147,/* lineNo */
  29,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 147,/* lineNo */
  37,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 53,/* lineNo */
  13,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 57,/* lineNo */
  9,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 74,/* lineNo */
  31,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 111,/* lineNo */
  15,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 121,/* lineNo */
  35,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 121,/* lineNo */
  29,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 60,/* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 61,/* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 2,/* lineNo */
  9,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 121,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 93,/* lineNo */
  15,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 209,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 84,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/colon.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 96,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/colon.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 98,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/colon.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 113,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/colon.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 219,/* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 210,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 211,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 216,/* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 242,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 244,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 245,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 247,/* lineNo */
  6,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 248,/* lineNo */
  6,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 256,/* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 259,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 254,/* lineNo */
  5,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 260,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 263,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 263,/* lineNo */
  17,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 276,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 264,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 264,/* lineNo */
  17,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 277,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 265,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 265,/* lineNo */
  17,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 278,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 266,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 266,/* lineNo */
  17,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 279,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 267,/* lineNo */
  17,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 267,/* lineNo */
  32,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 280,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 267,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 268,/* lineNo */
  17,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 281,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 268,/* lineNo */
  32,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 268,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 282,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 270,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 271,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 283,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 272,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 284,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 273,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 285,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 285,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 286,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 286,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 287,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 287,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 288,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 288,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 289,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 289,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 290,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 290,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 291,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 291,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 292,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 292,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 293,/* lineNo */
  24,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 293,/* lineNo */
  39,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 247,/* lineNo */
  1,                                   /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 339,/* lineNo */
  17,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 339,/* lineNo */
  32,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 340,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 340,/* lineNo */
  19,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 340,/* lineNo */
  28,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 115,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 111,/* lineNo */
  10,                                  /* colNo */
  "LocalsNHFast",                      /* fName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pName */
};

static emlrtRSInfo ul_emlrtRSI = { 111,/* lineNo */
  "LocalsNHFast",                      /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 76, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 268,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 267,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 293,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo am_emlrtRSI = { 292,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo bm_emlrtRSI = { 291,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo cm_emlrtRSI = { 290,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo dm_emlrtRSI = { 289,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo em_emlrtRSI = { 288,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo fm_emlrtRSI = { 287,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo gm_emlrtRSI = { 286,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo hm_emlrtRSI = { 285,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo im_emlrtRSI = { 31, /* lineNo */
  "unsafeSxfun",                       /* fcnName */
  "/usr/local/MATLAB/R2023a/toolbox/eml/eml/+coder/+internal/unsafeSxfun.m"/* pathName */
};

static emlrtRSInfo jm_emlrtRSI = { 303,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo km_emlrtRSI = { 302,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo lm_emlrtRSI = { 301,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo mm_emlrtRSI = { 300,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo nm_emlrtRSI = { 299,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo om_emlrtRSI = { 298,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo pm_emlrtRSI = { 297,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo qm_emlrtRSI = { 296,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo rm_emlrtRSI = { 295,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo sm_emlrtRSI = { 284,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo tm_emlrtRSI = { 283,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo um_emlrtRSI = { 282,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo vm_emlrtRSI = { 281,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo wm_emlrtRSI = { 280,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo xm_emlrtRSI = { 279,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo ym_emlrtRSI = { 278,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo an_emlrtRSI = { 277,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo bn_emlrtRSI = { 276,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

static emlrtRSInfo cn_emlrtRSI = { 253,/* lineNo */
  "NonlinearStrainOperatorFast",       /* fcnName */
  "/home/brandon/Documents/projects/SorotokiMesh/mex/localsNH/LocalsNHFast.m"/* pathName */
};

/* Function Declarations */
static void DeformationGradient(const emlrtStack *sp, const emxArray_real_T *U,
  const emxArray_real_T *dNdx, real_T Dim, real_T F[9]);
static int32_T IsotropicReduction(const real_T D0[36], const real_T S0[6],
  real_T Dim, real_T S_data[], real_T D_data[], int32_T D_size[2], real_T
  G_data[], int32_T G_size[2]);
static void NonlinearStrainOperatorFast(const emlrtStack *sp, const
  emxArray_real_T *N, const emxArray_real_T *dNdx, const real_T F[9],
  emxArray_real_T *Bn, emxArray_real_T *Bg, emxArray_real_T *NN);
static real_T PiollaStress(const emlrtStack *sp, real_T Mu, real_T Lambda, const
  real_T F[9], real_T S[9], real_T D[36]);
static void PolarDecomposition(const emlrtStack *sp, const real_T F[9], real_T
  R[9], real_T S[9], real_T V[9]);
static real_T VonMises(const emlrtStack *sp, const emxArray_real_T *S11, const
  emxArray_real_T *S22, const emxArray_real_T *S33, const emxArray_real_T *S12,
  const emxArray_real_T *S23, const emxArray_real_T *S13, emxArray_real_T *Svm);
static void b_plus(const emlrtStack *sp, emxArray_real_T *in1, const
                   emxArray_real_T *in2);
static void c_binary_expand_op(real_T in1[9], const emxArray_real_T *in2, const
  int8_T in3[9]);
static void c_plus(const emlrtStack *sp, emxArray_real_T *in1, const
                   emxArray_real_T *in2);
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void plus(const emlrtStack *sp, emxArray_real_T *in1, const
                 emxArray_real_T *in2);

/* Function Definitions */
static void DeformationGradient(const emlrtStack *sp, const emxArray_real_T *U,
  const emxArray_real_T *dNdx, real_T Dim, real_T F[9])
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *F0;
  emxArray_real_T *UU;
  emxArray_real_T *id1;
  emxArray_real_T *id2;
  emxArray_real_T *id3;
  const real_T *U_data;
  real_T b_tmp;
  real_T nn;
  real_T *UU_data;
  real_T *id1_data;
  real_T *id2_data;
  int32_T U_tmp;
  int32_T i;
  int32_T i1;
  int32_T n;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  U_data = U->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);

  /* ---------------------------------------------------------- polar decompose */
  if ((U->size[0] == 0) || (U->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(U->size[0], U->size[1]);
  }

  nn = muDoubleScalarRound((real_T)n / Dim);
  emxInit_real_T(sp, &UU, 2, &dd_emlrtRTEI);
  if (!(nn >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nn, &u_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (nn != (int32_T)nn) {
    emlrtIntegerCheckR2012b(nn, &t_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = UU->size[0] * UU->size[1];
  UU->size[0] = (int32_T)nn;
  emxEnsureCapacity_real_T(sp, UU, i, &dd_emlrtRTEI);
  if (!(Dim >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Dim, &w_emlrtDCI, (emlrtConstCTX)sp);
  }

  b_tmp = (int32_T)muDoubleScalarFloor(Dim);
  if (Dim != b_tmp) {
    emlrtIntegerCheckR2012b(Dim, &v_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = UU->size[0] * UU->size[1];
  UU->size[1] = (int32_T)Dim;
  emxEnsureCapacity_real_T(sp, UU, i, &dd_emlrtRTEI);
  UU_data = UU->data;
  if (nn != (int32_T)nn) {
    emlrtIntegerCheckR2012b(nn, &x_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (Dim != b_tmp) {
    emlrtIntegerCheckR2012b(Dim, &x_emlrtDCI, (emlrtConstCTX)sp);
  }

  n = (int32_T)nn * (int32_T)Dim;
  for (i = 0; i < n; i++) {
    UU_data[i] = 0.0;
  }

  emxInit_real_T(sp, &id1, 2, &jd_emlrtRTEI);
  st.site = &vd_emlrtRSI;
  b_tmp = Dim * nn;
  b = muDoubleScalarIsNaN(b_tmp);
  if (b) {
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    id1->size[1] = 1;
    emxEnsureCapacity_real_T(&st, id1, i, &ed_emlrtRTEI);
    id1_data = id1->data;
    id1_data[0] = rtNaN;
  } else if ((Dim == 0.0) || (b_tmp < 1.0)) {
    id1->size[0] = 1;
    id1->size[1] = 0;
  } else if (muDoubleScalarIsInf(b_tmp) && muDoubleScalarIsInf(Dim)) {
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    id1->size[1] = 1;
    emxEnsureCapacity_real_T(&st, id1, i, &fd_emlrtRTEI);
    id1_data = id1->data;
    id1_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(Dim)) {
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    id1->size[1] = 1;
    emxEnsureCapacity_real_T(&st, id1, i, &gd_emlrtRTEI);
    id1_data = id1->data;
    id1_data[0] = 1.0;
  } else {
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    n = (int32_T)((b_tmp - 1.0) / Dim);
    id1->size[1] = n + 1;
    emxEnsureCapacity_real_T(&st, id1, i, &hd_emlrtRTEI);
    id1_data = id1->data;
    for (i = 0; i <= n; i++) {
      id1_data[i] = Dim * (real_T)i + 1.0;
    }
  }

  st.site = &vd_emlrtRSI;
  b_round(&st, id1);
  id1_data = id1->data;
  emxInit_real_T(sp, &id2, 2, &kd_emlrtRTEI);
  st.site = &wd_emlrtRSI;
  if (b) {
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = 1;
    emxEnsureCapacity_real_T(&st, id2, i, &ed_emlrtRTEI);
    id2_data = id2->data;
    id2_data[0] = rtNaN;
  } else if ((Dim == 0.0) || (b_tmp < 2.0)) {
    id2->size[0] = 1;
    id2->size[1] = 0;
  } else if (muDoubleScalarIsInf(b_tmp) && muDoubleScalarIsInf(Dim)) {
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = 1;
    emxEnsureCapacity_real_T(&st, id2, i, &fd_emlrtRTEI);
    id2_data = id2->data;
    id2_data[0] = rtNaN;
  } else if (muDoubleScalarIsInf(Dim)) {
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = 1;
    emxEnsureCapacity_real_T(&st, id2, i, &gd_emlrtRTEI);
    id2_data = id2->data;
    id2_data[0] = 2.0;
  } else {
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    n = (int32_T)((b_tmp - 2.0) / Dim);
    id2->size[1] = n + 1;
    emxEnsureCapacity_real_T(&st, id2, i, &hd_emlrtRTEI);
    id2_data = id2->data;
    for (i = 0; i <= n; i++) {
      id2_data[i] = Dim * (real_T)i + 2.0;
    }
  }

  st.site = &wd_emlrtRSI;
  b_round(&st, id2);
  id2_data = id2->data;
  st.site = &xd_emlrtRSI;
  indexShapeCheck(&st, U->size, id1->size[1]);
  if ((int32_T)Dim < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)Dim, &w_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  U_tmp = U->size[0] * U->size[1];
  n = id1->size[1];
  for (i = 0; i < n; i++) {
    if (id1_data[i] != (int32_T)muDoubleScalarFloor(id1_data[i])) {
      emlrtIntegerCheckR2012b(id1_data[i], &y_emlrtDCI, (emlrtConstCTX)sp);
    }

    i1 = (int32_T)id1_data[i];
    if ((i1 < 1) || (i1 > U_tmp)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, U_tmp, &ib_emlrtBCI, (emlrtConstCTX)
        sp);
    }
  }

  n = (int32_T)nn;
  emlrtSubAssignSizeCheckR2012b(&n, 1, &id1->size[1], 1, &p_emlrtECI, (emlrtCTX)
    sp);
  n = id1->size[1];
  for (i = 0; i < n; i++) {
    UU_data[i] = U_data[(int32_T)id1_data[i] - 1];
  }

  st.site = &yd_emlrtRSI;
  indexShapeCheck(&st, U->size, id2->size[1]);
  if (UU->size[1] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, UU->size[1], &x_emlrtBCI, (emlrtConstCTX)
      sp);
  }

  n = id2->size[1];
  for (i = 0; i < n; i++) {
    if (id2_data[i] != (int32_T)muDoubleScalarFloor(id2_data[i])) {
      emlrtIntegerCheckR2012b(id2_data[i], &ab_emlrtDCI, (emlrtConstCTX)sp);
    }

    i1 = (int32_T)id2_data[i];
    if ((i1 < 1) || (i1 > U_tmp)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, U_tmp, &jb_emlrtBCI, (emlrtConstCTX)
        sp);
    }
  }

  emlrtSubAssignSizeCheckR2012b(&UU->size[0], 1, &id2->size[1], 1, &q_emlrtECI,
    (emlrtCTX)sp);
  n = id2->size[1];
  for (i = 0; i < n; i++) {
    UU_data[i + UU->size[0]] = U_data[(int32_T)id2_data[i] - 1];
  }

  emxFree_real_T(sp, &id2);
  emxInit_real_T(sp, &F0, 2, &ld_emlrtRTEI);
  if (Dim == 2.0) {
    st.site = &ae_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    if (UU->size[0] != dNdx->size[0]) {
      if (((UU->size[0] == 1) && (UU->size[1] == 1)) || ((dNdx->size[0] == 1) &&
           (dNdx->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &ab_emlrtRSI;
    mtimes(&b_st, UU, dNdx, F0);
    id2_data = F0->data;

    /* (dNdx'*UU)'; */
    if (F0->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, F0->size[0], &y_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (F0->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, F0->size[1], &ab_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (F0->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, F0->size[0], &bb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (F0->size[1] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, F0->size[1], &cb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (F0->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, F0->size[0], &db_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (F0->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, F0->size[1], &eb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (F0->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, F0->size[0], &fb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (F0->size[1] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, F0->size[1], &gb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    F[0] = id2_data[0] + 1.0;
    F[3] = id2_data[F0->size[0]];
    F[6] = 0.0;
    F[1] = id2_data[1];
    F[4] = id2_data[F0->size[0] + 1] + 1.0;
    F[7] = 0.0;
    F[2] = 0.0;
    F[5] = 0.0;
    F[8] = 1.0;
  } else {
    int8_T b_I[9];
    st.site = &be_emlrtRSI;
    if (b) {
      i = id1->size[0] * id1->size[1];
      id1->size[0] = 1;
      id1->size[1] = 1;
      emxEnsureCapacity_real_T(&st, id1, i, &ed_emlrtRTEI);
      id1_data = id1->data;
      id1_data[0] = rtNaN;
    } else if ((Dim == 0.0) || (b_tmp < 3.0)) {
      id1->size[0] = 1;
      id1->size[1] = 0;
    } else if (muDoubleScalarIsInf(b_tmp) && muDoubleScalarIsInf(Dim)) {
      i = id1->size[0] * id1->size[1];
      id1->size[0] = 1;
      id1->size[1] = 1;
      emxEnsureCapacity_real_T(&st, id1, i, &fd_emlrtRTEI);
      id1_data = id1->data;
      id1_data[0] = rtNaN;
    } else if (muDoubleScalarIsInf(Dim)) {
      i = id1->size[0] * id1->size[1];
      id1->size[0] = 1;
      id1->size[1] = 1;
      emxEnsureCapacity_real_T(&st, id1, i, &gd_emlrtRTEI);
      id1_data = id1->data;
      id1_data[0] = 3.0;
    } else {
      i = id1->size[0] * id1->size[1];
      id1->size[0] = 1;
      n = (int32_T)((b_tmp - 3.0) / Dim);
      id1->size[1] = n + 1;
      emxEnsureCapacity_real_T(&st, id1, i, &hd_emlrtRTEI);
      id1_data = id1->data;
      for (i = 0; i <= n; i++) {
        id1_data[i] = Dim * (real_T)i + 3.0;
      }
    }

    st.site = &be_emlrtRSI;
    b_round(&st, id1);
    id1_data = id1->data;
    emxInit_real_T(sp, &id3, 1, &id_emlrtRTEI);
    i = id3->size[0];
    id3->size[0] = id1->size[1];
    emxEnsureCapacity_real_T(sp, id3, i, &id_emlrtRTEI);
    id2_data = id3->data;
    n = id1->size[1];
    for (i = 0; i < n; i++) {
      id2_data[i] = id1_data[i];
    }

    st.site = &ce_emlrtRSI;
    indexShapeCheck(&st, U->size, id3->size[0]);
    if (UU->size[1] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, UU->size[1], &hb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    n = id3->size[0];
    for (i = 0; i < n; i++) {
      if (id2_data[i] != (int32_T)muDoubleScalarFloor(id2_data[i])) {
        emlrtIntegerCheckR2012b(id2_data[i], &bb_emlrtDCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)id2_data[i];
      if ((i1 < 1) || (i1 > U_tmp)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, U_tmp, &kb_emlrtBCI, (emlrtConstCTX)
          sp);
      }
    }

    emlrtSubAssignSizeCheckR2012b(&UU->size[0], 1, &id3->size[0], 1, &r_emlrtECI,
      (emlrtCTX)sp);
    n = id3->size[0];
    for (i = 0; i < n; i++) {
      UU_data[i + UU->size[0] * 2] = U_data[(int32_T)id2_data[i] - 1];
    }

    emxFree_real_T(sp, &id3);
    st.site = &de_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    if (dNdx->size[0] != UU->size[0]) {
      if (((dNdx->size[0] == 1) && (dNdx->size[1] == 1)) || ((UU->size[0] == 1) &&
           (UU->size[1] == 1))) {
        emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
          "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
          "MATLAB:innerdim", 0);
      }
    }

    b_st.site = &ab_emlrtRSI;
    mtimes(&b_st, dNdx, UU, F0);
    id2_data = F0->data;
    if ((F0->size[1] != 3) && (F0->size[1] != 1)) {
      emlrtDimSizeImpxCheckR2021b(F0->size[1], 3, &s_emlrtECI, (emlrtConstCTX)sp);
    }

    if ((F0->size[0] != 3) && (F0->size[0] != 1)) {
      emlrtDimSizeImpxCheckR2021b(F0->size[0], 3, &t_emlrtECI, (emlrtConstCTX)sp);
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    b_I[0] = 1;
    b_I[4] = 1;
    b_I[8] = 1;
    if ((F0->size[1] == 3) && (F0->size[0] == 3)) {
      for (i = 0; i < 3; i++) {
        for (i1 = 0; i1 < 3; i1++) {
          n = i1 + 3 * i;
          F[n] = id2_data[i + F0->size[0] * i1] + (real_T)b_I[n];
        }
      }
    } else {
      c_binary_expand_op(F, F0, b_I);
    }
  }

  emxFree_real_T(sp, &F0);
  emxFree_real_T(sp, &id1);
  emxFree_real_T(sp, &UU);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static int32_T IsotropicReduction(const real_T D0[36], const real_T S0[6],
  real_T Dim, real_T S_data[], real_T D_data[], int32_T D_size[2], real_T
  G_data[], int32_T G_size[2])
{
  real_T SIG[9];
  int32_T S_size;
  int32_T i;

  /* ------------------------------------------------ nonlinear strain operator */
  if (Dim == 2.0) {
    G_size[0] = 4;
    G_size[1] = 4;
    memset(&G_data[0], 0, 16U * sizeof(real_T));
    SIG[0] = D0[0];
    SIG[3] = D0[6];
    SIG[6] = 0.0;
    SIG[1] = D0[1];
    SIG[4] = D0[7];
    SIG[7] = 0.0;
    SIG[2] = 0.0;
    SIG[5] = 0.0;
    SIG[8] = D0[21];
    D_size[0] = 3;
    D_size[1] = 3;
    memcpy(&D_data[0], &SIG[0], 9U * sizeof(real_T));
    S_size = 3;
    S_data[0] = S0[0];
    S_data[1] = S0[1];
    S_data[2] = S0[3];
    G_data[0] = S0[0];
    G_data[10] = S0[0];
    G_data[1] = S0[3];
    G_data[11] = S0[3];
    G_data[4] = S0[3];
    G_data[14] = S0[3];
    G_data[5] = S0[1];
    G_data[15] = S0[1];
  } else {
    G_size[0] = 9;
    G_size[1] = 9;
    memset(&G_data[0], 0, 81U * sizeof(real_T));
    D_size[0] = 6;
    D_size[1] = 6;
    memcpy(&D_data[0], &D0[0], 36U * sizeof(real_T));
    S_size = 6;
    for (i = 0; i < 6; i++) {
      S_data[i] = S0[i];
    }

    SIG[0] = S0[0];
    SIG[3] = S0[3];
    SIG[6] = S0[5];
    SIG[1] = S0[3];
    SIG[4] = S0[1];
    SIG[7] = S0[4];
    SIG[2] = S0[5];
    SIG[5] = S0[4];
    SIG[8] = S0[2];
    for (i = 0; i < 3; i++) {
      real_T G_tmp;
      int32_T G_data_tmp;
      int32_T b_G_data_tmp;
      G_tmp = SIG[3 * i];
      G_data[9 * i] = G_tmp;
      G_data_tmp = 9 * (i + 3);
      G_data[G_data_tmp + 3] = G_tmp;
      b_G_data_tmp = 9 * (i + 6);
      G_data[b_G_data_tmp + 6] = G_tmp;
      G_tmp = SIG[3 * i + 1];
      G_data[9 * i + 1] = G_tmp;
      G_data[G_data_tmp + 4] = G_tmp;
      G_data[b_G_data_tmp + 7] = G_tmp;
      G_tmp = SIG[3 * i + 2];
      G_data[9 * i + 2] = G_tmp;
      G_data[G_data_tmp + 5] = G_tmp;
      G_data[b_G_data_tmp + 8] = G_tmp;
    }
  }

  return S_size;
}

static void NonlinearStrainOperatorFast(const emlrtStack *sp, const
  emxArray_real_T *N, const emxArray_real_T *dNdx, const real_T F[9],
  emxArray_real_T *Bn, emxArray_real_T *Bg, emxArray_real_T *NN)
{
  emlrtStack st;
  emxArray_int32_T *r2;
  emxArray_real_T *id1;
  emxArray_real_T *id2;
  emxArray_real_T *r;
  emxArray_real_T *r4;
  emxArray_real_T *r6;
  const real_T *N_data;
  const real_T *dNdx_data;
  real_T b_F;
  real_T zz_tmp;
  real_T *Bg_data;
  real_T *NN_data;
  real_T *id1_data;
  real_T *id2_data;
  real_T *r1;
  real_T *r5;
  real_T *r7;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T *r3;
  st.prev = sp;
  st.tls = sp->tls;
  dNdx_data = dNdx->data;
  N_data = N->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);

  /* ------------------------------------------------ nonlinear strain operator */
  zz_tmp = (real_T)dNdx->size[1] * (real_T)N->size[0];
  i = NN->size[0] * NN->size[1];
  NN->size[0] = dNdx->size[1];
  emxEnsureCapacity_real_T(sp, NN, i, &md_emlrtRTEI);
  if (zz_tmp != (int32_T)zz_tmp) {
    emlrtIntegerCheckR2012b(zz_tmp, &cb_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = NN->size[0] * NN->size[1];
  NN->size[1] = (int32_T)zz_tmp;
  emxEnsureCapacity_real_T(sp, NN, i, &md_emlrtRTEI);
  NN_data = NN->data;
  if (zz_tmp != (int32_T)zz_tmp) {
    emlrtIntegerCheckR2012b(zz_tmp, &jb_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = dNdx->size[1] * (int32_T)zz_tmp;
  for (i = 0; i < loop_ub; i++) {
    NN_data[i] = 0.0;
  }

  st.site = &xj_emlrtRSI;
  emxInit_real_T(&st, &id1, 2, &nd_emlrtRTEI);
  id1_data = id1->data;
  if ((dNdx->size[1] == 0) || (zz_tmp < 1.0)) {
    id1->size[0] = 1;
    id1->size[1] = 0;
  } else {
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    loop_ub = (int32_T)((zz_tmp - 1.0) / (real_T)dNdx->size[1]);
    id1->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, id1, i, &nd_emlrtRTEI);
    id1_data = id1->data;
    for (i = 0; i <= loop_ub; i++) {
      id1_data[i] = (real_T)dNdx->size[1] * (real_T)i + 1.0;
    }
  }

  st.site = &yj_emlrtRSI;
  emxInit_real_T(&st, &id2, 2, &od_emlrtRTEI);
  id2_data = id2->data;
  if ((dNdx->size[1] == 0) || (zz_tmp < 2.0)) {
    id2->size[0] = 1;
    id2->size[1] = 0;
  } else {
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    loop_ub = (int32_T)((zz_tmp - 2.0) / (real_T)dNdx->size[1]);
    id2->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, id2, i, &od_emlrtRTEI);
    id2_data = id2->data;
    for (i = 0; i <= loop_ub; i++) {
      id2_data[i] = (real_T)dNdx->size[1] * (real_T)i + 2.0;
    }
  }

  if (dNdx->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, dNdx->size[1], &nb_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &r, 1, &pd_emlrtRTEI);
  i = r->size[0];
  r->size[0] = id1->size[1];
  emxEnsureCapacity_real_T(sp, r, i, &pd_emlrtRTEI);
  r1 = r->data;
  loop_ub = id1->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1[i] = id1_data[i];
  }

  emxInit_int32_T(sp, &r2, 1, &qf_emlrtRTEI);
  i = r2->size[0];
  r2->size[0] = r->size[0];
  emxEnsureCapacity_int32_T(sp, r2, i, &pd_emlrtRTEI);
  r3 = r2->data;
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)r1[i];
    if (r1[i] != i1) {
      emlrtIntegerCheckR2012b(r1[i], &kb_emlrtDCI, (emlrtConstCTX)sp);
    }

    if ((i1 < 1) || (i1 > (int32_T)zz_tmp)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, (int32_T)zz_tmp, &hf_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    r3[i] = i1 - 1;
  }

  iv[0] = 1;
  iv[1] = r2->size[0];
  iv1[0] = 1;
  iv1[1] = N->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &gb_emlrtECI, (emlrtCTX)
    sp);
  loop_ub = N->size[0];
  for (i = 0; i < loop_ub; i++) {
    NN_data[NN->size[0] * r3[i]] = N_data[i];
  }

  if (NN->size[0] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, NN->size[0], &ob_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  emxInit_real_T(sp, &r4, 1, &qd_emlrtRTEI);
  i = r4->size[0];
  r4->size[0] = id2->size[1];
  emxEnsureCapacity_real_T(sp, r4, i, &qd_emlrtRTEI);
  r5 = r4->data;
  loop_ub = id2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r5[i] = id2_data[i];
  }

  i = r2->size[0];
  r2->size[0] = r4->size[0];
  emxEnsureCapacity_int32_T(sp, r2, i, &qd_emlrtRTEI);
  r3 = r2->data;
  loop_ub = r4->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)r5[i];
    if (r5[i] != i1) {
      emlrtIntegerCheckR2012b(r5[i], &lb_emlrtDCI, (emlrtConstCTX)sp);
    }

    if ((i1 < 1) || (i1 > NN->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, NN->size[1], &if_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    r3[i] = i1 - 1;
  }

  iv[0] = 1;
  iv[1] = r2->size[0];
  iv1[0] = 1;
  iv1[1] = N->size[0];
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &hb_emlrtECI, (emlrtCTX)
    sp);
  loop_ub = N->size[0];
  for (i = 0; i < loop_ub; i++) {
    NN_data[NN->size[0] * r3[i] + 1] = N_data[i];
  }

  if (dNdx->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, dNdx->size[1], &lb_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  if (dNdx->size[1] < 2) {
    emlrtDynamicBoundsCheckR2012b(2, 1, dNdx->size[1], &mb_emlrtBCI,
      (emlrtConstCTX)sp);
  }

  if (dNdx->size[1] == 3) {
    if (zz_tmp < 3.0) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (NN->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, NN->size[1], &qb_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = 3;
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > NN->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, NN->size[1],
          &rb_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (NN->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, NN->size[0], &pb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &cn_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    iv1[0] = 1;
    iv1[1] = N->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &ib_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = N->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[NN->size[0] * ((i + i1 * i2) - 1) + 2] = N_data[i2];
    }

    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    id1->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id1, i, &td_emlrtRTEI);
    id1_data = id1->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i < loop_ub; i++) {
      id1_data[i] = dNdx_data[i + dNdx->size[0] * 2];
    }
  } else {
    i = id1->size[0] * id1->size[1];
    id1->size[0] = 1;
    id1->size[1] = 1;
    emxEnsureCapacity_real_T(sp, id1, i, &rd_emlrtRTEI);
    id1_data = id1->data;
    id1_data[0] = 0.0;
  }

  b_F = ((real_T)dNdx->size[1] - 1.0) * 3.0;
  if (!(b_F >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b_F, &eb_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (b_F != (int32_T)b_F) {
    emlrtIntegerCheckR2012b(b_F, &db_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Bn->size[0] * Bn->size[1];
  Bn->size[0] = (int32_T)b_F;
  emxEnsureCapacity_real_T(sp, Bn, i, &sd_emlrtRTEI);
  if (zz_tmp != (int32_T)zz_tmp) {
    emlrtIntegerCheckR2012b(zz_tmp, &fb_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Bn->size[0] * Bn->size[1];
  Bn->size[1] = (int32_T)zz_tmp;
  emxEnsureCapacity_real_T(sp, Bn, i, &sd_emlrtRTEI);
  NN_data = Bn->data;
  if (b_F != (int32_T)b_F) {
    emlrtIntegerCheckR2012b(b_F, &mb_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (zz_tmp != (int32_T)zz_tmp) {
    emlrtIntegerCheckR2012b(zz_tmp, &mb_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = (int32_T)b_F * (int32_T)zz_tmp;
  for (i = 0; i < loop_ub; i++) {
    NN_data[i] = 0.0;
  }

  b_F = ((real_T)dNdx->size[1] - 1.0) * 4.0 + ((real_T)dNdx->size[1] - 2.0);
  if (!(b_F >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b_F, &hb_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (b_F != (int32_T)b_F) {
    emlrtIntegerCheckR2012b(b_F, &gb_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Bg->size[0] * Bg->size[1];
  Bg->size[0] = (int32_T)b_F;
  emxEnsureCapacity_real_T(sp, Bg, i, &ud_emlrtRTEI);
  if (zz_tmp != (int32_T)zz_tmp) {
    emlrtIntegerCheckR2012b(zz_tmp, &ib_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Bg->size[0] * Bg->size[1];
  Bg->size[1] = (int32_T)zz_tmp;
  emxEnsureCapacity_real_T(sp, Bg, i, &ud_emlrtRTEI);
  Bg_data = Bg->data;
  if (b_F != (int32_T)b_F) {
    emlrtIntegerCheckR2012b(b_F, &nb_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (zz_tmp != (int32_T)zz_tmp) {
    emlrtIntegerCheckR2012b(zz_tmp, &nb_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub = (int32_T)b_F * (int32_T)zz_tmp;
  for (i = 0; i < loop_ub; i++) {
    Bg_data[i] = 0.0;
  }

  emxInit_real_T(sp, &r6, 2, &xe_emlrtRTEI);
  if (dNdx->size[1] == 2) {
    __m128d r8;
    __m128d r9;
    real_T c_F;
    int32_T scalarLB;
    int32_T scalarLB_tmp;
    int32_T vectorUB;
    int32_T vectorUB_tmp;

    /*  2-dimensional */
    i = r2->size[0];
    r2->size[0] = r->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &vd_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r1[i];
      if ((i1 < 1) || (i1 > (int32_T)zz_tmp)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, (int32_T)zz_tmp, &jf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    b_F = F[0];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &wd_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    scalarLB_tmp = (dNdx->size[0] / 2) << 1;
    vectorUB_tmp = scalarLB_tmp - 2;
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &jb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      NN_data[Bn->size[0] * r3[i]] = id2_data[i];
    }

    if (Bn->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[0], &sb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = r4->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &yd_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r4->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r5[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Bn->size[1], &kf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    b_F = F[1];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &ae_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &kb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      NN_data[Bn->size[0] * r3[i]] = id2_data[i];
    }

    if (Bn->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &tb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = r->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &ce_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r1[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Bn->size[1], &lf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    b_F = F[3];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &de_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i +
        dNdx->size[0]]), _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i + dNdx->size[0]] * b_F;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &lb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      NN_data[Bn->size[0] * r3[i] + 1] = id2_data[i];
    }

    if (Bn->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &ub_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = r4->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &fe_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r4->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r5[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Bn->size[1], &mf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    b_F = F[4];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &ge_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i +
        dNdx->size[0]]), _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i + dNdx->size[0]] * b_F;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &mb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      NN_data[Bn->size[0] * r3[i] + 1] = id2_data[i];
    }

    b_F = F[3];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &ie_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    c_F = F[0];
    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r6, i, &je_emlrtRTEI);
    r7 = r6->data;
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
      _mm_storeu_pd(&r7[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i + dNdx->size[0]]),
        _mm_set1_pd(c_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
      r7[i] = dNdx_data[i + dNdx->size[0]] * c_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &u_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if (Bn->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &vb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = r->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &le_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r1[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Bn->size[1], &nf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i, &ie_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i = 0; i <= vectorUB; i += 2) {
        r8 = _mm_loadu_pd(&id2_data[i]);
        r9 = _mm_loadu_pd(&r7[i]);
        _mm_storeu_pd(&id2_data[i], _mm_add_pd(r8, r9));
      }

      for (i = scalarLB; i <= loop_ub; i++) {
        id2_data[i] += r7[i];
      }
    } else {
      st.site = &xl_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &nb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      NN_data[Bn->size[0] * r3[i] + 2] = id2_data[i];
    }

    b_F = F[4];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &me_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    c_F = F[1];
    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r6, i, &oe_emlrtRTEI);
    r7 = r6->data;
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
      _mm_storeu_pd(&r7[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i + dNdx->size[0]]),
        _mm_set1_pd(c_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
      r7[i] = dNdx_data[i + dNdx->size[0]] * c_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &v_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if (Bn->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &wb_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = r4->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &pe_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r4->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r5[i];
      if ((i1 < 1) || (i1 > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Bn->size[1], &of_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i, &me_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i = 0; i <= vectorUB; i += 2) {
        r8 = _mm_loadu_pd(&id2_data[i]);
        r9 = _mm_loadu_pd(&r7[i]);
        _mm_storeu_pd(&id2_data[i], _mm_add_pd(r8, r9));
      }

      for (i = scalarLB; i <= loop_ub; i++) {
        id2_data[i] += r7[i];
      }
    } else {
      st.site = &wl_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &ob_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i = 0; i < loop_ub; i++) {
      NN_data[Bn->size[0] * r3[i] + 2] = id2_data[i];
    }

    i = r2->size[0];
    r2->size[0] = r->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &re_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r1[i];
      if ((i1 < 1) || (i1 > (int32_T)zz_tmp)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, (int32_T)zz_tmp, &pf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &ic_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i = 0; i < loop_ub; i++) {
      Bg_data[Bg->size[0] * r3[i]] = dNdx_data[i];
    }

    if (Bg->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bg->size[0], &ce_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = r->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &se_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r1[i];
      if ((i1 < 1) || (i1 > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Bg->size[1], &qf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &jc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i = 0; i < loop_ub; i++) {
      Bg_data[Bg->size[0] * r3[i] + 1] = dNdx_data[i + dNdx->size[0]];
    }

    if (Bg->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bg->size[0], &de_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = r4->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &ue_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r4->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r5[i];
      if ((i1 < 1) || (i1 > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Bg->size[1], &rf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &kc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i = 0; i < loop_ub; i++) {
      Bg_data[Bg->size[0] * r3[i] + 2] = dNdx_data[i];
    }

    if (Bg->size[0] < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, Bg->size[0], &ee_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i = r2->size[0];
    r2->size[0] = r4->size[0];
    emxEnsureCapacity_int32_T(sp, r2, i, &we_emlrtRTEI);
    r3 = r2->data;
    loop_ub = r4->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r5[i];
      if ((i1 < 1) || (i1 > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Bg->size[1], &sf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      r3[i] = i1 - 1;
    }

    iv[0] = 1;
    iv[1] = r2->size[0];
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &lc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i = 0; i < loop_ub; i++) {
      Bg_data[Bg->size[0] * r3[i] + 3] = dNdx_data[i + dNdx->size[0]];
    }
  } else {
    __m128d r8;
    __m128d r9;
    real_T c_F;
    int32_T b_scalarLB_tmp;
    int32_T b_vectorUB_tmp;
    int32_T scalarLB;
    int32_T scalarLB_tmp;
    int32_T vectorUB;
    int32_T vectorUB_tmp;
    boolean_T b;
    boolean_T b1;
    boolean_T b2;

    /*  3-dimensional */
    b = ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 1.0)));
    if (b) {
      i = 1;
      i1 = 0;
    } else {
      if ((int32_T)zz_tmp < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)zz_tmp, &yb_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if ((int32_T)zz_tmp < 1) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, (int32_T)zz_tmp,
          &ac_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    i2 = (dNdx->size[1] - 1) * 3;
    if (i2 < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i2, &xb_emlrtBCI, (emlrtConstCTX)sp);
    }

    b_F = F[0];
    i2 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i2, &xd_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    scalarLB_tmp = (dNdx->size[0] / 2) << 1;
    vectorUB_tmp = scalarLB_tmp - 2;
    for (i2 = 0; i2 <= vectorUB_tmp; i2 += 2) {
      _mm_storeu_pd(&id2_data[i2], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i2]),
        _mm_set1_pd(b_F)));
    }

    for (i2 = scalarLB_tmp; i2 < loop_ub; i2++) {
      id2_data[i2] = dNdx_data[i2] * b_F;
    }

    iv[0] = 1;
    st.site = &bn_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &pb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      NN_data[Bn->size[0] * (i * i1)] = id2_data[i1];
    }

    b1 = ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 2.0)));
    if (b1) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &cc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &dc_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[0], &bc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_F = F[1];
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i3, &be_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i3 = 0; i3 <= vectorUB_tmp; i3 += 2) {
      _mm_storeu_pd(&id2_data[i3], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i3]),
        _mm_set1_pd(b_F)));
    }

    for (i3 = scalarLB_tmp; i3 < loop_ub; i3++) {
      id2_data[i3] = dNdx_data[i3] * b_F;
    }

    iv[0] = 1;
    st.site = &an_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &qb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1)] = id2_data[i2];
    }

    b2 = ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 3.0)));
    if (b2) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &fc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &gc_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[0], &ec_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_F = F[2];
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i3, &ee_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i3 = 0; i3 <= vectorUB_tmp; i3 += 2) {
      _mm_storeu_pd(&id2_data[i3], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i3]),
        _mm_set1_pd(b_F)));
    }

    for (i3 = scalarLB_tmp; i3 < loop_ub; i3++) {
      id2_data[i3] = dNdx_data[i3] * b_F;
    }

    iv[0] = 1;
    st.site = &ym_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &rb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1)] = id2_data[i2];
    }

    if (b) {
      i = 1;
      i1 = 0;
    } else {
      if (Bn->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &ic_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &jc_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &hc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_F = F[3];
    i2 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i2, &he_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i2 = 0; i2 <= vectorUB_tmp; i2 += 2) {
      _mm_storeu_pd(&id2_data[i2], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i2 +
        dNdx->size[0]]), _mm_set1_pd(b_F)));
    }

    for (i2 = scalarLB_tmp; i2 < loop_ub; i2++) {
      id2_data[i2] = dNdx_data[i2 + dNdx->size[0]] * b_F;
    }

    iv[0] = 1;
    st.site = &xm_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &sb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      NN_data[Bn->size[0] * (i * i1) + 1] = id2_data[i1];
    }

    if (b1) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &lc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &mc_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &kc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_F = F[4];
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i3, &ke_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i3 = 0; i3 <= vectorUB_tmp; i3 += 2) {
      _mm_storeu_pd(&id2_data[i3], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i3 +
        dNdx->size[0]]), _mm_set1_pd(b_F)));
    }

    for (i3 = scalarLB_tmp; i3 < loop_ub; i3++) {
      id2_data[i3] = dNdx_data[i3 + dNdx->size[0]] * b_F;
    }

    iv[0] = 1;
    st.site = &wm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &tb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 1] = id2_data[i2];
    }

    if (b2) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &oc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &pc_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[0], &nc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_F = F[5];
    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i3, &ne_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i3 = 0; i3 <= vectorUB_tmp; i3 += 2) {
      _mm_storeu_pd(&id2_data[i3], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i3 +
        dNdx->size[0]]), _mm_set1_pd(b_F)));
    }

    for (i3 = scalarLB_tmp; i3 < loop_ub; i3++) {
      id2_data[i3] = dNdx_data[i3 + dNdx->size[0]] * b_F;
    }

    iv[0] = 1;
    st.site = &vm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &ub_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 1] = id2_data[i2];
    }

    if (b) {
      i = 1;
      i1 = 0;
    } else {
      if (Bn->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &rc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &sc_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &qc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i2 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, id2, i2, &qe_emlrtRTEI);
    id2_data = id2->data;
    b_F = F[6];
    loop_ub = id1->size[1];
    b_scalarLB_tmp = (id1->size[1] / 2) << 1;
    b_vectorUB_tmp = b_scalarLB_tmp - 2;
    for (i2 = 0; i2 <= b_vectorUB_tmp; i2 += 2) {
      r8 = _mm_loadu_pd(&id1_data[i2]);
      _mm_storeu_pd(&id2_data[i2], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i2 = b_scalarLB_tmp; i2 < loop_ub; i2++) {
      id2_data[i2] = id1_data[i2] * b_F;
    }

    iv[0] = 1;
    st.site = &um_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &vb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      NN_data[Bn->size[0] * (i * i1) + 2] = id2_data[i1];
    }

    if (b1) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &uc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &vc_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &tc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, id2, i3, &te_emlrtRTEI);
    id2_data = id2->data;
    b_F = F[7];
    loop_ub = id1->size[1];
    for (i3 = 0; i3 <= b_vectorUB_tmp; i3 += 2) {
      r8 = _mm_loadu_pd(&id1_data[i3]);
      _mm_storeu_pd(&id2_data[i3], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i3 = b_scalarLB_tmp; i3 < loop_ub; i3++) {
      id2_data[i3] = id1_data[i3] * b_F;
    }

    iv[0] = 1;
    st.site = &tm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &wb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 2] = id2_data[i2];
    }

    if (b2) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &xc_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &yc_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[0], &wc_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i3 = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, id2, i3, &ve_emlrtRTEI);
    id2_data = id2->data;
    b_F = F[8];
    loop_ub = id1->size[1];
    for (i3 = 0; i3 <= b_vectorUB_tmp; i3 += 2) {
      r8 = _mm_loadu_pd(&id1_data[i3]);
      _mm_storeu_pd(&id2_data[i3], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i3 = b_scalarLB_tmp; i3 < loop_ub; i3++) {
      id2_data[i3] = id1_data[i3] * b_F;
    }

    iv[0] = 1;
    st.site = &sm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &xb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 2] = id2_data[i2];
    }

    b_F = F[3];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &xe_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    c_F = F[0];
    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r6, i, &ye_emlrtRTEI);
    r7 = r6->data;
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
      _mm_storeu_pd(&r7[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i + dNdx->size[0]]),
        _mm_set1_pd(c_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
      r7[i] = dNdx_data[i + dNdx->size[0]] * c_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &w_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 1.0))) {
      i = 1;
      i1 = 0;
    } else {
      if (Bn->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &bd_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &cd_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, Bn->size[0], &ad_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i2 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i2, &xe_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i2 = 0; i2 <= vectorUB; i2 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i2]);
        r9 = _mm_loadu_pd(&r7[i2]);
        _mm_storeu_pd(&id2_data[i2], _mm_add_pd(r8, r9));
      }

      for (i2 = scalarLB; i2 <= loop_ub; i2++) {
        id2_data[i2] += r7[i2];
      }
    } else {
      st.site = &hm_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &hm_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &yb_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      NN_data[Bn->size[0] * (i * i1) + 3] = id2_data[i1];
    }

    b_F = F[4];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &af_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    c_F = F[1];
    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r6, i, &bf_emlrtRTEI);
    r7 = r6->data;
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
      _mm_storeu_pd(&r7[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i + dNdx->size[0]]),
        _mm_set1_pd(c_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
      r7[i] = dNdx_data[i + dNdx->size[0]] * c_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &x_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 2.0))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &ed_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &fd_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, Bn->size[0], &dd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i3 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i3, &af_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i3 = 0; i3 <= vectorUB; i3 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i3]);
        r9 = _mm_loadu_pd(&r7[i3]);
        _mm_storeu_pd(&id2_data[i3], _mm_add_pd(r8, r9));
      }

      for (i3 = scalarLB; i3 <= loop_ub; i3++) {
        id2_data[i3] += r7[i3];
      }
    } else {
      st.site = &gm_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &gm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &ac_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 3] = id2_data[i2];
    }

    b_F = F[5];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &cf_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    c_F = F[2];
    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, r6, i, &df_emlrtRTEI);
    r7 = r6->data;
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
      _mm_storeu_pd(&r7[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i + dNdx->size[0]]),
        _mm_set1_pd(c_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
      r7[i] = dNdx_data[i + dNdx->size[0]] * c_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &y_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 3.0))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &hd_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &id_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, Bn->size[0], &gd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i3 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i3, &cf_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i3 = 0; i3 <= vectorUB; i3 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i3]);
        r9 = _mm_loadu_pd(&r7[i3]);
        _mm_storeu_pd(&id2_data[i3], _mm_add_pd(r8, r9));
      }

      for (i3 = scalarLB; i3 <= loop_ub; i3++) {
        id2_data[i3] += r7[i3];
      }
    } else {
      st.site = &fm_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &fm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &bc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 3] = id2_data[i2];
    }

    b_F = F[6];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &ef_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i +
        dNdx->size[0]]), _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i + dNdx->size[0]] * b_F;
    }

    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r6, i, &ff_emlrtRTEI);
    r7 = r6->data;
    b_F = F[3];
    loop_ub = id1->size[1];
    for (i = 0; i <= b_vectorUB_tmp; i += 2) {
      r8 = _mm_loadu_pd(&id1_data[i]);
      _mm_storeu_pd(&r7[i], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i = b_scalarLB_tmp; i < loop_ub; i++) {
      r7[i] = id1_data[i] * b_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &ab_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 1.0))) {
      i = 1;
      i1 = 0;
    } else {
      if (Bn->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &kd_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &ld_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 5) {
      emlrtDynamicBoundsCheckR2012b(5, 1, Bn->size[0], &jd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i2 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i2, &ef_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i2 = 0; i2 <= vectorUB; i2 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i2]);
        r9 = _mm_loadu_pd(&r7[i2]);
        _mm_storeu_pd(&id2_data[i2], _mm_add_pd(r8, r9));
      }

      for (i2 = scalarLB; i2 <= loop_ub; i2++) {
        id2_data[i2] += r7[i2];
      }
    } else {
      st.site = &em_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &em_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &cc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      NN_data[Bn->size[0] * (i * i1) + 4] = id2_data[i1];
    }

    b_F = F[7];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &gf_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i +
        dNdx->size[0]]), _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i + dNdx->size[0]] * b_F;
    }

    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r6, i, &hf_emlrtRTEI);
    r7 = r6->data;
    b_F = F[4];
    loop_ub = id1->size[1];
    for (i = 0; i <= b_vectorUB_tmp; i += 2) {
      r8 = _mm_loadu_pd(&id1_data[i]);
      _mm_storeu_pd(&r7[i], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i = b_scalarLB_tmp; i < loop_ub; i++) {
      r7[i] = id1_data[i] * b_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &bb_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 2.0))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &nd_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &od_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 5) {
      emlrtDynamicBoundsCheckR2012b(5, 1, Bn->size[0], &md_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i3 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i3, &gf_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i3 = 0; i3 <= vectorUB; i3 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i3]);
        r9 = _mm_loadu_pd(&r7[i3]);
        _mm_storeu_pd(&id2_data[i3], _mm_add_pd(r8, r9));
      }

      for (i3 = scalarLB; i3 <= loop_ub; i3++) {
        id2_data[i3] += r7[i3];
      }
    } else {
      st.site = &dm_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &dm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &dc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 4] = id2_data[i2];
    }

    b_F = F[8];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &if_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i +
        dNdx->size[0]]), _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i + dNdx->size[0]] * b_F;
    }

    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r6, i, &jf_emlrtRTEI);
    r7 = r6->data;
    b_F = F[5];
    loop_ub = id1->size[1];
    for (i = 0; i <= b_vectorUB_tmp; i += 2) {
      r8 = _mm_loadu_pd(&id1_data[i]);
      _mm_storeu_pd(&r7[i], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i = b_scalarLB_tmp; i < loop_ub; i++) {
      r7[i] = id1_data[i] * b_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &cb_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 3.0))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &qd_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &rd_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 5) {
      emlrtDynamicBoundsCheckR2012b(5, 1, Bn->size[0], &pd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i3 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i3, &if_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i3 = 0; i3 <= vectorUB; i3 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i3]);
        r9 = _mm_loadu_pd(&r7[i3]);
        _mm_storeu_pd(&id2_data[i3], _mm_add_pd(r8, r9));
      }

      for (i3 = scalarLB; i3 <= loop_ub; i3++) {
        id2_data[i3] += r7[i3];
      }
    } else {
      st.site = &cm_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &cm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &ec_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 4] = id2_data[i2];
    }

    b_F = F[6];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &kf_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
    }

    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r6, i, &lf_emlrtRTEI);
    r7 = r6->data;
    b_F = F[0];
    loop_ub = id1->size[1];
    for (i = 0; i <= b_vectorUB_tmp; i += 2) {
      r8 = _mm_loadu_pd(&id1_data[i]);
      _mm_storeu_pd(&r7[i], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i = b_scalarLB_tmp; i < loop_ub; i++) {
      r7[i] = id1_data[i] * b_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &db_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 1.0))) {
      i = 1;
      i1 = 0;
    } else {
      if (Bn->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bn->size[1], &td_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &ud_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 6) {
      emlrtDynamicBoundsCheckR2012b(6, 1, Bn->size[0], &sd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i2 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i2, &kf_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i2 = 0; i2 <= vectorUB; i2 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i2]);
        r9 = _mm_loadu_pd(&r7[i2]);
        _mm_storeu_pd(&id2_data[i2], _mm_add_pd(r8, r9));
      }

      for (i2 = scalarLB; i2 <= loop_ub; i2++) {
        id2_data[i2] += r7[i2];
      }
    } else {
      st.site = &bm_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &bm_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &fc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      NN_data[Bn->size[0] * (i * i1) + 5] = id2_data[i1];
    }

    b_F = F[7];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &mf_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
    }

    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r6, i, &nf_emlrtRTEI);
    r7 = r6->data;
    b_F = F[1];
    loop_ub = id1->size[1];
    for (i = 0; i <= b_vectorUB_tmp; i += 2) {
      r8 = _mm_loadu_pd(&id1_data[i]);
      _mm_storeu_pd(&r7[i], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i = b_scalarLB_tmp; i < loop_ub; i++) {
      r7[i] = id1_data[i] * b_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &eb_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 2.0))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bn->size[1], &wd_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &xd_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 6) {
      emlrtDynamicBoundsCheckR2012b(6, 1, Bn->size[0], &vd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i3 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i3, &mf_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i3 = 0; i3 <= vectorUB; i3 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i3]);
        r9 = _mm_loadu_pd(&r7[i3]);
        _mm_storeu_pd(&id2_data[i3], _mm_add_pd(r8, r9));
      }

      for (i3 = scalarLB; i3 <= loop_ub; i3++) {
        id2_data[i3] += r7[i3];
      }
    } else {
      st.site = &am_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &am_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &gc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 5] = id2_data[i2];
    }

    b_F = F[8];
    i = id2->size[0] * id2->size[1];
    id2->size[0] = 1;
    id2->size[1] = dNdx->size[0];
    emxEnsureCapacity_real_T(sp, id2, i, &of_emlrtRTEI);
    id2_data = id2->data;
    loop_ub = dNdx->size[0];
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      _mm_storeu_pd(&id2_data[i], _mm_mul_pd(_mm_loadu_pd(&dNdx_data[i]),
        _mm_set1_pd(b_F)));
    }

    for (i = scalarLB_tmp; i < loop_ub; i++) {
      id2_data[i] = dNdx_data[i] * b_F;
    }

    i = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    r6->size[1] = id1->size[1];
    emxEnsureCapacity_real_T(sp, r6, i, &pf_emlrtRTEI);
    r7 = r6->data;
    b_F = F[2];
    loop_ub = id1->size[1];
    for (i = 0; i <= b_vectorUB_tmp; i += 2) {
      r8 = _mm_loadu_pd(&id1_data[i]);
      _mm_storeu_pd(&r7[i], _mm_mul_pd(r8, _mm_set1_pd(b_F)));
    }

    for (i = b_scalarLB_tmp; i < loop_ub; i++) {
      r7[i] = id1_data[i] * b_F;
    }

    if ((id2->size[1] != r6->size[1]) && ((id2->size[1] != 1) && (r6->size[1] !=
          1))) {
      emlrtDimSizeImpxCheckR2021b(id2->size[1], r6->size[1], &fb_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((dNdx->size[1] == 0) || ((dNdx->size[1] > 0) && (zz_tmp < 3.0))) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bn->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bn->size[1], &ae_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bn->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bn->size[1],
          &be_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bn->size[0] < 6) {
      emlrtDynamicBoundsCheckR2012b(6, 1, Bn->size[0], &yd_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (id2->size[1] == r6->size[1]) {
      loop_ub = id2->size[1] - 1;
      i3 = id2->size[0] * id2->size[1];
      id2->size[0] = 1;
      emxEnsureCapacity_real_T(sp, id2, i3, &of_emlrtRTEI);
      id2_data = id2->data;
      scalarLB = (id2->size[1] / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i3 = 0; i3 <= vectorUB; i3 += 2) {
        r8 = _mm_loadu_pd(&id2_data[i3]);
        r9 = _mm_loadu_pd(&r7[i3]);
        _mm_storeu_pd(&id2_data[i3], _mm_add_pd(r8, r9));
      }

      for (i3 = scalarLB; i3 <= loop_ub; i3++) {
        id2_data[i3] += r7[i3];
      }
    } else {
      st.site = &yl_emlrtRSI;
      c_plus(&st, id2, r6);
      id2_data = id2->data;
    }

    iv[0] = 1;
    st.site = &yl_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id2->size[0], 2, &hc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id2->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      NN_data[Bn->size[0] * ((i + i1 * i2) - 1) + 5] = id2_data[i2];
    }

    if (b) {
      i = 1;
      i1 = 0;
    } else {
      if ((int32_T)zz_tmp < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)zz_tmp, &ge_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if ((int32_T)zz_tmp < 1) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, (int32_T)zz_tmp,
          &he_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    i2 = (((dNdx->size[1] - 1) << 2) + dNdx->size[1]) - 2;
    if (i2 < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i2, &fe_emlrtBCI, (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &rm_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &mc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bg_data[Bg->size[0] * (i * i1)] = dNdx_data[i1];
    }

    if (b) {
      i = 1;
      i1 = 0;
    } else {
      if (Bg->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bg->size[1], &je_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bg->size[1],
          &ke_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    if (Bg->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Bg->size[0], &ie_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &qm_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &nc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bg_data[Bg->size[0] * (i * i1) + 1] = dNdx_data[i1 + dNdx->size[0]];
    }

    if (b) {
      i = 1;
      i1 = 0;
    } else {
      if (Bg->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, Bg->size[1], &me_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bg->size[1],
          &ne_emlrtBCI, (emlrtConstCTX)sp);
      }

      i1 = (int32_T)zz_tmp;
    }

    if (Bg->size[0] < 3) {
      emlrtDynamicBoundsCheckR2012b(3, 1, Bg->size[0], &le_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &pm_emlrtRSI;
    iv[1] = div_s32(&st, i1 - 1, i) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id1->size[0], 2, &oc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id1->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Bg_data[Bg->size[0] * (i * i1) + 2] = id1_data[i1];
    }

    if (b1) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bg->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bg->size[1], &pe_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bg->size[1],
          &qe_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bg->size[0] < 4) {
      emlrtDynamicBoundsCheckR2012b(4, 1, Bg->size[0], &oe_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &om_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &pc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bg_data[Bg->size[0] * ((i + i1 * i2) - 1) + 3] = dNdx_data[i2];
    }

    if (b1) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bg->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bg->size[1], &se_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bg->size[1],
          &te_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bg->size[0] < 5) {
      emlrtDynamicBoundsCheckR2012b(5, 1, Bg->size[0], &re_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &nm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &qc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bg_data[Bg->size[0] * ((i + i1 * i2) - 1) + 4] = dNdx_data[i2 + dNdx->
        size[0]];
    }

    if (b1) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bg->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, Bg->size[1], &ve_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 2;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bg->size[1],
          &we_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bg->size[0] < 6) {
      emlrtDynamicBoundsCheckR2012b(6, 1, Bg->size[0], &ue_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &mm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id1->size[0], 2, &rc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id1->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bg_data[Bg->size[0] * ((i + i1 * i2) - 1) + 5] = id1_data[i2];
    }

    if (b2) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bg->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bg->size[1], &ye_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bg->size[1],
          &af_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bg->size[0] < 7) {
      emlrtDynamicBoundsCheckR2012b(7, 1, Bg->size[0], &xe_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &lm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &sc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bg_data[Bg->size[0] * ((i + i1 * i2) - 1) + 6] = dNdx_data[i2];
    }

    if (b2) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bg->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bg->size[1], &cf_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bg->size[1],
          &df_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bg->size[0] < 8) {
      emlrtDynamicBoundsCheckR2012b(8, 1, Bg->size[0], &bf_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &km_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    iv1[0] = 1;
    iv1[1] = dNdx->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &tc_emlrtECI, (emlrtCTX)
      sp);
    loop_ub = dNdx->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bg_data[Bg->size[0] * ((i + i1 * i2) - 1) + 7] = dNdx_data[i2 + dNdx->
        size[0]];
    }

    if (b2) {
      i = 1;
      i1 = 1;
      i2 = 0;
    } else {
      if (Bg->size[1] < 3) {
        emlrtDynamicBoundsCheckR2012b(3, 1, Bg->size[1], &ff_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i = 3;
      i1 = dNdx->size[1];
      if (((int32_T)zz_tmp < 1) || ((int32_T)zz_tmp > Bg->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)zz_tmp, 1, Bg->size[1],
          &gf_emlrtBCI, (emlrtConstCTX)sp);
      }

      i2 = (int32_T)zz_tmp;
    }

    if (Bg->size[0] < 9) {
      emlrtDynamicBoundsCheckR2012b(9, 1, Bg->size[0], &ef_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    iv[0] = 1;
    st.site = &jm_emlrtRSI;
    iv[1] = div_s32(&st, i2 - i, i1) + 1;
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &id1->size[0], 2, &uc_emlrtECI,
      (emlrtCTX)sp);
    loop_ub = id1->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Bg_data[Bg->size[0] * ((i + i1 * i2) - 1) + 8] = id1_data[i2];
    }
  }

  emxFree_real_T(sp, &r4);
  emxFree_real_T(sp, &r);
  emxFree_int32_T(sp, &r2);
  emxFree_real_T(sp, &r6);
  emxFree_real_T(sp, &id2);
  emxFree_real_T(sp, &id1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static real_T PiollaStress(const emlrtStack *sp, real_T Mu, real_T Lambda, const
  real_T F[9], real_T S[9], real_T D[36])
{
  static const int8_T b[6] = { 2, 2, 2, 0, 0, 0 };

  __m128d r;
  __m128d r1;
  __m128d r2;
  __m128d r3;
  __m128d r4;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T I3EE[36];
  real_T J1EE_tmp[36];
  real_T b_I3E[36];
  real_T C[9];
  real_T I3E[6];
  real_T J1E[6];
  real_T Se[6];
  real_T C100;
  real_T I1;
  real_T I3;
  real_T J3;
  real_T K;
  real_T P;
  real_T a;
  real_T a_tmp;
  real_T a_tmp_tmp;
  real_T b_a_tmp;
  real_T c_a_tmp;
  real_T d_a_tmp;
  int32_T b_i;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* Se = 2nd PK stress [S11, S22, S33, S12, S23, S13]; */
  C100 = Mu / 2.0;
  K = Lambda / 2.0;
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      C[i + 3 * b_i] = (F[3 * i] * F[3 * b_i] + F[3 * i + 1] * F[3 * b_i + 1]) +
        F[3 * i + 2] * F[3 * b_i + 2];
    }
  }

  I1 = (C[0] + C[4]) + C[8];
  st.site = &mj_emlrtRSI;
  I3 = b_det(&st, C);
  st.site = &nj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  c_st.site = &hf_emlrtRSI;
  if (I3 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI,
      "Coder:toolbox:power_domainError", "Coder:toolbox:power_domainError", 0);
  }

  st.site = &oj_emlrtRSI;
  J3 = muDoubleScalarSqrt(I3);

  /*  */
  st.site = &pj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  st.site = &pj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  st.site = &pj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  I3E[0] = 2.0 * (C[4] * C[8] - C[7] * C[7]);
  I3E[1] = 2.0 * (C[0] * C[8] - C[6] * C[6]);
  I3E[2] = 2.0 * (C[0] * C[4] - C[3] * C[3]);
  I3E[3] = 2.0 * (C[6] * C[7] - C[3] * C[8]);
  I3E[4] = 2.0 * (C[3] * C[6] - C[0] * C[7]);
  I3E[5] = 2.0 * (C[3] * C[7] - C[4] * C[6]);

  /*  */
  st.site = &qj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  a_tmp = muDoubleScalarPower(I3, -0.33333333333333331);
  st.site = &qj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  b_a_tmp = muDoubleScalarPower(I3, -1.3333333333333333);
  c_a_tmp = 0.33333333333333331 * I1 * b_a_tmp;
  st.site = &qj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  a_tmp_tmp = muDoubleScalarPower(I3, -0.5);
  d_a_tmp = 0.5 * a_tmp_tmp;

  /*  */
  for (i = 0; i < 6; i++) {
    a = I3E[i];
    J1E[i] = a_tmp * (real_T)b[i] - c_a_tmp * a;
    a *= d_a_tmp;
    I3E[i] = a;
  }

  /*  */
  st.site = &rj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  P = C100 * (I1 * a_tmp - 3.0) + 0.5 * K * ((J3 - 1.0) * (J3 - 1.0));
  r = _mm_loadu_pd(&J1E[0]);
  r1 = _mm_loadu_pd(&I3E[0]);
  r2 = _mm_set1_pd(C100);
  r3 = _mm_set1_pd(K * (J3 - 1.0));
  _mm_storeu_pd(&Se[0], _mm_add_pd(_mm_mul_pd(r2, r), _mm_mul_pd(r3, r1)));
  r = _mm_loadu_pd(&J1E[2]);
  r1 = _mm_loadu_pd(&I3E[2]);
  _mm_storeu_pd(&Se[2], _mm_add_pd(_mm_mul_pd(r2, r), _mm_mul_pd(r3, r1)));
  r = _mm_loadu_pd(&J1E[4]);
  r1 = _mm_loadu_pd(&I3E[4]);
  _mm_storeu_pd(&Se[4], _mm_add_pd(_mm_mul_pd(r2, r), _mm_mul_pd(r3, r1)));
  S[0] = Se[0];
  S[3] = Se[3];
  S[6] = Se[5];
  S[1] = Se[3];
  S[4] = Se[1];
  S[7] = Se[4];
  S[2] = Se[5];
  S[5] = Se[4];
  S[8] = Se[2];
  I3EE[0] = 0.0;
  I3EE[6] = 4.0 * C[8];
  I3EE[12] = 4.0 * C[4];
  I3EE[18] = 0.0;
  I3EE[24] = -4.0 * C[7];
  I3EE[30] = 0.0;
  I3EE[1] = 4.0 * C[8];
  I3EE[7] = 0.0;
  I3EE[13] = 4.0 * C[0];
  I3EE[19] = 0.0;
  I3EE[25] = 0.0;
  I3EE[31] = -4.0 * C[6];
  I3EE[2] = 4.0 * C[4];
  I3EE[8] = 4.0 * C[0];
  I3EE[14] = 0.0;
  I3EE[20] = -4.0 * C[3];
  I3EE[26] = 0.0;
  I3EE[32] = 0.0;
  I3EE[3] = 0.0;
  I3EE[9] = 0.0;
  I3EE[15] = -4.0 * C[3];
  I3EE[21] = -2.0 * C[8];
  I3EE[27] = 2.0 * C[6];
  I3EE[33] = 2.0 * C[7];
  I3EE[4] = -4.0 * C[7];
  I3EE[10] = 0.0;
  I3EE[16] = 0.0;
  I3EE[22] = 2.0 * C[6];
  I3EE[28] = -2.0 * C[0];
  I3EE[34] = 2.0 * C[3];
  I3EE[5] = 0.0;
  I3EE[11] = -4.0 * C[6];
  I3EE[17] = 0.0;
  I3EE[23] = 2.0 * C[7];
  I3EE[29] = 2.0 * C[3];
  I3EE[35] = -2.0 * C[4];

  /*  */
  st.site = &sj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  st.site = &sj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  I3 = 0.88888888888888884 * I1 * b_a_tmp;
  st.site = &sj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  st.site = &tj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  st.site = &tj_emlrtRSI;
  b_st.site = &gf_emlrtRSI;

  /*  */
  a = -(0.66666666666666663 * a_tmp_tmp);

  /*  */
  for (i = 0; i < 6; i++) {
    r = _mm_loadu_pd(&I3E[0]);
    r1 = _mm_set1_pd(I3E[i]);
    _mm_storeu_pd(&J1EE_tmp[6 * i], _mm_mul_pd(r, r1));
    r = _mm_loadu_pd(&J1E[0]);
    _mm_storeu_pd(&D[6 * i], _mm_mul_pd(r, r1));
    r = _mm_loadu_pd(&I3E[0]);
    r4 = _mm_set1_pd(J1E[i]);
    _mm_storeu_pd(&b_I3E[6 * i], _mm_mul_pd(r, r4));
    r = _mm_loadu_pd(&I3E[2]);
    b_i = 6 * i + 2;
    _mm_storeu_pd(&J1EE_tmp[b_i], _mm_mul_pd(r, r1));
    r = _mm_loadu_pd(&J1E[2]);
    _mm_storeu_pd(&D[b_i], _mm_mul_pd(r, r1));
    r = _mm_loadu_pd(&I3E[2]);
    _mm_storeu_pd(&b_I3E[b_i], _mm_mul_pd(r, r4));
    r = _mm_loadu_pd(&I3E[4]);
    b_i = 6 * i + 4;
    _mm_storeu_pd(&J1EE_tmp[b_i], _mm_mul_pd(r, r1));
    r = _mm_loadu_pd(&J1E[4]);
    _mm_storeu_pd(&D[b_i], _mm_mul_pd(r, r1));
    r = _mm_loadu_pd(&I3E[4]);
    _mm_storeu_pd(&b_I3E[b_i], _mm_mul_pd(r, r4));
  }

  for (i = 0; i <= 34; i += 2) {
    __m128d r5;
    r = _mm_loadu_pd(&D[i]);
    r1 = _mm_loadu_pd(&b_I3E[i]);
    r4 = _mm_loadu_pd(&J1EE_tmp[i]);
    r5 = _mm_loadu_pd(&I3EE[i]);
    _mm_storeu_pd(&D[i], _mm_add_pd(_mm_add_pd(_mm_mul_pd(r2, _mm_sub_pd
      (_mm_add_pd(_mm_mul_pd(_mm_set1_pd(a), _mm_add_pd(r, r1)), _mm_mul_pd
                  (_mm_set1_pd(I3), r4)), _mm_mul_pd(_mm_set1_pd(c_a_tmp), r5))),
      _mm_mul_pd(_mm_set1_pd(K), r4)), _mm_mul_pd(r3, _mm_add_pd(_mm_mul_pd
      (_mm_set1_pd(-a_tmp_tmp), r4), _mm_mul_pd(_mm_set1_pd(d_a_tmp), r5)))));
  }

  return P;
}

static void PolarDecomposition(const emlrtStack *sp, const real_T F[9], real_T
  R[9], real_T S[9], real_T V[9])
{
  emlrtStack st;
  creal_T Q0[9];
  creal_T b_lambdasquare[9];
  creal_T c_F[9];
  creal_T lambdasquare[9];
  creal_T lambda[3];
  real_T b_F[9];
  real_T absxi;
  real_T absxr;
  real_T b_lambdasquare_re_tmp;
  real_T brm;
  real_T lambdasquare_re_tmp;
  real_T yi;
  real_T yr;
  int32_T i;
  int32_T i1;
  int32_T ibmat;
  int32_T jcol;
  st.prev = sp;
  st.tls = sp->tls;

  /* ---------------------------------------------------------- polar decompose */
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_F[i + 3 * i1] = (F[3 * i] * F[3 * i1] + F[3 * i + 1] * F[3 * i1 + 1]) +
        F[3 * i + 2] * F[3 * i1 + 2];
    }
  }

  st.site = &he_emlrtRSI;
  eig(&st, b_F, Q0, lambdasquare);
  if (lambdasquare[0].im == 0.0) {
    if (lambdasquare[0].re < 0.0) {
      yr = 0.0;
      yi = muDoubleScalarSqrt(-lambdasquare[0].re);
    } else {
      yr = muDoubleScalarSqrt(lambdasquare[0].re);
      yi = 0.0;
    }
  } else if (lambdasquare[0].re == 0.0) {
    if (lambdasquare[0].im < 0.0) {
      yr = muDoubleScalarSqrt(-lambdasquare[0].im / 2.0);
      yi = -yr;
    } else {
      yr = muDoubleScalarSqrt(lambdasquare[0].im / 2.0);
      yi = yr;
    }
  } else if (muDoubleScalarIsNaN(lambdasquare[0].re)) {
    yr = rtNaN;
    yi = rtNaN;
  } else if (muDoubleScalarIsNaN(lambdasquare[0].im)) {
    yr = rtNaN;
    yi = rtNaN;
  } else if (muDoubleScalarIsInf(lambdasquare[0].im)) {
    yr = muDoubleScalarAbs(lambdasquare[0].im);
    yi = lambdasquare[0].im;
  } else if (muDoubleScalarIsInf(lambdasquare[0].re)) {
    if (lambdasquare[0].re < 0.0) {
      yr = 0.0;
      yi = lambdasquare[0].im * -lambdasquare[0].re;
    } else {
      yr = lambdasquare[0].re;
      yi = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(lambdasquare[0].re);
    absxi = muDoubleScalarAbs(lambdasquare[0].im);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi = muDoubleScalarHypot(absxr, absxi * 0.5);
      if (absxi > absxr) {
        yr = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(absxr / absxi + 1.0);
      } else {
        yr = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
      }
    } else {
      yr = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) * 0.5);
    }

    if (lambdasquare[0].re > 0.0) {
      yi = 0.5 * (lambdasquare[0].im / yr);
    } else {
      if (lambdasquare[0].im < 0.0) {
        yi = -yr;
      } else {
        yi = yr;
      }

      yr = 0.5 * (lambdasquare[0].im / yi);
    }
  }

  if (-yi == 0.0) {
    lambda[0].re = 1.0 / yr;
    lambda[0].im = 0.0;
  } else if (yr == 0.0) {
    lambda[0].re = 0.0;
    lambda[0].im = -(1.0 / -yi);
  } else {
    brm = muDoubleScalarAbs(yr);
    absxi = muDoubleScalarAbs(-yi);
    if (brm > absxi) {
      absxr = -yi / yr;
      absxi = yr + absxr * -yi;
      lambda[0].re = (absxr * 0.0 + 1.0) / absxi;
      lambda[0].im = (0.0 - absxr) / absxi;
    } else if (absxi == brm) {
      if (yr > 0.0) {
        absxr = 0.5;
      } else {
        absxr = -0.5;
      }

      if (-yi > 0.0) {
        absxi = 0.5;
      } else {
        absxi = -0.5;
      }

      lambda[0].re = (absxr + 0.0 * absxi) / brm;
      lambda[0].im = (0.0 * absxr - absxi) / brm;
    } else {
      absxr = yr / -yi;
      absxi = -yi + absxr * yr;
      lambda[0].re = absxr / absxi;
      lambda[0].im = (absxr * 0.0 - 1.0) / absxi;
    }
  }

  if (lambdasquare[4].im == 0.0) {
    if (lambdasquare[4].re < 0.0) {
      yr = 0.0;
      yi = muDoubleScalarSqrt(-lambdasquare[4].re);
    } else {
      yr = muDoubleScalarSqrt(lambdasquare[4].re);
      yi = 0.0;
    }
  } else if (lambdasquare[4].re == 0.0) {
    if (lambdasquare[4].im < 0.0) {
      yr = muDoubleScalarSqrt(-lambdasquare[4].im / 2.0);
      yi = -yr;
    } else {
      yr = muDoubleScalarSqrt(lambdasquare[4].im / 2.0);
      yi = yr;
    }
  } else if (muDoubleScalarIsNaN(lambdasquare[4].re)) {
    yr = rtNaN;
    yi = rtNaN;
  } else if (muDoubleScalarIsNaN(lambdasquare[4].im)) {
    yr = rtNaN;
    yi = rtNaN;
  } else if (muDoubleScalarIsInf(lambdasquare[4].im)) {
    yr = muDoubleScalarAbs(lambdasquare[4].im);
    yi = lambdasquare[4].im;
  } else if (muDoubleScalarIsInf(lambdasquare[4].re)) {
    if (lambdasquare[4].re < 0.0) {
      yr = 0.0;
      yi = lambdasquare[4].im * -lambdasquare[4].re;
    } else {
      yr = lambdasquare[4].re;
      yi = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(lambdasquare[4].re);
    absxi = muDoubleScalarAbs(lambdasquare[4].im);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi = muDoubleScalarHypot(absxr, absxi * 0.5);
      if (absxi > absxr) {
        yr = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(absxr / absxi + 1.0);
      } else {
        yr = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
      }
    } else {
      yr = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) * 0.5);
    }

    if (lambdasquare[4].re > 0.0) {
      yi = 0.5 * (lambdasquare[4].im / yr);
    } else {
      if (lambdasquare[4].im < 0.0) {
        yi = -yr;
      } else {
        yi = yr;
      }

      yr = 0.5 * (lambdasquare[4].im / yi);
    }
  }

  if (-yi == 0.0) {
    lambda[1].re = 1.0 / yr;
    lambda[1].im = 0.0;
  } else if (yr == 0.0) {
    lambda[1].re = 0.0;
    lambda[1].im = -(1.0 / -yi);
  } else {
    brm = muDoubleScalarAbs(yr);
    absxi = muDoubleScalarAbs(-yi);
    if (brm > absxi) {
      absxr = -yi / yr;
      absxi = yr + absxr * -yi;
      lambda[1].re = (absxr * 0.0 + 1.0) / absxi;
      lambda[1].im = (0.0 - absxr) / absxi;
    } else if (absxi == brm) {
      if (yr > 0.0) {
        absxr = 0.5;
      } else {
        absxr = -0.5;
      }

      if (-yi > 0.0) {
        absxi = 0.5;
      } else {
        absxi = -0.5;
      }

      lambda[1].re = (absxr + 0.0 * absxi) / brm;
      lambda[1].im = (0.0 * absxr - absxi) / brm;
    } else {
      absxr = yr / -yi;
      absxi = -yi + absxr * yr;
      lambda[1].re = absxr / absxi;
      lambda[1].im = (absxr * 0.0 - 1.0) / absxi;
    }
  }

  if (lambdasquare[8].im == 0.0) {
    if (lambdasquare[8].re < 0.0) {
      yr = 0.0;
      yi = muDoubleScalarSqrt(-lambdasquare[8].re);
    } else {
      yr = muDoubleScalarSqrt(lambdasquare[8].re);
      yi = 0.0;
    }
  } else if (lambdasquare[8].re == 0.0) {
    if (lambdasquare[8].im < 0.0) {
      yr = muDoubleScalarSqrt(-lambdasquare[8].im / 2.0);
      yi = -yr;
    } else {
      yr = muDoubleScalarSqrt(lambdasquare[8].im / 2.0);
      yi = yr;
    }
  } else if (muDoubleScalarIsNaN(lambdasquare[8].re)) {
    yr = rtNaN;
    yi = rtNaN;
  } else if (muDoubleScalarIsNaN(lambdasquare[8].im)) {
    yr = rtNaN;
    yi = rtNaN;
  } else if (muDoubleScalarIsInf(lambdasquare[8].im)) {
    yr = muDoubleScalarAbs(lambdasquare[8].im);
    yi = lambdasquare[8].im;
  } else if (muDoubleScalarIsInf(lambdasquare[8].re)) {
    if (lambdasquare[8].re < 0.0) {
      yr = 0.0;
      yi = lambdasquare[8].im * -lambdasquare[8].re;
    } else {
      yr = lambdasquare[8].re;
      yi = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(lambdasquare[8].re);
    absxi = muDoubleScalarAbs(lambdasquare[8].im);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307))
    {
      absxr *= 0.5;
      absxi = muDoubleScalarHypot(absxr, absxi * 0.5);
      if (absxi > absxr) {
        yr = muDoubleScalarSqrt(absxi) * muDoubleScalarSqrt(absxr / absxi + 1.0);
      } else {
        yr = muDoubleScalarSqrt(absxi) * 1.4142135623730951;
      }
    } else {
      yr = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, absxi) + absxr) * 0.5);
    }

    if (lambdasquare[8].re > 0.0) {
      yi = 0.5 * (lambdasquare[8].im / yr);
    } else {
      if (lambdasquare[8].im < 0.0) {
        yi = -yr;
      } else {
        yi = yr;
      }

      yr = 0.5 * (lambdasquare[8].im / yi);
    }
  }

  if (-yi == 0.0) {
    lambda[2].re = 1.0 / yr;
    lambda[2].im = 0.0;
  } else if (yr == 0.0) {
    lambda[2].re = 0.0;
    lambda[2].im = -(1.0 / -yi);
  } else {
    brm = muDoubleScalarAbs(yr);
    absxi = muDoubleScalarAbs(-yi);
    if (brm > absxi) {
      absxr = -yi / yr;
      absxi = yr + absxr * -yi;
      lambda[2].re = (absxr * 0.0 + 1.0) / absxi;
      lambda[2].im = (0.0 - absxr) / absxi;
    } else if (absxi == brm) {
      if (yr > 0.0) {
        absxr = 0.5;
      } else {
        absxr = -0.5;
      }

      if (-yi > 0.0) {
        absxi = 0.5;
      } else {
        absxi = -0.5;
      }

      lambda[2].re = (absxr + 0.0 * absxi) / brm;
      lambda[2].im = (0.0 * absxr - absxi) / brm;
    } else {
      absxr = yr / -yi;
      absxi = -yi + absxr * yr;
      lambda[2].re = absxr / absxi;
      lambda[2].im = (absxr * 0.0 - 1.0) / absxi;
    }
  }

  for (jcol = 0; jcol < 3; jcol++) {
    ibmat = jcol * 3;
    lambdasquare[ibmat] = lambda[jcol];
    lambdasquare[ibmat + 1] = lambda[jcol];
    lambdasquare[ibmat + 2] = lambda[jcol];
  }

  for (i = 0; i < 9; i++) {
    absxi = lambdasquare[i].re;
    absxr = Q0[i].im;
    yr = lambdasquare[i].im;
    yi = Q0[i].re;
    lambdasquare[i].re = absxi * yi - yr * absxr;
    lambdasquare[i].im = absxi * absxr + yr * yi;
    c_F[i].re = F[i];
    c_F[i].im = 0.0;
  }

  for (i = 0; i < 3; i++) {
    absxi = lambdasquare[i].re;
    absxr = lambdasquare[i].im;
    yr = lambdasquare[i + 3].re;
    yi = lambdasquare[i + 3].im;
    brm = lambdasquare[i + 6].re;
    lambdasquare_re_tmp = lambdasquare[i + 6].im;
    for (i1 = 0; i1 < 3; i1++) {
      real_T c_lambdasquare_re_tmp;
      real_T d_lambdasquare_re_tmp;
      real_T e_lambdasquare_re_tmp;
      real_T f_lambdasquare_re_tmp;
      real_T g_lambdasquare_re_tmp;
      b_lambdasquare_re_tmp = Q0[i1].im;
      c_lambdasquare_re_tmp = Q0[i1].re;
      d_lambdasquare_re_tmp = Q0[i1 + 3].im;
      e_lambdasquare_re_tmp = Q0[i1 + 3].re;
      f_lambdasquare_re_tmp = Q0[i1 + 6].im;
      g_lambdasquare_re_tmp = Q0[i1 + 6].re;
      ibmat = i + 3 * i1;
      b_lambdasquare[ibmat].re = ((absxi * c_lambdasquare_re_tmp - absxr *
        b_lambdasquare_re_tmp) + (yr * e_lambdasquare_re_tmp - yi *
        d_lambdasquare_re_tmp)) + (brm * g_lambdasquare_re_tmp -
        lambdasquare_re_tmp * f_lambdasquare_re_tmp);
      b_lambdasquare[ibmat].im = ((absxi * b_lambdasquare_re_tmp + absxr *
        c_lambdasquare_re_tmp) + (yr * d_lambdasquare_re_tmp + yi *
        e_lambdasquare_re_tmp)) + (brm * f_lambdasquare_re_tmp +
        lambdasquare_re_tmp * g_lambdasquare_re_tmp);
    }
  }

  for (i = 0; i < 3; i++) {
    absxr = c_F[i].re;
    yr = c_F[i].im;
    yi = c_F[i + 3].re;
    brm = c_F[i + 3].im;
    lambdasquare_re_tmp = c_F[i + 6].re;
    b_lambdasquare_re_tmp = c_F[i + 6].im;
    for (i1 = 0; i1 < 3; i1++) {
      ibmat = 3 * i1 + 1;
      jcol = 3 * i1 + 2;
      absxi = ((absxr * b_lambdasquare[3 * i1].re - yr * b_lambdasquare[3 * i1].
                im) + (yi * b_lambdasquare[ibmat].re - brm *
                       b_lambdasquare[ibmat].im)) + (lambdasquare_re_tmp *
        b_lambdasquare[jcol].re - b_lambdasquare_re_tmp * b_lambdasquare[jcol].
        im);
      R[i + 3 * i1] = absxi;
      b_F[i1 + 3 * i] = absxi;
    }
  }

  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      int32_T V_tmp;
      ibmat = 3 * i1 + 1;
      jcol = 3 * i1 + 2;
      V_tmp = i + 3 * i1;
      V[V_tmp] = (F[i] * b_F[3 * i1] + F[i + 3] * b_F[ibmat]) + F[i + 6] *
        b_F[jcol];
      S[V_tmp] = (b_F[i] * F[3 * i1] + b_F[i + 3] * F[ibmat]) + b_F[i + 6] *
        F[jcol];
    }
  }
}

static real_T VonMises(const emlrtStack *sp, const emxArray_real_T *S11, const
  emxArray_real_T *S22, const emxArray_real_T *S33, const emxArray_real_T *S12,
  const emxArray_real_T *S23, const emxArray_real_T *S13, emxArray_real_T *Svm)
{
  __m128d r2;
  __m128d r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_real_T *r;
  emxArray_real_T *r4;
  emxArray_real_T *r6;
  const real_T *S11_data;
  const real_T *S12_data;
  const real_T *S13_data;
  const real_T *S22_data;
  const real_T *S23_data;
  const real_T *S33_data;
  real_T Svmm;
  real_T s;
  real_T *Svm_data;
  real_T *r1;
  real_T *r5;
  real_T *r7;
  int32_T ib;
  int32_T inb;
  int32_T k;
  int32_T nleft;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  S13_data = S13->data;
  S23_data = S23->data;
  S12_data = S12->data;
  S33_data = S33->data;
  S22_data = S22->data;
  S11_data = S11->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);

  /* ------------------------------------------------ nonlinear strain operator */
  if ((S11->size[0] != S22->size[0]) && ((S11->size[0] != 1) && (S22->size[0] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(S11->size[0], S22->size[0], &ad_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if ((S22->size[0] != S33->size[0]) && ((S22->size[0] != 1) && (S33->size[0] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(S22->size[0], S33->size[0], &yc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &dl_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  if (S11->size[0] == S22->size[0]) {
    ib = Svm->size[0];
    Svm->size[0] = S11->size[0];
    emxEnsureCapacity_real_T(&b_st, Svm, ib, &rf_emlrtRTEI);
    Svm_data = Svm->data;
    nx = S11->size[0];
    for (ib = 0; ib < nx; ib++) {
      s = S11_data[ib] - S22_data[ib];
      Svm_data[ib] = s * s;
    }
  } else {
    c_st.site = &im_emlrtRSI;
    f_binary_expand_op(&c_st, Svm, S11, S22);
    Svm_data = Svm->data;
  }

  st.site = &dl_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  emxInit_real_T(&b_st, &r, 1, &rf_emlrtRTEI);
  if (S22->size[0] == S33->size[0]) {
    ib = r->size[0];
    r->size[0] = S22->size[0];
    emxEnsureCapacity_real_T(&b_st, r, ib, &sf_emlrtRTEI);
    r1 = r->data;
    nx = S22->size[0];
    for (ib = 0; ib < nx; ib++) {
      s = S22_data[ib] - S33_data[ib];
      r1[ib] = s * s;
    }
  } else {
    c_st.site = &im_emlrtRSI;
    f_binary_expand_op(&c_st, r, S22, S33);
    r1 = r->data;
  }

  if ((Svm->size[0] != r->size[0]) && ((Svm->size[0] != 1) && (r->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Svm->size[0], r->size[0], &vc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if ((S33->size[0] != S11->size[0]) && ((S33->size[0] != 1) && (S11->size[0] !=
        1))) {
    emlrtDimSizeImpxCheckR2021b(S33->size[0], S11->size[0], &xc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (Svm->size[0] == r->size[0]) {
    nx = Svm->size[0];
    inb = (Svm->size[0] / 2) << 1;
    nleft = inb - 2;
    for (ib = 0; ib <= nleft; ib += 2) {
      r2 = _mm_loadu_pd(&Svm_data[ib]);
      r3 = _mm_loadu_pd(&r1[ib]);
      _mm_storeu_pd(&Svm_data[ib], _mm_add_pd(r2, r3));
    }

    for (ib = inb; ib < nx; ib++) {
      Svm_data[ib] += r1[ib];
    }
  } else {
    st.site = &dl_emlrtRSI;
    plus(&st, Svm, r);
    Svm_data = Svm->data;
  }

  st.site = &dl_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  if (S33->size[0] == S11->size[0]) {
    ib = r->size[0];
    r->size[0] = S33->size[0];
    emxEnsureCapacity_real_T(&b_st, r, ib, &tf_emlrtRTEI);
    r1 = r->data;
    nx = S33->size[0];
    for (ib = 0; ib < nx; ib++) {
      s = S33_data[ib] - S11_data[ib];
      r1[ib] = s * s;
    }
  } else {
    c_st.site = &im_emlrtRSI;
    f_binary_expand_op(&c_st, r, S33, S11);
    r1 = r->data;
  }

  if ((Svm->size[0] != r->size[0]) && ((Svm->size[0] != 1) && (r->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Svm->size[0], r->size[0], &vc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  st.site = &el_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  emxInit_real_T(&b_st, &r4, 1, &uf_emlrtRTEI);
  ib = r4->size[0];
  r4->size[0] = S12->size[0];
  emxEnsureCapacity_real_T(&b_st, r4, ib, &uf_emlrtRTEI);
  r5 = r4->data;
  nx = S12->size[0];
  for (ib = 0; ib < nx; ib++) {
    s = S12_data[ib];
    r5[ib] = s * s;
  }

  st.site = &el_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  emxInit_real_T(&b_st, &r6, 1, &uf_emlrtRTEI);
  ib = r6->size[0];
  r6->size[0] = S23->size[0];
  emxEnsureCapacity_real_T(&b_st, r6, ib, &vf_emlrtRTEI);
  r7 = r6->data;
  nx = S23->size[0];
  for (ib = 0; ib < nx; ib++) {
    s = S23_data[ib];
    r7[ib] = s * s;
  }

  if ((r4->size[0] != r6->size[0]) && ((r4->size[0] != 1) && (r6->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r4->size[0], r6->size[0], &wc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (r4->size[0] == r6->size[0]) {
    nx = r4->size[0];
    inb = (r4->size[0] / 2) << 1;
    nleft = inb - 2;
    for (ib = 0; ib <= nleft; ib += 2) {
      r2 = _mm_loadu_pd(&r5[ib]);
      r3 = _mm_loadu_pd(&r7[ib]);
      _mm_storeu_pd(&r5[ib], _mm_add_pd(r2, r3));
    }

    for (ib = inb; ib < nx; ib++) {
      r5[ib] += r7[ib];
    }
  } else {
    st.site = &el_emlrtRSI;
    plus(&st, r4, r6);
    r5 = r4->data;
  }

  st.site = &el_emlrtRSI;
  b_st.site = &hf_emlrtRSI;
  ib = r6->size[0];
  r6->size[0] = S13->size[0];
  emxEnsureCapacity_real_T(&b_st, r6, ib, &wf_emlrtRTEI);
  r7 = r6->data;
  nx = S13->size[0];
  for (ib = 0; ib < nx; ib++) {
    s = S13_data[ib];
    r7[ib] = s * s;
  }

  if ((r4->size[0] != r6->size[0]) && ((r4->size[0] != 1) && (r6->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(r4->size[0], r6->size[0], &wc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (Svm->size[0] == r->size[0]) {
    nx = Svm->size[0];
    inb = (Svm->size[0] / 2) << 1;
    nleft = inb - 2;
    for (ib = 0; ib <= nleft; ib += 2) {
      r2 = _mm_loadu_pd(&Svm_data[ib]);
      r3 = _mm_loadu_pd(&r1[ib]);
      _mm_storeu_pd(&Svm_data[ib], _mm_add_pd(r2, r3));
    }

    for (ib = inb; ib < nx; ib++) {
      Svm_data[ib] += r1[ib];
    }
  } else {
    st.site = &dl_emlrtRSI;
    plus(&st, Svm, r);
    Svm_data = Svm->data;
  }

  emxFree_real_T(sp, &r);
  if (r4->size[0] == r6->size[0]) {
    nx = r4->size[0];
    inb = (r4->size[0] / 2) << 1;
    nleft = inb - 2;
    for (ib = 0; ib <= nleft; ib += 2) {
      r2 = _mm_loadu_pd(&r5[ib]);
      r3 = _mm_loadu_pd(&r7[ib]);
      _mm_storeu_pd(&r5[ib], _mm_mul_pd(_mm_set1_pd(6.0), _mm_add_pd(r2, r3)));
    }

    for (ib = inb; ib < nx; ib++) {
      r5[ib] = 6.0 * (r5[ib] + r7[ib]);
    }
  } else {
    st.site = &vl_emlrtRSI;
    e_binary_expand_op(&st, r4, r6);
    r5 = r4->data;
  }

  emxFree_real_T(sp, &r6);
  if ((Svm->size[0] != r4->size[0]) && ((Svm->size[0] != 1) && (r4->size[0] != 1)))
  {
    emlrtDimSizeImpxCheckR2021b(Svm->size[0], r4->size[0], &vc_emlrtECI,
      (emlrtConstCTX)sp);
  }

  if (Svm->size[0] == r4->size[0]) {
    nx = Svm->size[0];
    inb = (Svm->size[0] / 2) << 1;
    nleft = inb - 2;
    for (ib = 0; ib <= nleft; ib += 2) {
      r2 = _mm_loadu_pd(&Svm_data[ib]);
      r3 = _mm_loadu_pd(&r5[ib]);
      _mm_storeu_pd(&Svm_data[ib], _mm_mul_pd(_mm_set1_pd(0.5), _mm_add_pd(r2,
        r3)));
    }

    for (ib = inb; ib < nx; ib++) {
      Svm_data[ib] = 0.5 * (Svm_data[ib] + r5[ib]);
    }
  } else {
    st.site = &vl_emlrtRSI;
    d_binary_expand_op(&st, Svm, r4);
    Svm_data = Svm->data;
  }

  emxFree_real_T(sp, &r4);
  st.site = &dl_emlrtRSI;
  p = false;
  ib = Svm->size[0];
  for (k = 0; k < ib; k++) {
    if (p || (Svm_data[k] < 0.0)) {
      p = true;
    }
  }

  if (p) {
    emlrtErrorWithMessageIdR2018a(&st, &j_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  b_st.site = &gl_emlrtRSI;
  nx = Svm->size[0];
  c_st.site = &fe_emlrtRSI;
  if (Svm->size[0] > 2147483646) {
    d_st.site = &db_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  inb = (Svm->size[0] / 2) << 1;
  nleft = inb - 2;
  for (k = 0; k <= nleft; k += 2) {
    r2 = _mm_loadu_pd(&Svm_data[k]);
    _mm_storeu_pd(&Svm_data[k], _mm_sqrt_pd(r2));
  }

  for (k = inb; k < nx; k++) {
    Svm_data[k] = muDoubleScalarSqrt(Svm_data[k]);
  }

  st.site = &fl_emlrtRSI;
  b_st.site = &hl_emlrtRSI;
  c_st.site = &il_emlrtRSI;
  if (Svm->size[0] == 0) {
    s = 0.0;
  } else {
    d_st.site = &jl_emlrtRSI;
    e_st.site = &kl_emlrtRSI;
    if (Svm->size[0] < 4096) {
      f_st.site = &ll_emlrtRSI;
      s = sumColumnB(&f_st, Svm, Svm->size[0]);
    } else {
      nx = (int32_T)((uint32_T)Svm->size[0] >> 12);
      inb = nx << 12;
      nleft = Svm->size[0] - inb;
      s = sumColumnB4(Svm, 1);
      for (ib = 2; ib <= nx; ib++) {
        s += sumColumnB4(Svm, ((ib - 1) << 12) + 1);
      }

      if (nleft > 0) {
        f_st.site = &ml_emlrtRSI;
        s += b_sumColumnB(&f_st, Svm, nleft, inb + 1);
      }
    }
  }

  Svmm = s / (real_T)Svm->size[0];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return Svmm;
}

static void b_plus(const emlrtStack *sp, emxArray_real_T *in1, const
                   emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &ag_emlrtRTEI);
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }

  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = loop_ub;
  if (in2->size[1] == 1) {
    b_loop_ub = in1->size[1];
  } else {
    b_loop_ub = in2->size[1];
  }

  b_in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, i, &ag_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (in2->size[0] != 1);
  stride_1_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in1_data[i1 + b_in1->size[0] * i] = in1_data[i1 * stride_0_0 + in1->
        size[0] * aux_0_1] + in2_data[i1 * stride_1_0 + in2->size[0] * aux_1_1];
    }

    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }

  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in1->size[0];
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &ag_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in1_data[i1 + b_in1->size[0] * i];
    }
  }

  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void c_binary_expand_op(real_T in1[9], const emxArray_real_T *in2, const
  int8_T in3[9])
{
  const real_T *in2_data;
  int32_T aux_0_1;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_0_1;
  in2_data = in2->data;
  stride_0_0 = (in2->size[1] != 1);
  stride_0_1 = (in2->size[0] != 1);
  aux_0_1 = 0;
  for (i = 0; i < 3; i++) {
    int32_T i1;
    in1[3 * i] = in2_data[aux_0_1] + (real_T)in3[3 * i];
    i1 = 3 * i + 1;
    in1[i1] = in2_data[aux_0_1 + in2->size[0] * stride_0_0] + (real_T)in3[i1];
    i1 = 3 * i + 2;
    in1[i1] = in2_data[aux_0_1 + in2->size[0] * (stride_0_0 << 1)] + (real_T)
      in3[i1];
    aux_0_1 += stride_0_1;
  }
}

static void c_plus(const emlrtStack *sp, emxArray_real_T *in1, const
                   emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &me_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (in2->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in2->size[1];
  }

  b_in1->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, i, &me_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_1 = (in1->size[1] != 1);
  stride_1_1 = (in2->size[1] != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_1] + in2_data[i * stride_1_1];
  }

  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &me_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }

  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, (emlrtConstCTX)sp);
  } else {
    uint32_T tempAbsQuotient;
    uint32_T u;
    if (numerator < 0) {
      tempAbsQuotient = ~(uint32_T)numerator + 1U;
    } else {
      tempAbsQuotient = (uint32_T)numerator;
    }

    if (denominator < 0) {
      u = ~(uint32_T)denominator + 1U;
    } else {
      u = (uint32_T)denominator;
    }

    tempAbsQuotient /= u;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

static void plus(const emlrtStack *sp, emxArray_real_T *in1, const
                 emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &yf_emlrtRTEI);
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }

  i = b_in1->size[0];
  b_in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, i, &yf_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] + in2_data[i * stride_1_0];
  }

  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &yf_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }

  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void LocalsNHFast(const emlrtStack *sp, const emxArray_real_T *eNode, const
                  emxArray_real_T *eDof, real_T dV, real_T Rb, real_T Dim, const
                  emxArray_real_T *Node0, const emxArray_real_T *Ns, const
                  emxArray_real_T *dNdxis, const emxArray_real_T *W, const
                  emxArray_real_T *Utmp, const emxArray_real_T *dUtmp, real_T
                  Rho, real_T Zeta, const emxArray_real_T *Grav, real_T Mu,
                  real_T Lambda, emxArray_real_T *Fe, emxArray_real_T *Fb,
                  emxArray_real_T *Qe, emxArray_real_T *Me, emxArray_real_T *Ce,
                  emxArray_real_T *Ke, emxArray_real_T *Kte, emxArray_real_T
                  *Svme, emxArray_real_T *SS, emxArray_real_T *EE,
                  emxArray_real_T *Te, real_T *Ve, real_T *Vge, emxArray_real_T *
                  Tke, real_T Re[9], real_T Ue[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *b_eDof;
  emxArray_real_T b_De_data;
  emxArray_real_T b_Et_data;
  emxArray_real_T b_Ge_data;
  emxArray_real_T b_Se_data;
  emxArray_real_T c_De_data;
  emxArray_real_T c_Et_data;
  emxArray_real_T c_Ge_data;
  emxArray_real_T c_Se_data;
  emxArray_real_T d_De_data;
  emxArray_real_T e_De_data;
  emxArray_real_T f_De_data;
  emxArray_real_T g_De_data;
  emxArray_real_T *Bg;
  emxArray_real_T *Delta;
  emxArray_real_T *EGP;
  emxArray_real_T *J0;
  emxArray_real_T *N;
  emxArray_real_T *NN;
  emxArray_real_T *NNe;
  emxArray_real_T *SGP;
  emxArray_real_T *b_SS;
  emxArray_real_T *b_dNdxis;
  emxArray_real_T *c_SS;
  emxArray_real_T *c_dNdxis;
  emxArray_real_T *dDelta;
  emxArray_real_T *dNdx;
  emxArray_real_T *dNdxi;
  emxArray_real_T *d_SS;
  emxArray_real_T *d_dNdxis;
  emxArray_real_T *r;
  emxArray_real_T *y;
  emxArray_real_T *y_tmp;
  real_T Ge_data[81];
  real_T De_data[36];
  real_T Elagran[9];
  real_T R[9];
  real_T RRe[9];
  real_T a__1[9];
  real_T Et_data[6];
  real_T Se_data[6];
  const real_T *Node0_data;
  const real_T *Ns_data;
  const real_T *Utmp_data;
  const real_T *W_data;
  const real_T *dNdxis_data;
  const real_T *dUtmp_data;
  const real_T *eDof_data;
  const real_T *eNode_data;
  real_T Psi;
  real_T b_W;
  real_T dJ;
  real_T *Ce_data;
  real_T *Delta_data;
  real_T *EGP_data;
  real_T *Fb_data;
  real_T *Fe_data;
  real_T *J0_data;
  real_T *Ke_data;
  real_T *Kte_data;
  real_T *Me_data;
  real_T *NNe_data;
  real_T *N_data;
  real_T *Qe_data;
  real_T *SGP_data;
  real_T *Te_data;
  real_T *b_dNdxis_data;
  real_T *c_dNdxis_data;
  real_T *dDelta_data;
  real_T *dNdxi_data;
  int32_T De_size[2];
  int32_T Ge_size[2];
  int32_T Et_size;
  int32_T Nshp;
  int32_T Se_size;
  int32_T b_loop_ub;
  int32_T b_loop_ub_tmp;
  int32_T c_loop_ub_tmp;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T n;
  int32_T q;
  int32_T *b_eDof_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  dUtmp_data = dUtmp->data;
  Utmp_data = Utmp->data;
  W_data = W->data;
  dNdxis_data = dNdxis->data;
  Ns_data = Ns->data;
  Node0_data = Node0->data;
  eDof_data = eDof->data;
  eNode_data = eNode->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);

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
  dJ = Dim * (real_T)n;
  if (!(dJ >= 0.0)) {
    emlrtNonNegativeCheckR2012b(dJ, &j_emlrtDCI, (emlrtConstCTX)sp);
  }

  Psi = (int32_T)muDoubleScalarFloor(dJ);
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &i_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Fe->size[0];
  loop_ub = (int32_T)dJ;
  Fe->size[0] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Fe, i, &o_emlrtRTEI);
  Fe_data = Fe->data;
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &i_emlrtDCI, (emlrtConstCTX)sp);
  }

  for (i = 0; i < loop_ub; i++) {
    Fe_data[i] = 0.0;
  }

  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &k_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Fb->size[0];
  Fb->size[0] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Fb, i, &p_emlrtRTEI);
  Fb_data = Fb->data;
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &k_emlrtDCI, (emlrtConstCTX)sp);
  }

  for (i = 0; i < loop_ub; i++) {
    Fb_data[i] = 0.0;
  }

  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &l_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Te->size[0];
  Te->size[0] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Te, i, &q_emlrtRTEI);
  Te_data = Te->data;
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &l_emlrtDCI, (emlrtConstCTX)sp);
  }

  for (i = 0; i < loop_ub; i++) {
    Te_data[i] = 0.0;
  }

  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Me->size[0] * Me->size[1];
  Me->size[0] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Me, i, &r_emlrtRTEI);
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &b_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Me->size[0] * Me->size[1];
  Me->size[1] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Me, i, &r_emlrtRTEI);
  Me_data = Me->data;
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &m_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (!(dJ >= 0.0)) {
    emlrtNonNegativeCheckR2012b(dJ, &n_emlrtDCI, (emlrtConstCTX)sp);
  }

  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &m_emlrtDCI, (emlrtConstCTX)sp);
  }

  loop_ub_tmp = (int32_T)dJ * (int32_T)dJ;
  for (i = 0; i < loop_ub_tmp; i++) {
    Me_data[i] = 0.0;
  }

  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &c_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Ce->size[0] * Ce->size[1];
  Ce->size[0] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Ce, i, &s_emlrtRTEI);
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &d_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Ce->size[0] * Ce->size[1];
  Ce->size[1] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Ce, i, &s_emlrtRTEI);
  Ce_data = Ce->data;
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &o_emlrtDCI, (emlrtConstCTX)sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    Ce_data[i] = 0.0;
  }

  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &e_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Ke->size[0] * Ke->size[1];
  Ke->size[0] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Ke, i, &t_emlrtRTEI);
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &f_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Ke->size[0] * Ke->size[1];
  Ke->size[1] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Ke, i, &t_emlrtRTEI);
  Ke_data = Ke->data;
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &p_emlrtDCI, (emlrtConstCTX)sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    Ke_data[i] = 0.0;
  }

  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &g_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Kte->size[0] * Kte->size[1];
  Kte->size[0] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Kte, i, &u_emlrtRTEI);
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &h_emlrtDCI, (emlrtConstCTX)sp);
  }

  i = Kte->size[0] * Kte->size[1];
  Kte->size[1] = (int32_T)dJ;
  emxEnsureCapacity_real_T(sp, Kte, i, &u_emlrtRTEI);
  Kte_data = Kte->data;
  if (dJ != Psi) {
    emlrtIntegerCheckR2012b(dJ, &q_emlrtDCI, (emlrtConstCTX)sp);
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    Kte_data[i] = 0.0;
  }

  emxInit_real_T(sp, &SGP, 2, &v_emlrtRTEI);
  i = SGP->size[0] * SGP->size[1];
  SGP->size[0] = W->size[0];
  SGP->size[1] = 6;
  emxEnsureCapacity_real_T(sp, SGP, i, &v_emlrtRTEI);
  SGP_data = SGP->data;
  loop_ub_tmp = W->size[0] * 6;
  for (i = 0; i < loop_ub_tmp; i++) {
    SGP_data[i] = 0.0;
  }

  emxInit_real_T(sp, &EGP, 2, &w_emlrtRTEI);
  i = EGP->size[0] * EGP->size[1];
  EGP->size[0] = W->size[0];
  EGP->size[1] = 6;
  emxEnsureCapacity_real_T(sp, EGP, i, &w_emlrtRTEI);
  EGP_data = EGP->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    EGP_data[i] = 0.0;
  }

  memset(&RRe[0], 0, 9U * sizeof(real_T));
  memset(&Ue[0], 0, 9U * sizeof(real_T));
  i = Qe->size[0];
  Qe->size[0] = n;
  emxEnsureCapacity_real_T(sp, Qe, i, &x_emlrtRTEI);
  Qe_data = Qe->data;
  for (i = 0; i < n; i++) {
    Qe_data[i] = 1.0;
  }

  *Ve = 0.0;
  *Vge = 0.0;
  if (Ns->size[2] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, Ns->size[2], &emlrtBCI, (emlrtConstCTX)
      sp);
  }

  Nshp = Ns->size[0];
  emxInit_real_T(sp, &NNe, 2, &y_emlrtRTEI);
  i = NNe->size[0] * NNe->size[1];
  NNe->size[0] = W->size[0];
  NNe->size[1] = Ns->size[0];
  emxEnsureCapacity_real_T(sp, NNe, i, &y_emlrtRTEI);
  NNe_data = NNe->data;
  loop_ub_tmp = W->size[0] * Ns->size[0];
  for (i = 0; i < loop_ub_tmp; i++) {
    NNe_data[i] = 0.0;
  }

  if (Dim == 2.0) {
    Et_size = 3;
    Et_data[0] = dV;
    Et_data[1] = dV;
    Et_data[2] = 0.0;
  } else {
    Et_size = 6;
    Et_data[0] = dV;
    Et_data[1] = dV;
    Et_data[2] = dV;
    Et_data[3] = 0.0;
    Et_data[4] = 0.0;
    Et_data[5] = 0.0;
  }

  /*  get displacement field */
  emxInit_int32_T(sp, &b_eDof, 2, &ab_emlrtRTEI);
  i = b_eDof->size[0] * b_eDof->size[1];
  b_eDof->size[0] = eDof->size[0];
  b_eDof->size[1] = eDof->size[1];
  emxEnsureCapacity_int32_T(sp, b_eDof, i, &ab_emlrtRTEI);
  b_eDof_data = b_eDof->data;
  b_loop_ub_tmp = eDof->size[0] * eDof->size[1];
  for (i = 0; i < b_loop_ub_tmp; i++) {
    dJ = eDof_data[i];
    if (dJ != (int32_T)muDoubleScalarFloor(dJ)) {
      emlrtIntegerCheckR2012b(dJ, &r_emlrtDCI, (emlrtConstCTX)sp);
    }

    if (((int32_T)dJ < 1) || ((int32_T)dJ > Utmp->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)dJ, 1, Utmp->size[0], &p_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_eDof_data[i] = (int32_T)dJ;
  }

  emxInit_real_T(sp, &Delta, 2, &bb_emlrtRTEI);
  i = Delta->size[0] * Delta->size[1];
  Delta->size[0] = b_loop_ub_tmp;
  Delta->size[1] = Utmp->size[1];
  emxEnsureCapacity_real_T(sp, Delta, i, &bb_emlrtRTEI);
  Delta_data = Delta->data;
  loop_ub = Utmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
      Delta_data[i1 + Delta->size[0] * i] = Utmp_data[(b_eDof_data[i1] +
        Utmp->size[0] * i) - 1];
    }
  }

  i = b_eDof->size[0] * b_eDof->size[1];
  b_eDof->size[0] = eDof->size[0];
  b_eDof->size[1] = eDof->size[1];
  emxEnsureCapacity_int32_T(sp, b_eDof, i, &cb_emlrtRTEI);
  b_eDof_data = b_eDof->data;
  for (i = 0; i < b_loop_ub_tmp; i++) {
    i1 = (int32_T)eDof_data[i];
    if ((i1 < 1) || (i1 > dUtmp->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, dUtmp->size[0], &q_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_eDof_data[i] = i1;
  }

  emxInit_real_T(sp, &dDelta, 2, &db_emlrtRTEI);
  i = dDelta->size[0] * dDelta->size[1];
  dDelta->size[0] = b_loop_ub_tmp;
  dDelta->size[1] = dUtmp->size[1];
  emxEnsureCapacity_real_T(sp, dDelta, i, &db_emlrtRTEI);
  dDelta_data = dDelta->data;
  loop_ub = dUtmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_loop_ub_tmp; i1++) {
      dDelta_data[i1 + dDelta->size[0] * i] = dUtmp_data[(b_eDof_data[i1] +
        dUtmp->size[0] * i) - 1];
    }
  }

  /*  quadrature loop */
  i = W->size[0];
  emxInit_real_T(sp, &N, 1, &fb_emlrtRTEI);
  emxInit_real_T(sp, &dNdxi, 2, &gb_emlrtRTEI);
  emxInit_real_T(sp, &J0, 2, &yb_emlrtRTEI);
  emxInit_real_T(sp, &dNdx, 2, &ac_emlrtRTEI);
  emxInit_real_T(sp, &Bg, 2, &bc_emlrtRTEI);
  emxInit_real_T(sp, &NN, 2, &bc_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &cc_emlrtRTEI);
  emxInit_real_T(sp, &y, 2, &dc_emlrtRTEI);
  emxInit_real_T(sp, &y_tmp, 2, &tb_emlrtRTEI);
  emxInit_real_T(sp, &b_dNdxis, 1, &ib_emlrtRTEI);
  emxInit_real_T(sp, &c_dNdxis, 1, &jb_emlrtRTEI);
  emxInit_real_T(sp, &d_dNdxis, 2, &rb_emlrtRTEI);
  for (q = 0; q < i; q++) {
    __m128d r1;
    __m128d r2;
    __m128d r3;
    __m128d r4;
    __m128d r5;
    real_T D0[36];
    real_T F[9];
    real_T S0[9];
    real_T a[9];
    real_T b_S0[6];
    real_T b_y_tmp;
    real_T y_tmp_tmp;
    int32_T b_scalarLB_tmp;
    int32_T d_loop_ub_tmp;
    int32_T e_loop_ub_tmp;
    int32_T input_sizes_idx_1_tmp;
    int32_T scalarLB_tmp;
    int32_T vectorUB_tmp;

    /*  extract shape-functions */
    if (q + 1 > Ns->size[2]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, Ns->size[2], &b_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    loop_ub = Ns->size[0];
    i1 = N->size[0];
    N->size[0] = Ns->size[0];
    emxEnsureCapacity_real_T(sp, N, i1, &fb_emlrtRTEI);
    N_data = N->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      N_data[i1] = Ns_data[i1 + Ns->size[0] * q];
    }

    if (q + 1 > dNdxis->size[2]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, dNdxis->size[2], &c_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i1 = dNdxi->size[0] * dNdxi->size[1];
    dNdxi->size[0] = dNdxis->size[0];
    loop_ub = dNdxis->size[1];
    dNdxi->size[1] = dNdxis->size[1];
    emxEnsureCapacity_real_T(sp, dNdxi, i1, &gb_emlrtRTEI);
    dNdxi_data = dNdxi->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = dNdxis->size[0];
      for (c_loop_ub_tmp = 0; c_loop_ub_tmp < b_loop_ub; c_loop_ub_tmp++) {
        dNdxi_data[c_loop_ub_tmp + dNdxi->size[0] * i1] = dNdxis_data
          [(c_loop_ub_tmp + dNdxis->size[0] * i1) + dNdxis->size[0] *
          dNdxis->size[1] * q];
      }
    }

    if ((Ns->size[0] == 3) && (Dim == 3.0)) {
      real_T reshapes_f2[3];
      if (dNdxis->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, dNdxis->size[1], &d_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      if (dNdxis->size[1] < 2) {
        emlrtDynamicBoundsCheckR2012b(2, 1, dNdxis->size[1], &e_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      loop_ub = dNdxis->size[0];
      i1 = b_dNdxis->size[0];
      b_dNdxis->size[0] = dNdxis->size[0];
      emxEnsureCapacity_real_T(sp, b_dNdxis, i1, &ib_emlrtRTEI);
      b_dNdxis_data = b_dNdxis->data;
      i1 = c_dNdxis->size[0];
      c_dNdxis->size[0] = dNdxis->size[0];
      emxEnsureCapacity_real_T(sp, c_dNdxis, i1, &jb_emlrtRTEI);
      c_dNdxis_data = c_dNdxis->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_dNdxis_data[i1] = dNdxis_data[i1 + dNdxis->size[0] * dNdxis->size[1] *
          q];
        c_dNdxis_data[i1] = dNdxis_data[(i1 + dNdxis->size[0]) + dNdxis->size[0]
          * dNdxis->size[1] * q];
      }

      st.site = &emlrtRSI;
      cross(&st, b_dNdxis, c_dNdxis, reshapes_f2);
      st.site = &b_emlrtRSI;
      b_st.site = &x_emlrtRSI;
      c_st.site = &y_emlrtRSI;
      if ((dNdxis->size[0] != 3) && ((dNdxis->size[0] != 0) && (dNdxis->size[1]
            != 0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      loop_ub = dNdxis->size[1];
      if ((dNdxis->size[0] != 0) && (dNdxis->size[1] != 0)) {
        input_sizes_idx_1_tmp = dNdxis->size[1];
      } else {
        input_sizes_idx_1_tmp = 0;
      }

      i1 = d_dNdxis->size[0] * d_dNdxis->size[1];
      d_dNdxis->size[0] = dNdxis->size[0];
      d_dNdxis->size[1] = dNdxis->size[1];
      emxEnsureCapacity_real_T(sp, d_dNdxis, i1, &rb_emlrtRTEI);
      b_dNdxis_data = d_dNdxis->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = dNdxis->size[0];
        for (c_loop_ub_tmp = 0; c_loop_ub_tmp < b_loop_ub; c_loop_ub_tmp++) {
          b_dNdxis_data[c_loop_ub_tmp + d_dNdxis->size[0] * i1] = dNdxis_data
            [(c_loop_ub_tmp + dNdxis->size[0] * i1) + dNdxis->size[0] *
            dNdxis->size[1] * q];
        }
      }

      i1 = dNdxi->size[0] * dNdxi->size[1];
      dNdxi->size[0] = 3;
      dNdxi->size[1] = input_sizes_idx_1_tmp + 1;
      emxEnsureCapacity_real_T(sp, dNdxi, i1, &sb_emlrtRTEI);
      dNdxi_data = dNdxi->data;
      for (i1 = 0; i1 < input_sizes_idx_1_tmp; i1++) {
        dNdxi_data[dNdxi->size[0] * i1] = b_dNdxis_data[3 * i1];
        dNdxi_data[dNdxi->size[0] * i1 + 1] = b_dNdxis_data[3 * i1 + 1];
        dNdxi_data[dNdxi->size[0] * i1 + 2] = b_dNdxis_data[3 * i1 + 2];
      }

      dNdxi_data[dNdxi->size[0] * input_sizes_idx_1_tmp] = reshapes_f2[0];
      dNdxi_data[dNdxi->size[0] * input_sizes_idx_1_tmp + 1] = reshapes_f2[1];
      dNdxi_data[dNdxi->size[0] * input_sizes_idx_1_tmp + 2] = reshapes_f2[2];
    }

    i1 = b_eDof->size[0] * b_eDof->size[1];
    b_eDof->size[0] = eNode->size[0];
    b_eDof->size[1] = eNode->size[1];
    emxEnsureCapacity_int32_T(sp, b_eDof, i1, &hb_emlrtRTEI);
    b_eDof_data = b_eDof->data;
    d_loop_ub_tmp = eNode->size[0] * eNode->size[1];
    for (i1 = 0; i1 < d_loop_ub_tmp; i1++) {
      dJ = eNode_data[i1];
      if (dJ != (int32_T)muDoubleScalarFloor(dJ)) {
        emlrtIntegerCheckR2012b(dJ, &s_emlrtDCI, (emlrtConstCTX)sp);
      }

      if (((int32_T)dJ < 1) || ((int32_T)dJ > Node0->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)dJ, 1, Node0->size[0],
          &r_emlrtBCI, (emlrtConstCTX)sp);
      }

      b_eDof_data[i1] = (int32_T)dJ;
    }

    i1 = d_dNdxis->size[0] * d_dNdxis->size[1];
    d_dNdxis->size[0] = d_loop_ub_tmp;
    loop_ub = Node0->size[1];
    d_dNdxis->size[1] = Node0->size[1];
    emxEnsureCapacity_real_T(sp, d_dNdxis, i1, &lb_emlrtRTEI);
    b_dNdxis_data = d_dNdxis->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (c_loop_ub_tmp = 0; c_loop_ub_tmp < d_loop_ub_tmp; c_loop_ub_tmp++) {
        b_dNdxis_data[c_loop_ub_tmp + d_dNdxis->size[0] * i1] = Node0_data
          [(b_eDof_data[c_loop_ub_tmp] + Node0->size[0] * i1) - 1];
      }
    }

    st.site = &c_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, d_dNdxis, dNdxi, d_loop_ub_tmp, dNdxi->size[0]);
    b_st.site = &ab_emlrtRSI;
    mtimes(&b_st, d_dNdxis, dNdxi, J0);
    st.site = &d_emlrtRSI;
    if (J0->size[1] != dNdxi->size[1]) {
      emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:dimagree",
        "MATLAB:dimagree", 0);
    }

    b_st.site = &fb_emlrtRSI;
    mrdiv(&b_st, dNdxi, J0, dNdx);
    st.site = &e_emlrtRSI;
    dJ = det(&st, J0);

    /*  deformation gradient    */
    st.site = &f_emlrtRSI;
    DeformationGradient(&st, Delta, dNdx, Dim, F);

    /*  polar decompostion */
    st.site = &g_emlrtRSI;
    PolarDecomposition(&st, F, R, Elagran, a__1);

    /*  increase robustness low density */
    eye(a__1);

    /*  robust deform */
    /* F = R*Q; */
    /*  get internal stress matrix */
    st.site = &h_emlrtRSI;
    Psi = PiollaStress(&st, Mu, Lambda, F, S0, D0);

    /*  voigt-notation vectorize */
    /* --------------------------------------------------- Kelvin-voight notation */
    /*  reduced isotropic matrices */
    b_S0[0] = S0[0];
    b_S0[1] = S0[4];
    b_S0[2] = S0[8];
    b_S0[3] = S0[3];
    b_S0[4] = S0[7];
    b_S0[5] = S0[6];
    Se_size = IsotropicReduction(D0, b_S0, Dim, Se_data, De_data, De_size,
      Ge_data, Ge_size);

    /*  nonlinear strain-displacement operator */
    st.site = &i_emlrtRSI;
    NonlinearStrainOperatorFast(&st, N, dNdx, F, J0, Bg, NN);
    Qe_data = NN->data;
    J0_data = J0->data;

    /*  local elemental rotation */
    r1 = _mm_loadu_pd(&R[0]);
    r2 = _mm_loadu_pd(&RRe[0]);
    r3 = _mm_set1_pd(n);
    _mm_storeu_pd(&RRe[0], _mm_add_pd(r2, _mm_div_pd(r1, r3)));
    r1 = _mm_loadu_pd(&Elagran[0]);
    r2 = _mm_loadu_pd(&a__1[0]);
    r4 = _mm_loadu_pd(&Ue[0]);
    r5 = _mm_set1_pd(Rb);
    _mm_storeu_pd(&Ue[0], _mm_add_pd(r4, _mm_div_pd(_mm_add_pd(_mm_mul_pd(r5,
      _mm_sub_pd(r1, r2)), r2), r3)));
    r1 = _mm_loadu_pd(&R[2]);
    r2 = _mm_loadu_pd(&RRe[2]);
    _mm_storeu_pd(&RRe[2], _mm_add_pd(r2, _mm_div_pd(r1, r3)));
    r1 = _mm_loadu_pd(&Elagran[2]);
    r2 = _mm_loadu_pd(&a__1[2]);
    r4 = _mm_loadu_pd(&Ue[2]);
    _mm_storeu_pd(&Ue[2], _mm_add_pd(r4, _mm_div_pd(_mm_add_pd(_mm_mul_pd(r5,
      _mm_sub_pd(r1, r2)), r2), r3)));
    r1 = _mm_loadu_pd(&R[4]);
    r2 = _mm_loadu_pd(&RRe[4]);
    _mm_storeu_pd(&RRe[4], _mm_add_pd(r2, _mm_div_pd(r1, r3)));
    r1 = _mm_loadu_pd(&Elagran[4]);
    r2 = _mm_loadu_pd(&a__1[4]);
    r4 = _mm_loadu_pd(&Ue[4]);
    _mm_storeu_pd(&Ue[4], _mm_add_pd(r4, _mm_div_pd(_mm_add_pd(_mm_mul_pd(r5,
      _mm_sub_pd(r1, r2)), r2), r3)));
    r1 = _mm_loadu_pd(&R[6]);
    r2 = _mm_loadu_pd(&RRe[6]);
    _mm_storeu_pd(&RRe[6], _mm_add_pd(r2, _mm_div_pd(r1, r3)));
    r1 = _mm_loadu_pd(&Elagran[6]);
    r2 = _mm_loadu_pd(&a__1[6]);
    r4 = _mm_loadu_pd(&Ue[6]);
    _mm_storeu_pd(&Ue[6], _mm_add_pd(r4, _mm_div_pd(_mm_add_pd(_mm_mul_pd(r5,
      _mm_sub_pd(r1, r2)), r2), r3)));
    RRe[8] += R[8] / (real_T)n;
    Ue[8] += (Rb * (Elagran[8] - a__1[8]) + a__1[8]) / (real_T)n;

    /*  internal force vector */
    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &f_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    i1 = dNdx->size[0] * dNdx->size[1];
    dNdx->size[0] = J0->size[1];
    dNdx->size[1] = J0->size[0];
    emxEnsureCapacity_real_T(sp, dNdx, i1, &tb_emlrtRTEI);
    N_data = dNdx->data;
    loop_ub = J0->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = J0->size[1];
      for (c_loop_ub_tmp = 0; c_loop_ub_tmp < b_loop_ub; c_loop_ub_tmp++) {
        N_data[c_loop_ub_tmp + dNdx->size[0] * i1] = J0_data[i1 + J0->size[0] *
          c_loop_ub_tmp];
      }
    }

    i1 = y->size[0] * y->size[1];
    y->size[0] = dNdx->size[0];
    y->size[1] = dNdx->size[1];
    emxEnsureCapacity_real_T(sp, y, i1, &eb_emlrtRTEI);
    Delta_data = y->data;
    b_W = W_data[q];
    e_loop_ub_tmp = dNdx->size[0] * dNdx->size[1];
    scalarLB_tmp = (e_loop_ub_tmp / 2) << 1;
    input_sizes_idx_1_tmp = scalarLB_tmp - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&N_data[i1]);
      _mm_storeu_pd(&Delta_data[i1], _mm_mul_pd(_mm_set1_pd(b_W), r1));
    }

    for (i1 = scalarLB_tmp; i1 < e_loop_ub_tmp; i1++) {
      Delta_data[i1] = b_W * N_data[i1];
    }

    st.site = &j_emlrtRSI;
    b_Se_data.data = &Se_data[0];
    b_Se_data.size = &Se_size;
    b_Se_data.allocatedSize = 6;
    b_Se_data.numDimensions = 1;
    b_Se_data.canFreeData = false;
    b_st.site = &bb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, &b_Se_data, y->size[1], Se_size);
    c_Se_data.data = &Se_data[0];
    c_Se_data.size = &Se_size;
    c_Se_data.allocatedSize = 6;
    c_Se_data.numDimensions = 1;
    c_Se_data.canFreeData = false;
    b_st.site = &ab_emlrtRSI;
    b_mtimes(&b_st, y, &c_Se_data, b_dNdxis);
    b_dNdxis_data = b_dNdxis->data;
    loop_ub = b_dNdxis->size[0];
    b_loop_ub = (b_dNdxis->size[0] / 2) << 1;
    input_sizes_idx_1_tmp = b_loop_ub - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&b_dNdxis_data[i1]);
      _mm_storeu_pd(&b_dNdxis_data[i1], _mm_mul_pd(r1, _mm_set1_pd(dJ)));
    }

    for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
      b_dNdxis_data[i1] *= dJ;
    }

    loop_ub = Fe->size[0];
    if ((Fe->size[0] != b_dNdxis->size[0]) && ((Fe->size[0] != 1) &&
         (b_dNdxis->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Fe->size[0], b_dNdxis->size[0], &emlrtECI,
        (emlrtConstCTX)sp);
    }

    if (Fe->size[0] == b_dNdxis->size[0]) {
      b_loop_ub = (Fe->size[0] / 2) << 1;
      input_sizes_idx_1_tmp = b_loop_ub - 2;
      for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
        r1 = _mm_loadu_pd(&Fe_data[i1]);
        r2 = _mm_loadu_pd(&b_dNdxis_data[i1]);
        _mm_storeu_pd(&Fe_data[i1], _mm_add_pd(r1, r2));
      }

      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        Fe_data[i1] += b_dNdxis_data[i1];
      }
    } else {
      st.site = &j_emlrtRSI;
      plus(&st, Fe, b_dNdxis);
      Fe_data = Fe->data;
    }

    /*  (graviational) body force vector */
    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &s_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    y_tmp_tmp = W_data[q];
    b_y_tmp = y_tmp_tmp * Rho;
    i1 = y_tmp->size[0] * y_tmp->size[1];
    y_tmp->size[0] = NN->size[1];
    loop_ub = NN->size[0];
    y_tmp->size[1] = NN->size[0];
    emxEnsureCapacity_real_T(sp, y_tmp, i1, &tb_emlrtRTEI);
    J0_data = y_tmp->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_loop_ub = NN->size[1];
      for (c_loop_ub_tmp = 0; c_loop_ub_tmp < b_loop_ub; c_loop_ub_tmp++) {
        J0_data[c_loop_ub_tmp + y_tmp->size[0] * i1] = Qe_data[i1 + NN->size[0] *
          c_loop_ub_tmp];
      }
    }

    i1 = y->size[0] * y->size[1];
    y->size[0] = y_tmp->size[0];
    y->size[1] = y_tmp->size[1];
    emxEnsureCapacity_real_T(sp, y, i1, &eb_emlrtRTEI);
    Delta_data = y->data;
    c_loop_ub_tmp = y_tmp->size[0] * y_tmp->size[1];
    b_scalarLB_tmp = (c_loop_ub_tmp / 2) << 1;
    vectorUB_tmp = b_scalarLB_tmp - 2;
    for (i1 = 0; i1 <= vectorUB_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&J0_data[i1]);
      _mm_storeu_pd(&Delta_data[i1], _mm_mul_pd(_mm_set1_pd(b_y_tmp), r1));
    }

    for (i1 = b_scalarLB_tmp; i1 < c_loop_ub_tmp; i1++) {
      Delta_data[i1] = b_y_tmp * J0_data[i1];
    }

    st.site = &k_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, Grav, y->size[1], Grav->size[0]);
    b_st.site = &ab_emlrtRSI;
    b_mtimes(&b_st, y, Grav, b_dNdxis);
    b_dNdxis_data = b_dNdxis->data;
    loop_ub = b_dNdxis->size[0];
    b_loop_ub = (b_dNdxis->size[0] / 2) << 1;
    input_sizes_idx_1_tmp = b_loop_ub - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&b_dNdxis_data[i1]);
      _mm_storeu_pd(&b_dNdxis_data[i1], _mm_mul_pd(r1, _mm_set1_pd(dJ)));
    }

    for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
      b_dNdxis_data[i1] *= dJ;
    }

    loop_ub = Fb->size[0];
    if ((Fb->size[0] != b_dNdxis->size[0]) && ((Fb->size[0] != 1) &&
         (b_dNdxis->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Fb->size[0], b_dNdxis->size[0], &b_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if (Fb->size[0] == b_dNdxis->size[0]) {
      b_loop_ub = (Fb->size[0] / 2) << 1;
      input_sizes_idx_1_tmp = b_loop_ub - 2;
      for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
        r1 = _mm_loadu_pd(&Fb_data[i1]);
        r2 = _mm_loadu_pd(&b_dNdxis_data[i1]);
        _mm_storeu_pd(&Fb_data[i1], _mm_add_pd(r1, r2));
      }

      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        Fb_data[i1] += b_dNdxis_data[i1];
      }
    } else {
      st.site = &k_emlrtRSI;
      plus(&st, Fb, b_dNdxis);
      Fb_data = Fb->data;
    }

    /*  lineararized stiffness matrix */
    st.site = &l_emlrtRSI;
    b_De_data.data = &De_data[0];
    b_De_data.size = &De_size[0];
    b_De_data.allocatedSize = 36;
    b_De_data.numDimensions = 2;
    b_De_data.canFreeData = false;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, J0, &b_De_data, J0->size[0], De_size[0]);
    c_De_data.data = &De_data[0];
    c_De_data.size = &De_size[0];
    c_De_data.allocatedSize = 36;
    c_De_data.numDimensions = 2;
    c_De_data.canFreeData = false;
    b_st.site = &ab_emlrtRSI;
    mtimes(&b_st, J0, &c_De_data, y);
    st.site = &l_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, y, J0, y->size[1], J0->size[0]);
    b_st.site = &ab_emlrtRSI;
    c_mtimes(&b_st, y, J0, dNdxi);
    dNdxi_data = dNdxi->data;
    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &g_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    loop_ub = dNdxi->size[0] * dNdxi->size[1];
    b_W = W_data[q];
    b_loop_ub = (loop_ub / 2) << 1;
    input_sizes_idx_1_tmp = b_loop_ub - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&dNdxi_data[i1]);
      _mm_storeu_pd(&dNdxi_data[i1], _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(b_W), r1),
        _mm_set1_pd(dJ)));
    }

    for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
      dNdxi_data[i1] = b_W * dNdxi_data[i1] * dJ;
    }

    if ((Ke->size[0] != dNdxi->size[0]) && ((Ke->size[0] != 1) && (dNdxi->size[0]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ke->size[0], dNdxi->size[0], &c_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((Ke->size[1] != dNdxi->size[1]) && ((Ke->size[1] != 1) && (dNdxi->size[1]
          != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ke->size[1], dNdxi->size[1], &d_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((Ke->size[0] == dNdxi->size[0]) && (Ke->size[1] == dNdxi->size[1])) {
      loop_ub = Ke->size[0] * Ke->size[1];
      b_loop_ub = (loop_ub / 2) << 1;
      input_sizes_idx_1_tmp = b_loop_ub - 2;
      for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
        r1 = _mm_loadu_pd(&Ke_data[i1]);
        r2 = _mm_loadu_pd(&dNdxi_data[i1]);
        _mm_storeu_pd(&Ke_data[i1], _mm_add_pd(r1, r2));
      }

      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        Ke_data[i1] += dNdxi_data[i1];
      }
    } else {
      st.site = &l_emlrtRSI;
      b_plus(&st, Ke, dNdxi);
      Ke_data = Ke->data;
    }

    /*  tangent stiffness matrix */
    st.site = &m_emlrtRSI;
    d_De_data.data = &De_data[0];
    d_De_data.size = &De_size[0];
    d_De_data.allocatedSize = 36;
    d_De_data.numDimensions = 2;
    d_De_data.canFreeData = false;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, J0, &d_De_data, J0->size[0], De_size[0]);
    e_De_data.data = &De_data[0];
    e_De_data.size = &De_size[0];
    e_De_data.allocatedSize = 36;
    e_De_data.numDimensions = 2;
    e_De_data.canFreeData = false;
    b_st.site = &ab_emlrtRSI;
    mtimes(&b_st, J0, &e_De_data, y);
    st.site = &m_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, y, J0, y->size[1], J0->size[0]);
    b_st.site = &ab_emlrtRSI;
    c_mtimes(&b_st, y, J0, d_dNdxis);
    b_dNdxis_data = d_dNdxis->data;
    st.site = &m_emlrtRSI;
    b_Ge_data.data = &Ge_data[0];
    b_Ge_data.size = &Ge_size[0];
    b_Ge_data.allocatedSize = 81;
    b_Ge_data.numDimensions = 2;
    b_Ge_data.canFreeData = false;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, Bg, &b_Ge_data, Bg->size[0], Ge_size[0]);
    c_Ge_data.data = &Ge_data[0];
    c_Ge_data.size = &Ge_size[0];
    c_Ge_data.allocatedSize = 81;
    c_Ge_data.numDimensions = 2;
    c_Ge_data.canFreeData = false;
    b_st.site = &ab_emlrtRSI;
    mtimes(&b_st, Bg, &c_Ge_data, y);
    st.site = &m_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, y, Bg, y->size[1], Bg->size[0]);
    b_st.site = &ab_emlrtRSI;
    c_mtimes(&b_st, y, Bg, dNdxi);
    dNdxi_data = dNdxi->data;
    if ((d_dNdxis->size[0] != dNdxi->size[0]) && ((d_dNdxis->size[0] != 1) &&
         (dNdxi->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(d_dNdxis->size[0], dNdxi->size[0], &e_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((d_dNdxis->size[1] != dNdxi->size[1]) && ((d_dNdxis->size[1] != 1) &&
         (dNdxi->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(d_dNdxis->size[1], dNdxi->size[1], &f_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &h_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if ((d_dNdxis->size[0] == dNdxi->size[0]) && (d_dNdxis->size[1] ==
         dNdxi->size[1])) {
      b_W = W_data[q];
      loop_ub = d_dNdxis->size[0] * d_dNdxis->size[1];
      b_loop_ub = (loop_ub / 2) << 1;
      input_sizes_idx_1_tmp = b_loop_ub - 2;
      for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
        r1 = _mm_loadu_pd(&b_dNdxis_data[i1]);
        r2 = _mm_loadu_pd(&dNdxi_data[i1]);
        _mm_storeu_pd(&b_dNdxis_data[i1], _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(b_W),
          _mm_add_pd(r1, r2)), _mm_set1_pd(dJ)));
      }

      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        b_dNdxis_data[i1] = b_W * (b_dNdxis_data[i1] + dNdxi_data[i1]) * dJ;
      }
    } else {
      st.site = &vl_emlrtRSI;
      b_binary_expand_op(&st, d_dNdxis, W, q, dNdxi, dJ);
      b_dNdxis_data = d_dNdxis->data;
    }

    if ((Kte->size[0] != d_dNdxis->size[0]) && ((Kte->size[0] != 1) &&
         (d_dNdxis->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Kte->size[0], d_dNdxis->size[0], &g_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((Kte->size[1] != d_dNdxis->size[1]) && ((Kte->size[1] != 1) &&
         (d_dNdxis->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Kte->size[1], d_dNdxis->size[1], &h_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((Kte->size[0] == d_dNdxis->size[0]) && (Kte->size[1] == d_dNdxis->size[1]))
    {
      loop_ub = Kte->size[0] * Kte->size[1];
      b_loop_ub = (loop_ub / 2) << 1;
      input_sizes_idx_1_tmp = b_loop_ub - 2;
      for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
        r1 = _mm_loadu_pd(&Kte_data[i1]);
        r2 = _mm_loadu_pd(&b_dNdxis_data[i1]);
        _mm_storeu_pd(&Kte_data[i1], _mm_add_pd(r1, r2));
      }

      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        Kte_data[i1] += b_dNdxis_data[i1];
      }
    } else {
      st.site = &m_emlrtRSI;
      b_plus(&st, Kte, d_dNdxis);
      Kte_data = Kte->data;
    }

    /*  ensure its symmetric */
    /* Kte = 0.5*(Kte + Kte.'); */
    /*  mass matrix */
    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &t_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    for (i1 = 0; i1 <= vectorUB_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&J0_data[i1]);
      _mm_storeu_pd(&J0_data[i1], _mm_mul_pd(_mm_set1_pd(b_y_tmp), r1));
    }

    for (i1 = b_scalarLB_tmp; i1 < c_loop_ub_tmp; i1++) {
      J0_data[i1] *= b_y_tmp;
    }

    st.site = &n_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, y_tmp, NN, y_tmp->size[1], NN->size[0]);
    b_st.site = &ab_emlrtRSI;
    c_mtimes(&b_st, y_tmp, NN, y);
    Delta_data = y->data;
    loop_ub = y->size[0] * y->size[1];
    b_loop_ub = (loop_ub / 2) << 1;
    input_sizes_idx_1_tmp = b_loop_ub - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&Delta_data[i1]);
      _mm_storeu_pd(&Delta_data[i1], _mm_mul_pd(r1, _mm_set1_pd(dJ)));
    }

    for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
      Delta_data[i1] *= dJ;
    }

    if ((Me->size[0] != y->size[0]) && ((Me->size[0] != 1) && (y->size[0] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(Me->size[0], y->size[0], &i_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((Me->size[1] != y->size[1]) && ((Me->size[1] != 1) && (y->size[1] != 1)))
    {
      emlrtDimSizeImpxCheckR2021b(Me->size[1], y->size[1], &j_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((Me->size[0] == y->size[0]) && (Me->size[1] == y->size[1])) {
      loop_ub = Me->size[0] * Me->size[1];
      b_loop_ub = (loop_ub / 2) << 1;
      input_sizes_idx_1_tmp = b_loop_ub - 2;
      for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
        r1 = _mm_loadu_pd(&Me_data[i1]);
        r2 = _mm_loadu_pd(&Delta_data[i1]);
        _mm_storeu_pd(&Me_data[i1], _mm_add_pd(r1, r2));
      }

      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        Me_data[i1] += Delta_data[i1];
      }
    } else {
      st.site = &n_emlrtRSI;
      b_plus(&st, Me, y);
      Me_data = Me->data;
    }

    /*  dampings matrix */
    i1 = d_dNdxis->size[0] * d_dNdxis->size[1];
    d_dNdxis->size[0] = Me->size[0];
    d_dNdxis->size[1] = Me->size[1];
    emxEnsureCapacity_real_T(sp, d_dNdxis, i1, &ub_emlrtRTEI);
    b_dNdxis_data = d_dNdxis->data;
    loop_ub = Me->size[0] * Me->size[1];
    b_loop_ub = (loop_ub / 2) << 1;
    input_sizes_idx_1_tmp = b_loop_ub - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&Me_data[i1]);
      _mm_storeu_pd(&b_dNdxis_data[i1], _mm_mul_pd(_mm_set1_pd(Zeta), r1));
    }

    for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
      b_dNdxis_data[i1] = Zeta * Me_data[i1];
    }

    if ((Ce->size[0] != d_dNdxis->size[0]) && ((Ce->size[0] != 1) &&
         (d_dNdxis->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ce->size[0], d_dNdxis->size[0], &k_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((Ce->size[1] != d_dNdxis->size[1]) && ((Ce->size[1] != 1) &&
         (d_dNdxis->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Ce->size[1], d_dNdxis->size[1], &l_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if ((Ce->size[0] == d_dNdxis->size[0]) && (Ce->size[1] == d_dNdxis->size[1]))
    {
      loop_ub = Ce->size[0] * Ce->size[1];
      b_loop_ub = (loop_ub / 2) << 1;
      input_sizes_idx_1_tmp = b_loop_ub - 2;
      for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
        r1 = _mm_loadu_pd(&Ce_data[i1]);
        r2 = _mm_loadu_pd(&b_dNdxis_data[i1]);
        _mm_storeu_pd(&Ce_data[i1], _mm_add_pd(r1, r2));
      }

      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        Ce_data[i1] += b_dNdxis_data[i1];
      }
    } else {
      st.site = &ul_emlrtRSI;
      b_plus(&st, Ce, d_dNdxis);
      Ce_data = Ce->data;
    }

    /* Ce = Ce + Zeta*Kte; */
    /*  thermal expansion force */
    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &i_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    b_W = W_data[q];
    input_sizes_idx_1_tmp = scalarLB_tmp - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&N_data[i1]);
      _mm_storeu_pd(&N_data[i1], _mm_mul_pd(_mm_set1_pd(b_W), r1));
    }

    for (i1 = scalarLB_tmp; i1 < e_loop_ub_tmp; i1++) {
      N_data[i1] *= b_W;
    }

    st.site = &o_emlrtRSI;
    f_De_data.data = &De_data[0];
    f_De_data.size = &De_size[0];
    f_De_data.allocatedSize = 36;
    f_De_data.numDimensions = 2;
    f_De_data.canFreeData = false;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, dNdx, &f_De_data, dNdx->size[1], De_size[0]);
    g_De_data.data = &De_data[0];
    g_De_data.size = &De_size[0];
    g_De_data.allocatedSize = 36;
    g_De_data.numDimensions = 2;
    g_De_data.canFreeData = false;
    b_st.site = &ab_emlrtRSI;
    c_mtimes(&b_st, dNdx, &g_De_data, y);
    st.site = &o_emlrtRSI;
    b_Et_data.data = &Et_data[0];
    b_Et_data.size = &Et_size;
    b_Et_data.allocatedSize = 6;
    b_Et_data.numDimensions = 1;
    b_Et_data.canFreeData = false;
    b_st.site = &bb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, &b_Et_data, y->size[1], Et_size);
    c_Et_data.data = &Et_data[0];
    c_Et_data.size = &Et_size;
    c_Et_data.allocatedSize = 6;
    c_Et_data.numDimensions = 1;
    c_Et_data.canFreeData = false;
    b_st.site = &ab_emlrtRSI;
    b_mtimes(&b_st, y, &c_Et_data, b_dNdxis);
    b_dNdxis_data = b_dNdxis->data;
    loop_ub = b_dNdxis->size[0];
    b_loop_ub = (b_dNdxis->size[0] / 2) << 1;
    input_sizes_idx_1_tmp = b_loop_ub - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&b_dNdxis_data[i1]);
      _mm_storeu_pd(&b_dNdxis_data[i1], _mm_mul_pd(r1, _mm_set1_pd(dJ)));
    }

    for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
      b_dNdxis_data[i1] *= dJ;
    }

    loop_ub = Te->size[0];
    if ((Te->size[0] != b_dNdxis->size[0]) && ((Te->size[0] != 1) &&
         (b_dNdxis->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Te->size[0], b_dNdxis->size[0], &m_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if (Te->size[0] == b_dNdxis->size[0]) {
      b_loop_ub = (Te->size[0] / 2) << 1;
      input_sizes_idx_1_tmp = b_loop_ub - 2;
      for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
        r1 = _mm_loadu_pd(&Te_data[i1]);
        r2 = _mm_loadu_pd(&b_dNdxis_data[i1]);
        _mm_storeu_pd(&Te_data[i1], _mm_add_pd(r1, r2));
      }

      for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
        Te_data[i1] += b_dNdxis_data[i1];
      }
    } else {
      st.site = &o_emlrtRSI;
      plus(&st, Te, b_dNdxis);
      Te_data = Te->data;
    }

    /*  elemental potential energy */
    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &u_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    *Ve += y_tmp_tmp * Psi * dJ;

    /*  graviational energy */
    st.site = &p_emlrtRSI;
    i1 = b_eDof->size[0] * b_eDof->size[1];
    b_eDof->size[0] = eNode->size[0];
    b_eDof->size[1] = eNode->size[1];
    emxEnsureCapacity_int32_T(&st, b_eDof, i1, &vb_emlrtRTEI);
    b_eDof_data = b_eDof->data;
    for (i1 = 0; i1 < d_loop_ub_tmp; i1++) {
      c_loop_ub_tmp = (int32_T)eNode_data[i1];
      if ((c_loop_ub_tmp < 1) || (c_loop_ub_tmp > Node0->size[0])) {
        emlrtDynamicBoundsCheckR2012b(c_loop_ub_tmp, 1, Node0->size[0],
          &v_emlrtBCI, &st);
      }

      b_eDof_data[i1] = c_loop_ub_tmp;
    }

    i1 = dNdxi->size[0] * dNdxi->size[1];
    dNdxi->size[0] = d_loop_ub_tmp;
    loop_ub = Node0->size[1];
    dNdxi->size[1] = Node0->size[1];
    emxEnsureCapacity_real_T(&st, dNdxi, i1, &wb_emlrtRTEI);
    dNdxi_data = dNdxi->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (c_loop_ub_tmp = 0; c_loop_ub_tmp < d_loop_ub_tmp; c_loop_ub_tmp++) {
        dNdxi_data[c_loop_ub_tmp + dNdxi->size[0] * i1] = Node0_data
          [(b_eDof_data[c_loop_ub_tmp] + Node0->size[0] * i1) - 1];
      }
    }

    b_st.site = &bb_emlrtRSI;
    c_dynamic_size_checks(&b_st, N, dNdxi, Ns->size[0], d_loop_ub_tmp);
    b_st.site = &ab_emlrtRSI;
    d_mtimes(&b_st, N, dNdxi, r);
    dNdxi_data = r->data;
    st.site = &q_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    dynamic_size_checks(&b_st, NN, Delta, NN->size[1], b_loop_ub_tmp);
    b_st.site = &ab_emlrtRSI;
    c_mtimes(&b_st, NN, Delta, d_dNdxis);
    b_dNdxis_data = d_dNdxis->data;
    if ((d_dNdxis->size[0] != r->size[1]) && ((r->size[1] != 1) &&
         (d_dNdxis->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r->size[1], d_dNdxis->size[0], &n_emlrtECI,
        (emlrtConstCTX)sp);
    }

    if (q + 1 > W->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, W->size[0], &j_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    if (d_dNdxis->size[0] == r->size[1]) {
      i1 = y->size[0] * y->size[1];
      y->size[0] = d_dNdxis->size[1];
      y->size[1] = r->size[1];
      emxEnsureCapacity_real_T(sp, y, i1, &xb_emlrtRTEI);
      Delta_data = y->data;
      loop_ub = r->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = d_dNdxis->size[1];
        for (c_loop_ub_tmp = 0; c_loop_ub_tmp < b_loop_ub; c_loop_ub_tmp++) {
          Delta_data[c_loop_ub_tmp + y->size[0] * i1] = W_data[q] *
            (dNdxi_data[i1] + b_dNdxis_data[i1 + d_dNdxis->size[0] *
             c_loop_ub_tmp]) * Rho;
        }
      }
    } else {
      st.site = &vl_emlrtRSI;
      binary_expand_op(&st, y, W, q, r, d_dNdxis, Rho);
    }

    st.site = &p_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    b_dynamic_size_checks(&b_st, y, Grav, y->size[1], Grav->size[0]);
    b_st.site = &ab_emlrtRSI;
    b_mtimes(&b_st, y, Grav, N);
    N_data = N->data;
    loop_ub = N->size[0];
    b_loop_ub = (N->size[0] / 2) << 1;
    input_sizes_idx_1_tmp = b_loop_ub - 2;
    for (i1 = 0; i1 <= input_sizes_idx_1_tmp; i1 += 2) {
      r1 = _mm_loadu_pd(&N_data[i1]);
      _mm_storeu_pd(&N_data[i1], _mm_mul_pd(r1, _mm_set1_pd(dJ)));
    }

    for (i1 = b_loop_ub; i1 < loop_ub; i1++) {
      N_data[i1] *= dJ;
    }

    if (N->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, N->size[0], &k_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    *Vge -= N_data[0];

    /*  lagrangian strain */
    for (i1 = 0; i1 < 3; i1++) {
      R[3 * i1] = F[i1];
      R[3 * i1 + 1] = F[i1 + 3];
      R[3 * i1 + 2] = F[i1 + 6];
    }

    for (i1 = 0; i1 < 3; i1++) {
      dJ = R[i1];
      Psi = R[i1 + 3];
      b_W = R[i1 + 6];
      for (c_loop_ub_tmp = 0; c_loop_ub_tmp < 3; c_loop_ub_tmp++) {
        input_sizes_idx_1_tmp = i1 + 3 * c_loop_ub_tmp;
        Elagran[input_sizes_idx_1_tmp] = ((dJ * F[3 * c_loop_ub_tmp] + Psi * F[3
          * c_loop_ub_tmp + 1]) + b_W * F[3 * c_loop_ub_tmp + 2]) -
          a__1[input_sizes_idx_1_tmp];
      }
    }

    r1 = _mm_loadu_pd(&Elagran[0]);
    r2 = _mm_set1_pd(0.5);
    _mm_storeu_pd(&Elagran[0], _mm_mul_pd(r2, r1));
    r1 = _mm_loadu_pd(&Elagran[2]);
    _mm_storeu_pd(&Elagran[2], _mm_mul_pd(r2, r1));
    r1 = _mm_loadu_pd(&Elagran[4]);
    _mm_storeu_pd(&Elagran[4], _mm_mul_pd(r2, r1));
    r1 = _mm_loadu_pd(&Elagran[6]);
    _mm_storeu_pd(&Elagran[6], _mm_mul_pd(r2, r1));
    Elagran[8] *= 0.5;

    /*  true stress and lagrangian strain */
    st.site = &r_emlrtRSI;
    y_tmp_tmp = 1.0 / b_det(&st, F);
    for (i1 = 0; i1 < 3; i1++) {
      dJ = F[i1];
      Psi = F[i1 + 3];
      b_W = F[i1 + 6];
      for (c_loop_ub_tmp = 0; c_loop_ub_tmp < 3; c_loop_ub_tmp++) {
        a[i1 + 3 * c_loop_ub_tmp] = (y_tmp_tmp * dJ * S0[3 * c_loop_ub_tmp] +
          y_tmp_tmp * Psi * S0[3 * c_loop_ub_tmp + 1]) + y_tmp_tmp * b_W * S0[3 *
          c_loop_ub_tmp + 2];
      }

      dJ = a[i1];
      Psi = a[i1 + 3];
      b_W = a[i1 + 6];
      for (c_loop_ub_tmp = 0; c_loop_ub_tmp < 3; c_loop_ub_tmp++) {
        a__1[i1 + 3 * c_loop_ub_tmp] = (dJ * R[3 * c_loop_ub_tmp] + Psi * R[3 *
          c_loop_ub_tmp + 1]) + b_W * R[3 * c_loop_ub_tmp + 2];
      }
    }

    /* --------------------------------------------------- Kelvin-voight notation */
    b_S0[0] = a__1[0];
    b_S0[1] = a__1[4];
    b_S0[2] = a__1[8];
    b_S0[3] = a__1[3];
    b_S0[4] = a__1[7];
    b_S0[5] = a__1[6];
    if (q + 1 > SGP->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, SGP->size[0], &n_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    for (i1 = 0; i1 < 6; i1++) {
      SGP_data[q + SGP->size[0] * i1] = b_S0[i1];
    }

    /* --------------------------------------------------- Kelvin-voight notation */
    b_S0[0] = Elagran[0];
    b_S0[1] = Elagran[4];
    b_S0[2] = Elagran[8];
    b_S0[3] = Elagran[3];
    b_S0[4] = Elagran[7];
    b_S0[5] = Elagran[6];
    if (q + 1 > EGP->size[0]) {
      emlrtDynamicBoundsCheckR2012b(q + 1, 1, EGP->size[0], &o_emlrtBCI,
        (emlrtConstCTX)sp);
    }

    for (i1 = 0; i1 < 6; i1++) {
      EGP_data[q + EGP->size[0] * i1] = b_S0[i1];
    }

    /*  construct shape functions */
    dJ = (((real_T)q + 1.0) - 1.0) * (real_T)Nshp + 1.0;
    Psi = ((real_T)q + 1.0) * (real_T)Nshp;
    if (dJ > Psi) {
      i1 = 0;
      c_loop_ub_tmp = 0;
    } else {
      if (((int32_T)dJ < 1) || ((int32_T)dJ > loop_ub_tmp)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)dJ, 1, loop_ub_tmp, &l_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      i1 = (int32_T)dJ - 1;
      if (((int32_T)Psi < 1) || ((int32_T)Psi > loop_ub_tmp)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)Psi, 1, loop_ub_tmp, &m_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      c_loop_ub_tmp = (int32_T)Psi;
    }

    loop_ub = Ns->size[0];
    c_loop_ub_tmp -= i1;
    if (c_loop_ub_tmp != Ns->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(c_loop_ub_tmp, Ns->size[0], &o_emlrtECI,
        (emlrtConstCTX)sp);
    }

    for (c_loop_ub_tmp = 0; c_loop_ub_tmp < loop_ub; c_loop_ub_tmp++) {
      NNe_data[i1 + c_loop_ub_tmp] = Ns_data[c_loop_ub_tmp + Ns->size[0] * q];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }

  emxFree_real_T(sp, &d_dNdxis);
  emxFree_int32_T(sp, &b_eDof);
  emxFree_real_T(sp, &y_tmp);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &NN);
  emxFree_real_T(sp, &Bg);
  emxFree_real_T(sp, &dNdx);
  emxFree_real_T(sp, &J0);
  emxFree_real_T(sp, &Delta);

  /*  compute elemental kinetic energy */
  i = y->size[0] * y->size[1];
  y->size[0] = dDelta->size[1];
  y->size[1] = dDelta->size[0];
  emxEnsureCapacity_real_T(sp, y, i, &eb_emlrtRTEI);
  Delta_data = y->data;
  loop_ub = dDelta->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = dDelta->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Delta_data[i1 + y->size[0] * i] = 0.5 * dDelta_data[i + dDelta->size[0] *
        i1];
    }
  }

  st.site = &s_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  dynamic_size_checks(&b_st, y, Me, y->size[1], Me->size[0]);
  b_st.site = &ab_emlrtRSI;
  c_mtimes(&b_st, y, Me, dNdxi);
  emxFree_real_T(&st, &y);
  st.site = &s_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  dynamic_size_checks(&b_st, dNdxi, dDelta, dNdxi->size[1], b_loop_ub_tmp);
  b_st.site = &ab_emlrtRSI;
  c_mtimes(&b_st, dNdxi, dDelta, Tke);
  emxFree_real_T(&st, &dNdxi);
  emxFree_real_T(&st, &dDelta);

  /* compute elemental rotation matrix */
  st.site = &t_emlrtRSI;
  svd(&st, RRe, R, a__1, Elagran);
  for (i = 0; i < 3; i++) {
    dJ = R[i];
    Psi = R[i + 3];
    b_W = R[i + 6];
    for (i1 = 0; i1 < 3; i1++) {
      Re[i + 3 * i1] = (dJ * Elagran[i1] + Psi * Elagran[i1 + 3]) + b_W *
        Elagran[i1 + 6];
    }
  }

  st.site = &u_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  d_dynamic_size_checks(&b_st, NNe, NNe->size[0], SGP->size[0]);
  b_st.site = &ab_emlrtRSI;
  e_mtimes(&b_st, NNe, SGP, SS);
  Qe_data = SS->data;
  emxFree_real_T(&st, &SGP);
  st.site = &v_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  d_dynamic_size_checks(&b_st, NNe, NNe->size[0], EGP->size[0]);
  b_st.site = &ab_emlrtRSI;
  e_mtimes(&b_st, NNe, EGP, EE);
  emxFree_real_T(&st, &NNe);
  emxFree_real_T(&st, &EGP);
  i = b_dNdxis->size[0];
  b_dNdxis->size[0] = SS->size[0];
  emxEnsureCapacity_real_T(sp, b_dNdxis, i, &kb_emlrtRTEI);
  b_dNdxis_data = b_dNdxis->data;
  loop_ub = SS->size[0];
  i = c_dNdxis->size[0];
  c_dNdxis->size[0] = SS->size[0];
  emxEnsureCapacity_real_T(sp, c_dNdxis, i, &mb_emlrtRTEI);
  c_dNdxis_data = c_dNdxis->data;
  i = N->size[0];
  N->size[0] = SS->size[0];
  emxEnsureCapacity_real_T(sp, N, i, &nb_emlrtRTEI);
  N_data = N->data;
  emxInit_real_T(sp, &b_SS, 1, &ob_emlrtRTEI);
  i = b_SS->size[0];
  b_SS->size[0] = SS->size[0];
  emxEnsureCapacity_real_T(sp, b_SS, i, &ob_emlrtRTEI);
  Delta_data = b_SS->data;
  emxInit_real_T(sp, &c_SS, 1, &pb_emlrtRTEI);
  i = c_SS->size[0];
  c_SS->size[0] = SS->size[0];
  emxEnsureCapacity_real_T(sp, c_SS, i, &pb_emlrtRTEI);
  J0_data = c_SS->data;
  emxInit_real_T(sp, &d_SS, 1, &qb_emlrtRTEI);
  i = d_SS->size[0];
  d_SS->size[0] = SS->size[0];
  emxEnsureCapacity_real_T(sp, d_SS, i, &qb_emlrtRTEI);
  dNdxi_data = d_SS->data;
  for (i = 0; i < loop_ub; i++) {
    b_dNdxis_data[i] = Qe_data[i];
    c_dNdxis_data[i] = Qe_data[i + SS->size[0]];
    N_data[i] = Qe_data[i + SS->size[0] * 2];
    Delta_data[i] = Qe_data[i + SS->size[0] * 3];
    J0_data[i] = Qe_data[i + SS->size[0] * 4];
    dNdxi_data[i] = Qe_data[i + SS->size[0] * 5];
  }

  st.site = &w_emlrtRSI;
  VonMises(&st, b_dNdxis, c_dNdxis, N, b_SS, c_SS, d_SS, Svme);
  emxFree_real_T(sp, &d_SS);
  emxFree_real_T(sp, &c_SS);
  emxFree_real_T(sp, &b_SS);
  emxFree_real_T(sp, &c_dNdxis);
  emxFree_real_T(sp, &b_dNdxis);
  emxFree_real_T(sp, &N);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (LocalsNHFast.c) */
