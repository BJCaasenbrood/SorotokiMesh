/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LocalsNHFastElastic_api.c
 *
 * Code generation for function '_coder_LocalsNHFastElastic_api'
 *
 */

/* Include files */
#include "_coder_LocalsNHFastElastic_api.h"
#include "LocalsNHFastElastic.h"
#include "LocalsNHFastElastic_data.h"
#include "LocalsNHFastElastic_emxutil.h"
#include "LocalsNHFastElastic_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ie_emlrtRTEI = {
    1,                                /* lineNo */
    1,                                /* colNo */
    "_coder_LocalsNHFastElastic_api", /* fName */
    ""                                /* pName */
};

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *eNode,
                               const char_T *identifier, emxArray_real_T *y);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dV,
                                 const char_T *identifier);

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

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

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
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

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &u->data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
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
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
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
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
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
  const boolean_T bv[3] = {true, false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 3U, (void *)&dims[0], &bv[0], &iv[0]);
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
  const boolean_T bv[3] = {true, true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 3U, (void *)&dims[0], &bv[0], &iv[0]);
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
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void LocalsNHFastElastic_api(const mxArray *const prhs[16],
                             const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *Fe;
  emxArray_real_T *Grav;
  emxArray_real_T *Node0;
  emxArray_real_T *Ns;
  emxArray_real_T *Utmp;
  emxArray_real_T *W;
  emxArray_real_T *dNdxis;
  emxArray_real_T *dUtmp;
  emxArray_real_T *eDof;
  emxArray_real_T *eNode;
  real_T Dim;
  real_T Lambda;
  real_T Mu;
  real_T Rb;
  real_T Rho;
  real_T Zeta;
  real_T dV;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &eNode, 2, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &eDof, 2, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &Node0, 2, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &Ns, 3, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &dNdxis, 3, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &W, 1, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &Utmp, 2, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &dUtmp, 2, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &Grav, 1, &ie_emlrtRTEI, true);
  emxInit_real_T(&st, &Fe, 1, &ie_emlrtRTEI, true);
  /* Marshall function inputs */
  eNode->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "eNode", eNode);
  eDof->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "eDof", eDof);
  dV = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "dV");
  Rb = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Rb");
  Dim = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Dim");
  Node0->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "Node0", Node0);
  Ns->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "Ns", Ns);
  dNdxis->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "dNdxis", dNdxis);
  W->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[8]), "W", W);
  Utmp->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[9]), "Utmp", Utmp);
  dUtmp->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "dUtmp", dUtmp);
  Rho = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "Rho");
  Zeta = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "Zeta");
  Grav->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "Grav", Grav);
  Mu = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "Mu");
  Lambda = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "Lambda");
  /* Invoke the target function */
  LocalsNHFastElastic(&st, eNode, eDof, dV, Rb, Dim, Node0, Ns, dNdxis, W, Utmp,
                      dUtmp, Rho, Zeta, Grav, Mu, Lambda, Fe);
  /* Marshall function outputs */
  Fe->canFreeData = false;
  *plhs = emlrt_marshallOut(Fe);
  emxFree_real_T(&Fe);
  emxFree_real_T(&Grav);
  emxFree_real_T(&dUtmp);
  emxFree_real_T(&Utmp);
  emxFree_real_T(&W);
  emxFree_real_T(&dNdxis);
  emxFree_real_T(&Ns);
  emxFree_real_T(&Node0);
  emxFree_real_T(&eDof);
  emxFree_real_T(&eNode);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_LocalsNHFastElastic_api.c) */
