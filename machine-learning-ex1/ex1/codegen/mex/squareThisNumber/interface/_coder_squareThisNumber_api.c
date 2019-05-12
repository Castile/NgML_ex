/*
 * _coder_squareThisNumber_api.c
 *
 * Code generation for function '_coder_squareThisNumber_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "squareThisNumber.h"
#include "_coder_squareThisNumber_api.h"
#include "squareThisNumber_data.h"

/* Function Declarations */
static int32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static int32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const int32_T u);

/* Function Definitions */
static int32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier)
{
  int32_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}

static const mxArray *emlrt_marshallOut(const int32_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m0) = u;
  emlrtAssign(&y, m0);
  return y;
}

void squareThisNumber_api(const mxArray * const prhs[1], const mxArray *plhs[2])
{
  int32_T x;
  int32_T b_y1;
  int32_T y2;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "x");

  /* Invoke the target function */
  squareThisNumber(&st, x, &b_y1, &y2);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(b_y1);
  plhs[1] = emlrt_marshallOut(y2);
}

/* End of code generation (_coder_squareThisNumber_api.c) */
