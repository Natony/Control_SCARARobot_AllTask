/*
 * File: RobotSample_private.h
 *
 * Code generated for Simulink model 'RobotSample'.
 *
 * Model version                  : 3.23
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Oct 22 13:15:42 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_RobotSample_private_h_
#define RTW_HEADER_RobotSample_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "RobotSample_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern real_T rt_atan2d_snf(real_T u0, real_T u1);

/* private model entry point functions */
extern void RobotSample_derivatives(void);

#endif                                 /* RTW_HEADER_RobotSample_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
