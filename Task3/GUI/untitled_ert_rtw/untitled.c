/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Dec 26 14:49:04 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"
#include "untitled_private.h"
#include <math.h>

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void untitled_step(void)
{
  real_T tmp_0;
  uint8_T tmp;

  /* MATLABSystem: '<Root>/Continuous Servo Write' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (untitled_P.Constant_Value + 90.0 < 0.0) {
    tmp = 0U;
  } else if (untitled_P.Constant_Value + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    tmp_0 = rt_roundd_snf(untitled_P.Constant_Value + 90.0);
    if (tmp_0 < 256.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint8_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(0, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write' */

  /* MATLABSystem: '<Root>/Continuous Servo Write1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  if (untitled_P.Constant1_Value + 90.0 < 0.0) {
    tmp = 0U;
  } else if (untitled_P.Constant1_Value + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    tmp_0 = rt_roundd_snf(untitled_P.Constant1_Value + 90.0);
    if (tmp_0 < 256.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint8_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(1, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write1' */

  /* MATLABSystem: '<Root>/Continuous Servo Write2' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  if (untitled_P.Constant2_Value + 90.0 < 0.0) {
    tmp = 0U;
  } else if (untitled_P.Constant2_Value + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    tmp_0 = rt_roundd_snf(untitled_P.Constant2_Value + 90.0);
    if (tmp_0 < 256.0) {
      if (tmp_0 >= 0.0) {
        tmp = (uint8_T)tmp_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(2, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write2' */
  {                                    /* Sample time: [0.01s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  untitled_M->Timing.taskTime0 =
    ((time_T)(++untitled_M->Timing.clockTick0)) * untitled_M->Timing.stepSize0;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(untitled_M, 10.0);
  untitled_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  untitled_M->Sizes.checksums[0] = (253782232U);
  untitled_M->Sizes.checksums[1] = (3167888114U);
  untitled_M->Sizes.checksums[2] = (4230012765U);
  untitled_M->Sizes.checksums[3] = (4262389054U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    untitled_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled_M->extModeInfo,
      &untitled_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled_M->extModeInfo, untitled_M->Sizes.checksums);
    rteiSetTPtr(untitled_M->extModeInfo, rtmGetTPtr(untitled_M));
  }

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write' */
  MW_servoAttach(0, 5);

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write1' */
  MW_servoAttach(1, 6);

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write2' */
  MW_servoAttach(2, 9);
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
