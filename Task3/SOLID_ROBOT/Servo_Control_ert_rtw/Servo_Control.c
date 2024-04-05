/*
 * File: Servo_Control.c
 *
 * Code generated for Simulink model 'Servo_Control'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Oct  9 17:00:32 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Servo_Control.h"
#include "rtwtypes.h"
#include "Servo_Control_private.h"
#include <math.h>

/* Block states (default storage) */
DW_Servo_Control_T Servo_Control_DW;

/* Real-time model */
static RT_MODEL_Servo_Control_T Servo_Control_M_;
RT_MODEL_Servo_Control_T *const Servo_Control_M = &Servo_Control_M_;
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
void Servo_Control_step(void)
{
  real_T rtb_PulseGenerator;
  uint8_T tmp;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (Servo_Control_DW.clockTickCounter <
                        Servo_Control_P.PulseGenerator_Duty) &&
    (Servo_Control_DW.clockTickCounter >= 0L) ?
    Servo_Control_P.PulseGenerator_Amp : 0.0;
  if (Servo_Control_DW.clockTickCounter >= Servo_Control_P.PulseGenerator_Period
      - 1.0) {
    Servo_Control_DW.clockTickCounter = 0L;
  } else {
    Servo_Control_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<Root>/Continuous Servo Write' */
  if (rtb_PulseGenerator + 90.0 < 0.0) {
    tmp = 0U;
  } else if (rtb_PulseGenerator + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    rtb_PulseGenerator = rt_roundd_snf(rtb_PulseGenerator + 90.0);
    if (rtb_PulseGenerator < 256.0) {
      if (rtb_PulseGenerator >= 0.0) {
        tmp = (uint8_T)rtb_PulseGenerator;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(0, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write' */
  {                                    /* Sample time: [0.01s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Servo_Control_M->Timing.taskTime0 =
    ((time_T)(++Servo_Control_M->Timing.clockTick0)) *
    Servo_Control_M->Timing.stepSize0;
}

/* Model initialize function */
void Servo_Control_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(Servo_Control_M, 10.0);
  Servo_Control_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  Servo_Control_M->Sizes.checksums[0] = (1959451822U);
  Servo_Control_M->Sizes.checksums[1] = (106691996U);
  Servo_Control_M->Sizes.checksums[2] = (925952666U);
  Servo_Control_M->Sizes.checksums[3] = (2518940568U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    Servo_Control_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Servo_Control_M->extModeInfo,
      &Servo_Control_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Servo_Control_M->extModeInfo,
                        Servo_Control_M->Sizes.checksums);
    rteiSetTPtr(Servo_Control_M->extModeInfo, rtmGetTPtr(Servo_Control_M));
  }

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write' */
  MW_servoAttach(0, 9);
}

/* Model terminate function */
void Servo_Control_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
