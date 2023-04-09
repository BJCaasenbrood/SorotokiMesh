/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LocalsNHFast_api.c
 *
 * Code generation for function '_coder_LocalsNHFast_api'
 *
 */

/* Include files */
#include "_coder_LocalsNHFast_api.h"
#include "LocalsNHFast.h"
#include "LocalsNHFast_data.h"
#include "LocalsNHFast_emxutil.h"
#include "LocalsNHFast_mexutil.h"
#include "LocalsNHFast_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo xf_emlrtRTEI = {
    1,                         /* lineNo */
    1,                         /* colNo */
    "_coder_LocalsNHFast_api", /* fName */
    ""                         /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *eNode,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *d_emlrt_marshallOut(const real_T u[9]);

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dV,
                                 const char_T *identifier);

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ns,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dNdxis,
                               const char_T *identifier, emxArray_real_T *y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *W,
                               const char_T *identifier, emxArray_real_T *y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *eNode,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(eNode), &thisId, y);
  emlrtDestroyArray(&eNode);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const real_T u[9])
{
  static const int32_T iv[2] = {0, 0};
  static const int32_T iv1[2] = {3, 3};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dV,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(dV), &thisId);
  emlrtDestroyArray(&dV);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ns,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(Ns), &thisId, y);
  emlrtDestroyArray(&Ns);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dNdxis,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(dNdxis), &thisId, y);
  emlrtDestroyArray(&dNdxis);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *W,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(W), &thisId, y);
  emlrtDestroyArray(&W);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[3] = {-1, 1, -1};
  int32_T iv[3];
  int32_T i;
  boolean_T bv[3] = {true, false, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1] * iv[2];
  i = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  ret->size[2] = iv[2];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[3] = {-1, -1, -1};
  int32_T iv[3];
  int32_T i;
  boolean_T bv[3] = {true, true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1] * iv[2];
  i = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  ret->size[2] = iv[2];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void LocalsNHFast_api(const mxArray *const prhs[16], int32_T nlhs,
                      const mxArray *plhs[16])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *Ce;
  emxArray_real_T *EE;
  emxArray_real_T *Fb;
  emxArray_real_T *Fe;
  emxArray_real_T *Grav;
  emxArray_real_T *Ke;
  emxArray_real_T *Kte;
  emxArray_real_T *Me;
  emxArray_real_T *Node0;
  emxArray_real_T *Ns;
  emxArray_real_T *Qe;
  emxArray_real_T *SS;
  emxArray_real_T *Svme;
  emxArray_real_T *Te;
  emxArray_real_T *Tke;
  emxArray_real_T *Utmp;
  emxArray_real_T *W;
  emxArray_real_T *dNdxis;
  emxArray_real_T *dUtmp;
  emxArray_real_T *eDof;
  emxArray_real_T *eNode;
  real_T(*Re)[9];
  real_T(*Ue)[9];
  real_T Dim;
  real_T Lambda;
  real_T Mu;
  real_T Rb;
  real_T Rho;
  real_T Ve;
  real_T Vge;
  real_T Zeta;
  real_T dV;
  st.tls = emlrtRootTLSGlobal;
  Re = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  Ue = (real_T(*)[9])mxMalloc(sizeof(real_T[9]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  emxInit_real_T(&st, &eNode, 2, &xf_emlrtRTEI);
  eNode->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "eNode", eNode);
  emxInit_real_T(&st, &eDof, 2, &xf_emlrtRTEI);
  eDof->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "eDof", eDof);
  dV = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "dV");
  Rb = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Rb");
  Dim = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Dim");
  emxInit_real_T(&st, &Node0, 2, &xf_emlrtRTEI);
  Node0->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "Node0", Node0);
  emxInit_real_T(&st, &Ns, 3, &xf_emlrtRTEI);
  Ns->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "Ns", Ns);
  emxInit_real_T(&st, &dNdxis, 3, &xf_emlrtRTEI);
  dNdxis->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "dNdxis", dNdxis);
  emxInit_real_T(&st, &W, 1, &xf_emlrtRTEI);
  W->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "W", W);
  emxInit_real_T(&st, &Utmp, 2, &xf_emlrtRTEI);
  Utmp->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "Utmp", Utmp);
  emxInit_real_T(&st, &dUtmp, 2, &xf_emlrtRTEI);
  dUtmp->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "dUtmp", dUtmp);
  Rho = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "Rho");
  Zeta = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "Zeta");
  emxInit_real_T(&st, &Grav, 1, &xf_emlrtRTEI);
  Grav->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "Grav", Grav);
  Mu = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "Mu");
  Lambda = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "Lambda");
  /* Invoke the target function */
  emxInit_real_T(&st, &Fe, 1, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Fb, 1, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Qe, 1, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Me, 2, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Ce, 2, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Ke, 2, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Kte, 2, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Svme, 1, &xf_emlrtRTEI);
  emxInit_real_T(&st, &SS, 2, &xf_emlrtRTEI);
  emxInit_real_T(&st, &EE, 2, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Te, 1, &xf_emlrtRTEI);
  emxInit_real_T(&st, &Tke, 2, &xf_emlrtRTEI);
  LocalsNHFast(&st, eNode, eDof, dV, Rb, Dim, Node0, Ns, dNdxis, W, Utmp, dUtmp,
               Rho, Zeta, Grav, Mu, Lambda, Fe, Fb, Qe, Me, Ce, Ke, Kte, Svme,
               SS, EE, Te, &Ve, &Vge, Tke, *Re, *Ue);
  emxFree_real_T(&st, &Grav);
  emxFree_real_T(&st, &dUtmp);
  emxFree_real_T(&st, &Utmp);
  emxFree_real_T(&st, &W);
  emxFree_real_T(&st, &dNdxis);
  emxFree_real_T(&st, &Ns);
  emxFree_real_T(&st, &Node0);
  emxFree_real_T(&st, &eDof);
  emxFree_real_T(&st, &eNode);
  /* Marshall function outputs */
  Fe->canFreeData = false;
  plhs[0] = b_emlrt_marshallOut(Fe);
  emxFree_real_T(&st, &Fe);
  if (nlhs > 1) {
    Fb->canFreeData = false;
    plhs[1] = b_emlrt_marshallOut(Fb);
  }
  emxFree_real_T(&st, &Fb);
  if (nlhs > 2) {
    Qe->canFreeData = false;
    plhs[2] = b_emlrt_marshallOut(Qe);
  }
  emxFree_real_T(&st, &Qe);
  if (nlhs > 3) {
    Me->canFreeData = false;
    plhs[3] = c_emlrt_marshallOut(Me);
  }
  emxFree_real_T(&st, &Me);
  if (nlhs > 4) {
    Ce->canFreeData = false;
    plhs[4] = c_emlrt_marshallOut(Ce);
  }
  emxFree_real_T(&st, &Ce);
  if (nlhs > 5) {
    Ke->canFreeData = false;
    plhs[5] = c_emlrt_marshallOut(Ke);
  }
  emxFree_real_T(&st, &Ke);
  if (nlhs > 6) {
    Kte->canFreeData = false;
    plhs[6] = c_emlrt_marshallOut(Kte);
  }
  emxFree_real_T(&st, &Kte);
  if (nlhs > 7) {
    Svme->canFreeData = false;
    plhs[7] = b_emlrt_marshallOut(Svme);
  }
  emxFree_real_T(&st, &Svme);
  if (nlhs > 8) {
    SS->canFreeData = false;
    plhs[8] = c_emlrt_marshallOut(SS);
  }
  emxFree_real_T(&st, &SS);
  if (nlhs > 9) {
    EE->canFreeData = false;
    plhs[9] = c_emlrt_marshallOut(EE);
  }
  emxFree_real_T(&st, &EE);
  if (nlhs > 10) {
    Te->canFreeData = false;
    plhs[10] = b_emlrt_marshallOut(Te);
  }
  emxFree_real_T(&st, &Te);
  if (nlhs > 11) {
    plhs[11] = emlrt_marshallOut(Ve);
  }
  if (nlhs > 12) {
    plhs[12] = emlrt_marshallOut(Vge);
  }
  if (nlhs > 13) {
    Tke->canFreeData = false;
    plhs[13] = c_emlrt_marshallOut(Tke);
  }
  emxFree_real_T(&st, &Tke);
  if (nlhs > 14) {
    plhs[14] = d_emlrt_marshallOut(*Re);
  }
  if (nlhs > 15) {
    plhs[15] = d_emlrt_marshallOut(*Ue);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_LocalsNHFast_api.c) */
