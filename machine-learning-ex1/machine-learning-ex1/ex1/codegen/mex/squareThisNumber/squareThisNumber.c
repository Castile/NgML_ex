/*
 * squareThisNumber.c
 *
 * Code generation for function 'squareThisNumber'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "squareThisNumber.h"
#include "squareThisNumber_data.h"

/* Function Definitions */
void squareThisNumber(const emlrtStack *sp, int32_T x, int32_T *b_y1, int32_T
                      *y2)
{
  int32_T a;
  uint32_T bu;
  int32_T exitg2;
  int64_T i0;
  int32_T exitg1;
  (void)sp;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);

  /* SQUARETHISNUMBER 此处显示有关此函数的摘要 */
  /*    此处显示详细说明 */
  a = x;
  *b_y1 = 1;
  bu = 2U;
  do {
    exitg2 = 0;
    if ((bu & 1U) != 0U) {
      i0 = (int64_T)a * *b_y1;
      if (i0 > 2147483647LL) {
        i0 = 2147483647LL;
      } else {
        if (i0 < -2147483648LL) {
          i0 = -2147483648LL;
        }
      }

      *b_y1 = (int32_T)i0;
    }

    bu >>= 1U;
    if ((int32_T)bu == 0) {
      exitg2 = 1;
    } else {
      i0 = (int64_T)a * a;
      if (i0 > 2147483647LL) {
        i0 = 2147483647LL;
      } else {
        if (i0 < -2147483648LL) {
          i0 = -2147483648LL;
        }
      }

      a = (int32_T)i0;
    }
  } while (exitg2 == 0);

  a = x;
  *y2 = 1;
  bu = 3U;
  do {
    exitg1 = 0;
    if ((bu & 1U) != 0U) {
      i0 = (int64_T)a * *y2;
      if (i0 > 2147483647LL) {
        i0 = 2147483647LL;
      } else {
        if (i0 < -2147483648LL) {
          i0 = -2147483648LL;
        }
      }

      *y2 = (int32_T)i0;
    }

    bu >>= 1U;
    if ((int32_T)bu == 0) {
      exitg1 = 1;
    } else {
      i0 = (int64_T)a * a;
      if (i0 > 2147483647LL) {
        i0 = 2147483647LL;
      } else {
        if (i0 < -2147483648LL) {
          i0 = -2147483648LL;
        }
      }

      a = (int32_T)i0;
    }
  } while (exitg1 == 0);
}

/* End of code generation (squareThisNumber.c) */
