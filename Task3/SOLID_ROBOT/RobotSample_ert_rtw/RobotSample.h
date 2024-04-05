/*
 * File: RobotSample.h
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

#ifndef RTW_HEADER_RobotSample_h_
#define RTW_HEADER_RobotSample_h_
#ifndef RobotSample_COMMON_INCLUDES_
#define RobotSample_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ext_mode.h"
#include "nesl_rtw.h"
#include "RobotSample_871ffa15_1_gateway.h"
#endif                                 /* RobotSample_COMMON_INCLUDES_ */

#include "RobotSample_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include <string.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
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

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T dv[18];
  real_T dv1[12];
  real_T dv2[12];
  real_T dv3[12];
  real_T dv4[12];
  real_T dv5[12];
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_m;
  real_T OUTPUT_1_0[3];                /* '<S32>/OUTPUT_1_0' */
  int_T iv[5];
  int_T iv1[4];
  real_T SliderGain;                   /* '<S8>/Slider Gain' */
  real_T SliderGain_f;                 /* '<S9>/Slider Gain' */
  real_T SliderGain_f2;                /* '<S10>/Slider Gain' */
  real_T SliderGain_k;                 /* '<S11>/Slider Gain' */
  real_T SliderGain_o;                 /* '<S7>/Slider Gain' */
  real_T Gain1;                        /* '<S12>/Gain1' */
  real_T INPUT_1_1_1[4];               /* '<S32>/INPUT_1_1_1' */
  real_T Gain1_o;                      /* '<S13>/Gain1' */
  real_T INPUT_3_1_1[4];               /* '<S32>/INPUT_3_1_1' */
  real_T Gain1_a;                      /* '<S14>/Gain1' */
  real_T INPUT_2_1_1[4];               /* '<S32>/INPUT_2_1_1' */
  real_T STATE_1[6];                   /* '<S32>/STATE_1' */
  real_T TmpSignalConversionAtTAQSigLogg[2];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_XValue2_at_outport_0Inport1' */
  real_T TmpSignalConversionAtTAQSigLo_i[2];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_YValue2_at_outport_0Inport1' */
  real_T TmpSignalConversionAtTAQSigLo_e[2];
  /* '<Root>/TmpSignal ConversionAtTAQSigLogging_InsertedFor_the_val_at_outport_0Inport1' */
  real_T x_a;                          /* '<Root>/Forwardkinematic2' */
  real_T y_d;                          /* '<Root>/Forwardkinematic2' */
  real_T the_j;                        /* '<Root>/Forwardkinematic2' */
  real_T time;
  real_T time_c;
  real_T time_k;
  real_T time_cx;
  real_T i;
  real_T x_j;
  real_T y_k;
  real_T x;
  real_T y;
  real_T rtb_Clock3_tmp;
  real_T x_j_tmp;
  real_T x_j_tmp_b;
  real_T x_j_tmp_p;
  real_T x_j_tmp_c;
  real_T x_j_tmp_f;
  real_T y_k_tmp;
  real_T x_tmp;
  real_T x_tmp_g;
  real_T d;
  real_T d1;
} B_RobotSample_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_1_1_1_Discrete;         /* '<S32>/INPUT_1_1_1' */
  real_T INPUT_1_1_1_FirstOutput;      /* '<S32>/INPUT_1_1_1' */
  real_T INPUT_3_1_1_Discrete;         /* '<S32>/INPUT_3_1_1' */
  real_T INPUT_3_1_1_FirstOutput;      /* '<S32>/INPUT_3_1_1' */
  real_T INPUT_2_1_1_Discrete;         /* '<S32>/INPUT_2_1_1' */
  real_T INPUT_2_1_1_FirstOutput;      /* '<S32>/INPUT_2_1_1' */
  real_T STATE_1_Discrete;             /* '<S32>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S32>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S32>/STATE_1' */
  void* STATE_1_SimData;               /* '<S32>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S32>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S32>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S32>/STATE_1' */
  void* SINK_1_RtwLogger;              /* '<S32>/SINK_1' */
  void* SINK_1_RtwLogBuffer;           /* '<S32>/SINK_1' */
  void* SINK_1_RtwLogFcnManager;       /* '<S32>/SINK_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S32>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S32>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S32>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S32>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S32>/OUTPUT_1_0' */
  struct {
    void *LoggedData;
  } X_PWORK;                           /* '<Root>/X' */

  struct {
    void *LoggedData;
  } Y_PWORK;                           /* '<Root>/Y' */

  struct {
    void *LoggedData;
  } the_PWORK;                         /* '<Root>/the' */

  int_T STATE_1_Modes;                 /* '<S32>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S32>/OUTPUT_1_0' */
  uint8_T is_active_c10_RobotSample;   /* '<S6>/Trajectory4' */
  uint8_T is_active_c9_RobotSample;    /* '<S5>/Trajectory3' */
  uint8_T is_active_c18_RobotSample;   /* '<Root>/Inversekinematic5' */
  uint8_T is_active_c7_RobotSample;    /* '<Root>/Forwardkinematic2' */
  boolean_T STATE_1_FirstOutput;       /* '<S32>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S32>/OUTPUT_1_0' */
} DW_RobotSample_T;

/* Continuous states (default storage) */
typedef struct {
  real_T RobotSampleSubsystem4Simulink_P[2];/* '<S32>/INPUT_1_1_1' */
  real_T RobotSampleSubsystem4Simulink_i[2];/* '<S32>/INPUT_3_1_1' */
  real_T RobotSampleSubsystem4Simulink_b[2];/* '<S32>/INPUT_2_1_1' */
  real_T RobotSampleSubsystem4Cylindrica[6];/* '<S32>/STATE_1' */
} X_RobotSample_T;

/* State derivatives (default storage) */
typedef struct {
  real_T RobotSampleSubsystem4Simulink_P[2];/* '<S32>/INPUT_1_1_1' */
  real_T RobotSampleSubsystem4Simulink_i[2];/* '<S32>/INPUT_3_1_1' */
  real_T RobotSampleSubsystem4Simulink_b[2];/* '<S32>/INPUT_2_1_1' */
  real_T RobotSampleSubsystem4Cylindrica[6];/* '<S32>/STATE_1' */
} XDot_RobotSample_T;

/* State disabled  */
typedef struct {
  boolean_T RobotSampleSubsystem4Simulink_P[2];/* '<S32>/INPUT_1_1_1' */
  boolean_T RobotSampleSubsystem4Simulink_i[2];/* '<S32>/INPUT_3_1_1' */
  boolean_T RobotSampleSubsystem4Simulink_b[2];/* '<S32>/INPUT_2_1_1' */
  boolean_T RobotSampleSubsystem4Cylindrica[6];/* '<S32>/STATE_1' */
} XDis_RobotSample_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (default storage) */
struct P_RobotSample_T_ {
  real_T P[4];                         /* Variable: P
                                        * Referenced by: '<S5>/pos3'
                                        */
  real_T P1[8];                        /* Variable: P1
                                        * Referenced by: '<S6>/pos4'
                                        */
  real_T V[4];                         /* Variable: V
                                        * Referenced by: '<S5>/vel3'
                                        */
  real_T V1[8];                        /* Variable: V1
                                        * Referenced by: '<S6>/vel4'
                                        */
  real_T n;                            /* Variable: n
                                        * Referenced by: '<S5>/N3'
                                        */
  real_T n1;                           /* Variable: n1
                                        * Referenced by: '<S6>/N4'
                                        */
  real_T mode_gain;                    /* Mask Parameter: mode_gain
                                        * Referenced by: '<S8>/Slider Gain'
                                        */
  real_T theta1_in_gain;               /* Mask Parameter: theta1_in_gain
                                        * Referenced by: '<S9>/Slider Gain'
                                        */
  real_T theta2_in_gain;               /* Mask Parameter: theta2_in_gain
                                        * Referenced by: '<S10>/Slider Gain'
                                        */
  real_T theta3_in_gain;               /* Mask Parameter: theta3_in_gain
                                        * Referenced by: '<S11>/Slider Gain'
                                        */
  real_T gaintype_gain;                /* Mask Parameter: gaintype_gain
                                        * Referenced by: '<S7>/Slider Gain'
                                        */
  real_T sw_mode_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/sw_mode'
                                        */
  real_T const1_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/const1'
                                        */
  real_T const2_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/const2'
                                        */
  real_T const3_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/const3'
                                        */
  real_T sw_type_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/sw_type'
                                        */
  real_T CK3_Value;                    /* Expression: 2
                                        * Referenced by: '<S5>/CK3'
                                        */
  real_T CK4_Value;                    /* Expression: 2
                                        * Referenced by: '<S6>/CK4'
                                        */
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S12>/Gain1'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: pi/180
                                        * Referenced by: '<S13>/Gain1'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: pi/180
                                        * Referenced by: '<S14>/Gain1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_RobotSample_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  X_RobotSample_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_RobotSample_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[12];
  real_T odeF[3][12];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
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
    time_T tStart;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_RobotSample_T RobotSample_P;

/* Block signals (default storage) */
extern B_RobotSample_T RobotSample_B;

/* Continuous states (default storage) */
extern X_RobotSample_T RobotSample_X;

/* Disabled states (default storage) */
extern XDis_RobotSample_T RobotSample_XDis;

/* Block states (default storage) */
extern DW_RobotSample_T RobotSample_DW;

/* Model entry point functions */
extern void RobotSample_initialize(void);
extern void RobotSample_step(void);
extern void RobotSample_terminate(void);

/* Real-time Model object */
extern RT_MODEL_RobotSample_T *const RobotSample_M;
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
 * '<Root>' : 'RobotSample'
 * '<S1>'   : 'RobotSample/ForwardKinematic'
 * '<S2>'   : 'RobotSample/Forwardkinematic2'
 * '<S3>'   : 'RobotSample/Inversekinematic5'
 * '<S4>'   : 'RobotSample/Subsystem4'
 * '<S5>'   : 'RobotSample/Trajectory_2Point'
 * '<S6>'   : 'RobotSample/Trajectory_3Point'
 * '<S7>'   : 'RobotSample/gaintype'
 * '<S8>'   : 'RobotSample/mode'
 * '<S9>'   : 'RobotSample/ForwardKinematic/theta1_in'
 * '<S10>'  : 'RobotSample/ForwardKinematic/theta2_in'
 * '<S11>'  : 'RobotSample/ForwardKinematic/theta3_in'
 * '<S12>'  : 'RobotSample/Subsystem4/Degrees to Radians'
 * '<S13>'  : 'RobotSample/Subsystem4/Degrees to Radians1'
 * '<S14>'  : 'RobotSample/Subsystem4/Degrees to Radians2'
 * '<S15>'  : 'RobotSample/Subsystem4/Link1_Co_1_RIGID'
 * '<S16>'  : 'RobotSample/Subsystem4/Link2_Co_1_RIGID'
 * '<S17>'  : 'RobotSample/Subsystem4/Link3_Co_1_RIGID'
 * '<S18>'  : 'RobotSample/Subsystem4/Link4_Co_1_RIGID'
 * '<S19>'  : 'RobotSample/Subsystem4/PS-Simulink Converter'
 * '<S20>'  : 'RobotSample/Subsystem4/PS-Simulink Converter1'
 * '<S21>'  : 'RobotSample/Subsystem4/PS-Simulink Converter2'
 * '<S22>'  : 'RobotSample/Subsystem4/Simulink-PS Converter'
 * '<S23>'  : 'RobotSample/Subsystem4/Simulink-PS Converter1'
 * '<S24>'  : 'RobotSample/Subsystem4/Simulink-PS Converter2'
 * '<S25>'  : 'RobotSample/Subsystem4/Solver Configuration'
 * '<S26>'  : 'RobotSample/Subsystem4/PS-Simulink Converter/EVAL_KEY'
 * '<S27>'  : 'RobotSample/Subsystem4/PS-Simulink Converter1/EVAL_KEY'
 * '<S28>'  : 'RobotSample/Subsystem4/PS-Simulink Converter2/EVAL_KEY'
 * '<S29>'  : 'RobotSample/Subsystem4/Simulink-PS Converter/EVAL_KEY'
 * '<S30>'  : 'RobotSample/Subsystem4/Simulink-PS Converter1/EVAL_KEY'
 * '<S31>'  : 'RobotSample/Subsystem4/Simulink-PS Converter2/EVAL_KEY'
 * '<S32>'  : 'RobotSample/Subsystem4/Solver Configuration/EVAL_KEY'
 * '<S33>'  : 'RobotSample/Trajectory_2Point/Trajectory3'
 * '<S34>'  : 'RobotSample/Trajectory_3Point/Trajectory4'
 */
#endif                                 /* RTW_HEADER_RobotSample_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
