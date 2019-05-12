/*
 * squareThisNumber_terminate.c
 *
 * Code generation for function 'squareThisNumber_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "squareThisNumber.h"
#include "squareThisNumber_terminate.h"
#include "_coder_squareThisNumber_mex.h"
#include "squareThisNumber_data.h"

/* Function Definitions */
void squareThisNumber_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void squareThisNumber_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (squareThisNumber_terminate.c) */
