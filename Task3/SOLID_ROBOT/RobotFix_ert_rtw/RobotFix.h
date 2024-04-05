/*
 * File: RobotFix.h
 *
 * Code generated for Simulink model 'RobotFix'.
 *
 * Model version                  : 3.31
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Nov 22 19:48:14 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_RobotFix_h_
#define RTW_HEADER_RobotFix_h_
#ifndef RobotFix_COMMON_INCLUDES_
#define RobotFix_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ext_mode.h"
#include "MW_ServoWriteRead.h"
#endif                                 /* RobotFix_COMMON_INCLUDES_ */

#include "RobotFix_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
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
  real_T TmpSignalConversionAtTAQSigLogg[2];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_XValue2_at_outport_0Inport1' */
  real_T TmpSignalConversionAtTAQSigLo_i[2];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_YValue2_at_outport_0Inport1' */
  real_T TmpSignalConversionAtTAQSigLo_e[2];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_the_val_at_outport_0Inport1' */
  real_T x_l;                          /* '<Root>/Forwardkinematic2' */
  real_T y_g;                          /* '<Root>/Forwardkinematic2' */
  real_T the_lq;                       /* '<Root>/Forwardkinematic2' */
  real_T i;
  real_T s2;
  real_T x_i;
  real_T y_n;
  real_T x;
  real_T y;
  real_T x_i_tmp;
  real_T x_i_tmp_m;
  real_T x_i_tmp_c;
} B_RobotFix_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Continuous Servo Write5' */
  codertarget_arduinobase_inter_T obj_h;/* '<Root>/Continuous Servo Write4' */
  codertarget_arduinobase_inter_T obj_k;/* '<Root>/Continuous Servo Write3' */
  struct {
    void *LoggedData;
  } X_PWORK;                           /* '<Root>/X' */

  struct {
    void *LoggedData;
  } Y_PWORK;                           /* '<Root>/Y' */

  struct {
    void *LoggedData;
  } the_PWORK;                         /* '<Root>/the' */

  uint8_T is_active_c10_RobotFix;      /* '<S5>/Trajectory4' */
  uint8_T is_active_c9_RobotFix;       /* '<S4>/Trajectory3' */
  uint8_T is_active_c18_RobotFix;      /* '<Root>/Inversekinematic5' */
  uint8_T is_active_c7_RobotFix;       /* '<Root>/Forwardkinematic2' */
} DW_RobotFix_T;

/* Parameters (default storage) */
struct P_RobotFix_T_ {
  real_T P[4];                         /* Variable: P
                                        * Referenced by: '<S4>/pos3'
                                        */
  real_T P1[8];                        /* Variable: P1
                                        * Referenced by: '<S5>/pos4'
                                        */
  real_T V[4];                         /* Variable: V
                                        * Referenced by: '<S4>/vel3'
                                        */
  real_T V1[8];                        /* Variable: V1
                                        * Referenced by: '<S5>/vel4'
                                        */
  real_T n;                            /* Variable: n
                                        * Referenced by: '<S4>/N3'
                                        */
  real_T n1;                           /* Variable: n1
                                        * Referenced by: '<S5>/N4'
                                        */
  real_T gaintype_gain;                /* Mask Parameter: gaintype_gain
                                        * Referenced by: '<S6>/Slider Gain'
                                        */
  real_T mode_gain;                    /* Mask Parameter: mode_gain
                                        * Referenced by: '<S7>/Slider Gain'
                                        */
  real_T theta1_in_gain;               /* Mask Parameter: theta1_in_gain
                                        * Referenced by: '<S8>/Slider Gain'
                                        */
  real_T theta2_in_gain;               /* Mask Parameter: theta2_in_gain
                                        * Referenced by: '<S9>/Slider Gain'
                                        */
  real_T theta3_in_gain;               /* Mask Parameter: theta3_in_gain
                                        * Referenced by: '<S10>/Slider Gain'
                                        */
  real_T sw_type_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/sw_type'
                                        */
  real_T CK3_Value;                    /* Expression: 2
                                        * Referenced by: '<S4>/CK3'
                                        */
  real_T CK4_Value;                    /* Expression: 2
                                        * Referenced by: '<S5>/CK4'
                                        */
  real_T sw_mode_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/sw_mode'
                                        */
  real_T const1_Value;                 /* Expression: 1
                                        * Referenced by: '<S3>/const1'
                                        */
  real_T const2_Value;                 /* Expression: 1
                                        * Referenced by: '<S3>/const2'
                                        */
  real_T const3_Value;                 /* Expression: 1
                                        * Referenced by: '<S3>/const3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_RobotFix_T {
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
extern P_RobotFix_T RobotFix_P;

/* Block signals (default storage) */
extern B_RobotFix_T RobotFix_B;

/* Block states (default storage) */
extern DW_RobotFix_T RobotFix_DW;

/* Model entry point functions */
extern void RobotFix_initialize(void);
extern void RobotFix_step(void);
extern void RobotFix_terminate(void);

/* Real-time Model object */
extern RT_MODEL_RobotFix_T *const RobotFix_M;
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
 * '<Root>' : 'RobotFix'
 * '<S1>'   : 'RobotFix/Forwardkinematic2'
 * '<S2>'   : 'RobotFix/Inversekinematic5'
 * '<S3>'   : 'RobotFix/Kinematic'
 * '<S4>'   : 'RobotFix/Trajectory_2Point'
 * '<S5>'   : 'RobotFix/Trajectory_3Point'
 * '<S6>'   : 'RobotFix/gaintype'
 * '<S7>'   : 'RobotFix/mode'
 * '<S8>'   : 'RobotFix/Kinematic/theta1_in'
 * '<S9>'   : 'RobotFix/Kinematic/theta2_in'
 * '<S10>'  : 'RobotFix/Kinematic/theta3_in'
 * '<S11>'  : 'RobotFix/Trajectory_2Point/Trajectory3'
 * '<S12>'  : 'RobotFix/Trajectory_3Point/Trajectory4'
 */
#endif                                 /* RTW_HEADER_RobotFix_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
