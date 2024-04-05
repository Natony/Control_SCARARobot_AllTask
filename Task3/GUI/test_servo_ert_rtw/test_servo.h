/*
 * File: test_servo.h
 *
 * Code generated for Simulink model 'test_servo'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Dec 28 00:37:38 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test_servo_h_
#define RTW_HEADER_test_servo_h_
#ifndef test_servo_COMMON_INCLUDES_
#define test_servo_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ext_mode.h"
#include "MW_ServoWriteRead.h"
#endif                                 /* test_servo_COMMON_INCLUDES_ */

#include "test_servo_types.h"
#include "rt_nonfinite.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Pa[2];
  real_T Pb[2];
  real_T dv[2];
  real_T chuky;
  real_T i;
  real_T B;
  real_T a;
  real_T theta1;
  real_T theta1_m;
  real_T x_p;                          /* '<S1>/MATLAB Function' */
  real_T y_m;                          /* '<S1>/MATLAB Function' */
  real_T y;                            /* '<S2>/MATLAB Function' */
  real_T s1_tmp;
  real_T x_tmp;
  real_T a_tmp;
  real_T x_tmp_c;
} B_test_servo_T;

/* Parameters (default storage) */
struct P_test_servo_T_ {
  real_T va_mode3_Value[2];            /* Expression: [0 0]
                                        * Referenced by: '<S1>/va_mode3'
                                        */
  real_T vb_mode3_Value[2];            /* Expression: [0 0]
                                        * Referenced by: '<S1>/vb_mode3'
                                        */
  real_T Pax_mode3_Value;              /* Expression: 355.12
                                        * Referenced by: '<S1>/Pax_mode3'
                                        */
  real_T Pay_mode3_Value;              /* Expression: -20
                                        * Referenced by: '<S1>/Pay_mode3'
                                        */
  real_T Pbx_mode3_Value;              /* Expression: 355.12
                                        * Referenced by: '<S1>/Pbx_mode3'
                                        */
  real_T Pby_mode3_Value;              /* Expression: 20
                                        * Referenced by: '<S1>/Pby_mode3'
                                        */
  real_T tf_mode3_Value;               /* Expression: 10
                                        * Referenced by: '<S1>/tf_mode3'
                                        */
  real_T n_mode3_Value;                /* Expression: 5
                                        * Referenced by: '<S1>/n_mode3'
                                        */
  real_T theta123_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/theta123'
                                        */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T va_mode4_Value[2];            /* Expression: [0 0]
                                        * Referenced by: '<S2>/va_mode4'
                                        */
  real_T vb_mode4_Value[2];            /* Expression: [0 0]
                                        * Referenced by: '<S2>/vb_mode4'
                                        */
  real_T vc_mode4_Value[2];            /* Expression: [0 0]
                                        * Referenced by: '<S2>/vc_mode4'
                                        */
  real_T Pax_mode4_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Pax_mode4'
                                        */
  real_T Pay_mode4_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Pay_mode4'
                                        */
  real_T Pbx_mode4_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Pbx_mode4'
                                        */
  real_T Pby_mode4_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Pby_mode4'
                                        */
  real_T Pcx_mode4_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Pcx_mode4'
                                        */
  real_T Pcy_mode4_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Pcy_mode4'
                                        */
  real_T tf_mode4_Value;               /* Expression: 0
                                        * Referenced by: '<S2>/tf_mode4'
                                        */
  real_T n_mode4_Value;                /* Expression: 0
                                        * Referenced by: '<S2>/n_mode4'
                                        */
  real_T theta123_Value_i;             /* Expression: 0
                                        * Referenced by: '<S2>/theta123'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_test_servo_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_test_servo_T test_servo_P;

/* Block signals (default storage) */
extern B_test_servo_T test_servo_B;

/* Model entry point functions */
extern void test_servo_initialize(void);
extern void test_servo_step(void);
extern void test_servo_terminate(void);

/* Real-time Model object */
extern RT_MODEL_test_servo_T *const test_servo_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'test_servo'
 * '<S1>'   : 'test_servo/2diem'
 * '<S2>'   : 'test_servo/3diem'
 * '<S3>'   : 'test_servo/FK'
 * '<S4>'   : 'test_servo/IK1'
 * '<S5>'   : 'test_servo/IK2'
 * '<S6>'   : 'test_servo/2diem/MATLAB Function'
 * '<S7>'   : 'test_servo/3diem/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_test_servo_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
