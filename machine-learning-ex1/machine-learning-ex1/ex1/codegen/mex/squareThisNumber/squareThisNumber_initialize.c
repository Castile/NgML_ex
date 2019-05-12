/*
 * squareThisNumber_initialize.c
 *
 * Code generation for function 'squareThisNumber_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "squareThisNumber.h"
#include "squareThisNumber_initialize.h"
#include "_coder_squareThisNumber_mex.h"
#include "squareThisNumber_data.h"

/* Function Declarations */
static void squareThisNumber_once(void);

/* Function Definitions */
static void squareThisNumber_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "F:\\myfiles\\matlab\\machine-learning-ex1\\machine-learning-ex1\\ex1\\squareThisNumber.m",
                  0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "squareThisNumber", 0, -1, 111);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 88, -1, 106);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void squareThisNumber_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    squareThisNumber_once();
  }
}

/* End of code generation (squareThisNumber_initialize.c) */
