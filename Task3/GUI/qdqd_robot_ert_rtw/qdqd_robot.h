/*
 * File: qdqd_robot.h
 *
 * Code generated for Simulink model 'qdqd_robot'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Dec 28 00:20:59 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_qdqd_robot_h_
#define RTW_HEADER_qdqd_robot_h_
#ifndef qdqd_robot_COMMON_INCLUDES_
#define qdqd_robot_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ext_mode.h"
#include "MW_ServoWriteRead.h"
#endif                                 /* qdqd_robot_COMMON_INCLUDES_ */

#include "qdqd_robot_types.h"
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
  real_T Px;                           /* '<Root>/FK' */
  real_T Py;                           /* '<Root>/FK' */
  real_T Pz;                           /* '<Root>/FK' */
  real_T chuky;
  real_T i;
  real_T B;
  real_T a;
  real_T theta1;
  real_T theta1_m;
  real_T x_e;                          /* '<S1>/MATLAB Function' */
  real_T y_l;                          /* '<S1>/MATLAB Function' */
  real_T y;                            /* '<S2>/MATLAB Function' */
  real_T s1_tmp;
  real_T x_tmp;
  real_T a_tmp;
  real_T x_tmp_c;
} B_qdqd_robot_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    void *LoggedData;
  } X_PWORK;                           /* '<Root>/X' */

  struct {
    void *LoggedData;
  } Y_PWORK;                           /* '<Root>/Y' */

  struct {
    void *LoggedData;
  } Z_PWORK;                           /* '<Root>/Z' */
} DW_qdqd_robot_T;

/* Parameters (default storage) */
struct P_qdqd_robot_T_ {
  real_T va_mode3_Value[2];            /* Expression: [0 0]
                                        * Referenced by: '<S1>/va_mode3'
                                        */
  real_T vb_mode3_Value[2];            /* Expression: [0 0]
                                        * Referenced by: '<S1>/vb_mode3'
                                        */
  real_T Pax_mode3_Value;              /* Expression: 280
                                        * Referenced by: '<S1>/Pax_mode3'
                                        */
  real_T Pay_mode3_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Pay_mode3'
                                        */
  real_T Pbx_mode3_Value;              /* Expression: 320
                                        * Referenced by: '<S1>/Pbx_mode3'
                                        */
  real_T Pby_mode3_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Pby_mode3'
                                        */
  real_T tf_mode3_Value;               /* Expression: 2
                                        * Referenced by: '<S1>/tf_mode3'
                                        */
  real_T n_mode3_Value;                /* Expression: 5
                                        * Referenced by: '<S1>/n_mode3'
                                        */
  real_T theta123_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/theta123'
                                        */
  real_T Mode_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/Mode'
                                        */
  real_T t1_mode1_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/t1_mode1'
                                        */
  real_T t2_mode1_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/t2_mode1'
                                        */
  real_T t3_mode1_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/t3_mode1'
                                        */
  real_T t1_mode2_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/t1_mode2'
                                        */
  real_T t2_mode2_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/t2_mode2'
                                        */
  real_T t3_mode2_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/t3_mode2'
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
  real_T theta123_Value_j;             /* Expression: 0
                                        * Referenced by: '<S2>/theta123'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_qdqd_robot_T {
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
extern P_qdqd_robot_T qdqd_robot_P;

/* Block signals (default storage) */
extern B_qdqd_robot_T qdqd_robot_B;

/* Block states (default storage) */
extern DW_qdqd_robot_T qdqd_robot_DW;

/* Model entry point functions */
extern void qdqd_robot_initialize(void);
extern void qdqd_robot_step(void);
extern void qdqd_robot_terminate(void);

/* Real-time Model object */
extern RT_MODEL_qdqd_robot_T *const qdqd_robot_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 */

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
 * '<Root>' : 'qdqd_robot'
 * '<S1>'   : 'qdqd_robot/2diem'
 * '<S2>'   : 'qdqd_robot/3diem'
 * '<S3>'   : 'qdqd_robot/FK'
 * '<S4>'   : 'qdqd_robot/IK1'
 * '<S5>'   : 'qdqd_robot/IK2'
 * '<S6>'   : 'qdqd_robot/2diem/MATLAB Function'
 * '<S7>'   : 'qdqd_robot/3diem/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_qdqd_robot_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
