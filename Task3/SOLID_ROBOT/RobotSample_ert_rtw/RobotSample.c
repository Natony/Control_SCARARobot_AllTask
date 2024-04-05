/*
 * File: RobotSample.c
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

#include "RobotSample.h"
#include "rtwtypes.h"
#include <math.h>
#include "RobotSample_private.h"
#include <stddef.h>
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Block signals (default storage) */
B_RobotSample_T RobotSample_B;

/* Continuous states */
X_RobotSample_T RobotSample_X;

/* Disabled State Vector */
XDis_RobotSample_T RobotSample_XDis;

/* Block states (default storage) */
DW_RobotSample_T RobotSample_DW;

/* Real-time model */
static RT_MODEL_RobotSample_T RobotSample_M_;
RT_MODEL_RobotSample_T *const RobotSample_M = &RobotSample_M_;

/* Forward declaration for local functions */
static real_T RobotSample_mod(real_T x, real_T y);
static real_T RobotSample_rt_powd_snf(real_T u0, real_T u1);

/* Projection for root system: '<Root>' */
void RobotSample_projection(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T time;
  int32_T tmp_1;
  int_T tmp_0[4];
  boolean_T tmp;

  /* Projection for SimscapeExecutionBlock: '<S32>/STATE_1' */
  simulationData = (NeslSimulationData *)RobotSample_DW.STATE_1_SimData;
  time = RobotSample_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX =
    &RobotSample_X.RobotSampleSubsystem4Cylindrica[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &RobotSample_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = (int32_T *)
    &RobotSample_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(RobotSample_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&RobotSample_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&RobotSample_M->solverInfo);
  tmp_0[0] = 0;
  RobotSample_B.dv3[0] = RobotSample_B.INPUT_1_1_1[0];
  RobotSample_B.dv3[1] = RobotSample_B.INPUT_1_1_1[1];
  RobotSample_B.dv3[2] = RobotSample_B.INPUT_1_1_1[2];
  RobotSample_B.dv3[3] = RobotSample_B.INPUT_1_1_1[3];
  tmp_0[1] = 4;
  RobotSample_B.dv3[4] = RobotSample_B.INPUT_3_1_1[0];
  RobotSample_B.dv3[5] = RobotSample_B.INPUT_3_1_1[1];
  RobotSample_B.dv3[6] = RobotSample_B.INPUT_3_1_1[2];
  RobotSample_B.dv3[7] = RobotSample_B.INPUT_3_1_1[3];
  tmp_0[2] = 8;
  RobotSample_B.dv3[8] = RobotSample_B.INPUT_2_1_1[0];
  RobotSample_B.dv3[9] = RobotSample_B.INPUT_2_1_1[1];
  RobotSample_B.dv3[10] = RobotSample_B.INPUT_2_1_1[2];
  RobotSample_B.dv3[11] = RobotSample_B.INPUT_2_1_1[3];
  tmp_0[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &RobotSample_B.dv3[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = (int32_T *)&tmp_0[0];
  diagnosticManager = (NeuDiagnosticManager *)RobotSample_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)RobotSample_DW.STATE_1_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_1 != 0L) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(RobotSample_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(RobotSample_M, msg);
    }
  }

  /* End of Projection for SimscapeExecutionBlock: '<S32>/STATE_1' */
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 12;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  RobotSample_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  RobotSample_step();
  RobotSample_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  RobotSample_step();
  RobotSample_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  RobotSample_step();
  RobotSample_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Function for MATLAB Function: '<S5>/Trajectory3' */
static real_T RobotSample_mod(real_T x, real_T y)
{
  real_T q;
  real_T r;
  boolean_T rEQ0;
  r = x;
  if (y == 0.0) {
    if (x == 0.0) {
      r = y;
    }
  } else if (rtIsNaN(x)) {
    r = (rtNaN);
  } else if (rtIsNaN(y)) {
    r = (rtNaN);
  } else if (rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0 / y;
  } else if (rtIsInf(y)) {
    if ((y < 0.0) != (x < 0.0)) {
      r = y;
    }
  } else {
    r = fmod(x, y);
    rEQ0 = (r == 0.0);
    if ((!rEQ0) && (y > floor(y))) {
      q = fabs(x / y);
      rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      r = y * 0.0;
    } else if ((x < 0.0) != (y < 0.0)) {
      r += y;
    }
  }

  return r;
}

static real_T RobotSample_rt_powd_snf(real_T u0, real_T u1)
{
  real_T tmp;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    RobotSample_B.d = fabs(u0);
    tmp = fabs(u1);
    if (rtIsInf(u1)) {
      if (RobotSample_B.d == 1.0) {
        y = 1.0;
      } else if (RobotSample_B.d > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp == 0.0) {
      y = 1.0;
    } else if (tmp == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int16_T tmp;
  int16_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Model step function */
void RobotSample_step(void)
{
  if (rtmIsMajorTimeStep(RobotSample_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&RobotSample_M->solverInfo,
                          ((RobotSample_M->Timing.clockTick0+1)*
      RobotSample_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(RobotSample_M)) {
    RobotSample_M->Timing.t[0] = rtsiGetT(&RobotSample_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    int32_T tmp_1;
    boolean_T tmp;
    boolean_T tmp_0;
    boolean_T tmp_2;
    if (rtmIsMajorTimeStep(RobotSample_M)) {
      /* Gain: '<S8>/Slider Gain' incorporates:
       *  Constant: '<Root>/sw_mode'
       */
      RobotSample_B.SliderGain = RobotSample_P.mode_gain *
        RobotSample_P.sw_mode_Value;

      /* Gain: '<S9>/Slider Gain' incorporates:
       *  Constant: '<S1>/const1'
       */
      RobotSample_B.SliderGain_f = RobotSample_P.theta1_in_gain *
        RobotSample_P.const1_Value;

      /* Gain: '<S10>/Slider Gain' incorporates:
       *  Constant: '<S1>/const2'
       */
      RobotSample_B.SliderGain_f2 = RobotSample_P.theta2_in_gain *
        RobotSample_P.const2_Value;

      /* Gain: '<S11>/Slider Gain' incorporates:
       *  Constant: '<S1>/const3'
       */
      RobotSample_B.SliderGain_k = RobotSample_P.theta3_in_gain *
        RobotSample_P.const3_Value;

      /* Gain: '<S7>/Slider Gain' incorporates:
       *  Constant: '<Root>/sw_type'
       */
      RobotSample_B.SliderGain_o = RobotSample_P.gaintype_gain *
        RobotSample_P.sw_type_Value;
    }

    /* Clock: '<S5>/Clock3' incorporates:
     *  Clock: '<S6>/Clock4'
     *  SimscapeExecutionBlock: '<S32>/OUTPUT_1_0'
     *  SimscapeExecutionBlock: '<S32>/STATE_1'
     */
    RobotSample_B.rtb_Clock3_tmp = RobotSample_M->Timing.t[0];

    /* MATLAB Function: '<S5>/Trajectory3' incorporates:
     *  Clock: '<S5>/Clock3'
     *  Constant: '<S5>/CK3'
     *  Constant: '<S5>/N3'
     *  Constant: '<S5>/pos3'
     *  Constant: '<S5>/vel3'
     */
    if (RobotSample_B.rtb_Clock3_tmp < RobotSample_P.n * RobotSample_P.CK3_Value)
    {
      RobotSample_B.y = RobotSample_mod(RobotSample_B.rtb_Clock3_tmp,
        RobotSample_P.CK3_Value);
      RobotSample_B.i = (RobotSample_B.rtb_Clock3_tmp - RobotSample_B.y) /
        RobotSample_P.CK3_Value + 1.0;
      RobotSample_B.y_k = RobotSample_rt_powd_snf(RobotSample_B.y, 3.0);
      RobotSample_B.x = RobotSample_B.y * RobotSample_B.y;
      RobotSample_B.x_j_tmp = RobotSample_P.CK3_Value * RobotSample_P.CK3_Value;
      RobotSample_B.x_j = RobotSample_P.P[(int16_T)(RobotSample_B.i + 1.0) - 1]
        - RobotSample_P.P[(int16_T)RobotSample_B.i - 1];
      RobotSample_B.x_j_tmp_b = 3.0 / RobotSample_B.x_j_tmp;
      RobotSample_B.x_j_tmp = 1.0 / RobotSample_B.x_j_tmp;
      RobotSample_B.x_j_tmp_p = -2.0 / RobotSample_rt_powd_snf
        (RobotSample_P.CK3_Value, 3.0);
      RobotSample_B.x_j_tmp_c = RobotSample_P.V[(int16_T)RobotSample_B.i - 1];
      RobotSample_B.x_j_tmp_f = RobotSample_P.V[(int16_T)(RobotSample_B.i + 1.0)
        - 1];
      RobotSample_B.x_j = (((RobotSample_B.x_j * RobotSample_B.x_j_tmp_b - 2.0 /
        RobotSample_P.CK3_Value * RobotSample_B.x_j_tmp_c) - 1.0 /
                            RobotSample_P.CK3_Value * RobotSample_B.x_j_tmp_f) *
                           RobotSample_B.x + (RobotSample_B.x_j_tmp_c *
        RobotSample_B.y + RobotSample_P.P[(int16_T)RobotSample_B.i - 1])) +
        ((RobotSample_B.x_j_tmp_f + RobotSample_B.x_j_tmp_c) *
         RobotSample_B.x_j_tmp + RobotSample_B.x_j) * RobotSample_B.x_j_tmp_p *
        RobotSample_B.y_k;
      RobotSample_B.x_j_tmp_f = RobotSample_P.P[(int16_T)RobotSample_B.i + 1];
      RobotSample_B.x_j_tmp_c = RobotSample_P.P[(int16_T)(RobotSample_B.i + 1.0)
        + 1] - RobotSample_B.x_j_tmp_f;
      RobotSample_B.y_k_tmp = RobotSample_P.V[(int16_T)RobotSample_B.i + 1];
      RobotSample_B.i = RobotSample_P.V[(int16_T)(RobotSample_B.i + 1.0) + 1];
      RobotSample_B.y_k = (((RobotSample_B.x_j_tmp_c * RobotSample_B.x_j_tmp_b -
        2.0 / RobotSample_P.CK3_Value * RobotSample_B.y_k_tmp) - 1.0 /
                            RobotSample_P.CK3_Value * RobotSample_B.i) *
                           RobotSample_B.x + (RobotSample_B.y_k_tmp *
        RobotSample_B.y + RobotSample_B.x_j_tmp_f)) + ((RobotSample_B.i +
        RobotSample_B.y_k_tmp) * RobotSample_B.x_j_tmp + RobotSample_B.x_j_tmp_c)
        * RobotSample_B.x_j_tmp_p * RobotSample_B.y_k;
    } else {
      RobotSample_B.x_j = RobotSample_P.P[1];
      RobotSample_B.y_k = RobotSample_P.P[3];
    }

    /* End of MATLAB Function: '<S5>/Trajectory3' */

    /* MATLAB Function: '<S6>/Trajectory4' incorporates:
     *  Constant: '<S6>/CK4'
     *  Constant: '<S6>/N4'
     *  Constant: '<S6>/pos4'
     *  Constant: '<S6>/vel4'
     */
    if (RobotSample_B.rtb_Clock3_tmp < RobotSample_P.n1 *
        RobotSample_P.CK4_Value) {
      RobotSample_B.y = RobotSample_mod(RobotSample_B.rtb_Clock3_tmp,
        RobotSample_P.CK4_Value);
      RobotSample_B.i = (RobotSample_B.rtb_Clock3_tmp - RobotSample_B.y) /
        RobotSample_P.CK4_Value + 1.0;
      RobotSample_B.x_j_tmp = RobotSample_rt_powd_snf(RobotSample_B.y, 3.0);
      RobotSample_B.x_j_tmp_b = RobotSample_B.y * RobotSample_B.y;
      RobotSample_B.x_j_tmp_p = RobotSample_P.CK4_Value *
        RobotSample_P.CK4_Value;
      RobotSample_B.y_k_tmp = RobotSample_P.P1[(int16_T)RobotSample_B.i - 1];
      RobotSample_B.x = RobotSample_P.P1[(int16_T)(RobotSample_B.i + 1.0) - 1] -
        RobotSample_B.y_k_tmp;
      RobotSample_B.x_j_tmp_c = 3.0 / RobotSample_B.x_j_tmp_p;
      RobotSample_B.x_j_tmp_p = 1.0 / RobotSample_B.x_j_tmp_p;
      RobotSample_B.x_j_tmp_f = -2.0 / RobotSample_rt_powd_snf
        (RobotSample_P.CK4_Value, 3.0);
      RobotSample_B.x_tmp = RobotSample_P.V1[(int16_T)RobotSample_B.i - 1];
      RobotSample_B.x_tmp_g = RobotSample_P.V1[(int16_T)(RobotSample_B.i + 1.0)
        - 1];
      RobotSample_B.x = (((RobotSample_B.x * RobotSample_B.x_j_tmp_c - 2.0 /
                           RobotSample_P.CK4_Value * RobotSample_B.x_tmp) - 1.0 /
                          RobotSample_P.CK4_Value * RobotSample_B.x_tmp_g) *
                         RobotSample_B.x_j_tmp_b + (RobotSample_B.x_tmp *
        RobotSample_B.y + RobotSample_B.y_k_tmp)) + ((RobotSample_B.x_tmp_g +
        RobotSample_B.x_tmp) * RobotSample_B.x_j_tmp_p + RobotSample_B.x) *
        RobotSample_B.x_j_tmp_f * RobotSample_B.x_j_tmp;
      RobotSample_B.y_k_tmp = RobotSample_P.P1[(int16_T)RobotSample_B.i + 3];
      RobotSample_B.x_tmp = RobotSample_P.P1[(int16_T)(RobotSample_B.i + 1.0) +
        3] - RobotSample_B.y_k_tmp;
      RobotSample_B.x_tmp_g = RobotSample_P.V1[(int16_T)RobotSample_B.i + 3];
      RobotSample_B.i = RobotSample_P.V1[(int16_T)(RobotSample_B.i + 1.0) + 3];
      RobotSample_B.y = (((RobotSample_B.x_tmp * RobotSample_B.x_j_tmp_c - 2.0 /
                           RobotSample_P.CK4_Value * RobotSample_B.x_tmp_g) -
                          1.0 / RobotSample_P.CK4_Value * RobotSample_B.i) *
                         RobotSample_B.x_j_tmp_b + (RobotSample_B.x_tmp_g *
        RobotSample_B.y + RobotSample_B.y_k_tmp)) + ((RobotSample_B.i +
        RobotSample_B.x_tmp_g) * RobotSample_B.x_j_tmp_p + RobotSample_B.x_tmp) *
        RobotSample_B.x_j_tmp_f * RobotSample_B.x_j_tmp;
    } else {
      RobotSample_B.x = RobotSample_P.P1[3];
      RobotSample_B.y = RobotSample_P.P1[7];
    }

    /* End of MATLAB Function: '<S6>/Trajectory4' */

    /* MultiPortSwitch: '<Root>/Multiport Switch' */
    if ((int16_T)RobotSample_B.SliderGain_o == 1) {
      RobotSample_B.x = RobotSample_B.x_j;
      RobotSample_B.y = RobotSample_B.y_k;
    }

    /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

    /* MATLAB Function: '<Root>/Inversekinematic5' */
    RobotSample_B.i = RobotSample_B.y * RobotSample_B.y;
    RobotSample_B.y_k = ((((RobotSample_B.x - 120.0) - 80.0) * ((RobotSample_B.x
      - 120.0) - 80.0) + RobotSample_B.i) - 18100.0) / 18000.0;
    RobotSample_B.x = sqrt(1.0 - RobotSample_B.y_k * RobotSample_B.y_k);
    RobotSample_B.x_j = 57.295779513082323 * rt_atan2d_snf(RobotSample_B.x,
      RobotSample_B.y_k);
    RobotSample_B.y_k = 90.0 * RobotSample_B.y_k + 100.0;
    RobotSample_B.x *= 90.0;
    RobotSample_B.x_j_tmp = RobotSample_B.x * RobotSample_B.x +
      RobotSample_B.y_k * RobotSample_B.y_k;
    RobotSample_B.x_j_tmp_b = sqrt(RobotSample_B.x_j_tmp);
    RobotSample_B.i = rt_atan2d_snf(RobotSample_B.y / RobotSample_B.x_j_tmp_b,
      sqrt(1.0 - RobotSample_B.i / RobotSample_B.x_j_tmp)) * 57.295779513082323
      - rt_atan2d_snf(RobotSample_B.x / RobotSample_B.x_j_tmp_b,
                      RobotSample_B.y_k / RobotSample_B.x_j_tmp_b) *
      57.295779513082323;

    /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
     *  MATLAB Function: '<Root>/Inversekinematic5'
     */
    if ((int16_T)RobotSample_B.SliderGain == 1) {
      RobotSample_B.i = RobotSample_B.SliderGain_f;
      RobotSample_B.x_j = RobotSample_B.SliderGain_f2;
      RobotSample_B.y = RobotSample_B.SliderGain_k;
    } else {
      RobotSample_B.y = (0.0 - RobotSample_B.i) - RobotSample_B.x_j;
    }

    /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */

    /* Gain: '<S12>/Gain1' */
    RobotSample_B.Gain1 = RobotSample_P.Gain1_Gain * RobotSample_B.i;

    /* SimscapeInputBlock: '<S32>/INPUT_1_1_1' */
    if (RobotSample_DW.INPUT_1_1_1_FirstOutput == 0.0) {
      RobotSample_DW.INPUT_1_1_1_FirstOutput = 1.0;
      RobotSample_X.RobotSampleSubsystem4Simulink_P[0] = RobotSample_B.Gain1;
      RobotSample_X.RobotSampleSubsystem4Simulink_P[1] = 0.0;
    }

    RobotSample_B.INPUT_1_1_1[0] =
      RobotSample_X.RobotSampleSubsystem4Simulink_P[0];
    RobotSample_B.INPUT_1_1_1[1] =
      RobotSample_X.RobotSampleSubsystem4Simulink_P[1];
    RobotSample_B.INPUT_1_1_1[2] = ((RobotSample_B.Gain1 -
      RobotSample_X.RobotSampleSubsystem4Simulink_P[0]) * 100.0 - 2.0 *
      RobotSample_X.RobotSampleSubsystem4Simulink_P[1]) * 100.0;
    RobotSample_B.INPUT_1_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S32>/INPUT_1_1_1' */

    /* Gain: '<S13>/Gain1' */
    RobotSample_B.Gain1_o = RobotSample_P.Gain1_Gain_h * RobotSample_B.x_j;

    /* SimscapeInputBlock: '<S32>/INPUT_3_1_1' */
    if (RobotSample_DW.INPUT_3_1_1_FirstOutput == 0.0) {
      RobotSample_DW.INPUT_3_1_1_FirstOutput = 1.0;
      RobotSample_X.RobotSampleSubsystem4Simulink_i[0] = RobotSample_B.Gain1_o;
      RobotSample_X.RobotSampleSubsystem4Simulink_i[1] = 0.0;
    }

    RobotSample_B.INPUT_3_1_1[0] =
      RobotSample_X.RobotSampleSubsystem4Simulink_i[0];
    RobotSample_B.INPUT_3_1_1[1] =
      RobotSample_X.RobotSampleSubsystem4Simulink_i[1];
    RobotSample_B.INPUT_3_1_1[2] = ((RobotSample_B.Gain1_o -
      RobotSample_X.RobotSampleSubsystem4Simulink_i[0]) * 100.0 - 2.0 *
      RobotSample_X.RobotSampleSubsystem4Simulink_i[1]) * 100.0;
    RobotSample_B.INPUT_3_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S32>/INPUT_3_1_1' */

    /* Gain: '<S14>/Gain1' */
    RobotSample_B.Gain1_a = RobotSample_P.Gain1_Gain_j * RobotSample_B.y;

    /* SimscapeInputBlock: '<S32>/INPUT_2_1_1' */
    if (RobotSample_DW.INPUT_2_1_1_FirstOutput == 0.0) {
      RobotSample_DW.INPUT_2_1_1_FirstOutput = 1.0;
      RobotSample_X.RobotSampleSubsystem4Simulink_b[0] = RobotSample_B.Gain1_a;
      RobotSample_X.RobotSampleSubsystem4Simulink_b[1] = 0.0;
    }

    RobotSample_B.INPUT_2_1_1[0] =
      RobotSample_X.RobotSampleSubsystem4Simulink_b[0];
    RobotSample_B.INPUT_2_1_1[1] =
      RobotSample_X.RobotSampleSubsystem4Simulink_b[1];
    RobotSample_B.INPUT_2_1_1[2] = ((RobotSample_B.Gain1_a -
      RobotSample_X.RobotSampleSubsystem4Simulink_b[0]) * 100.0 - 2.0 *
      RobotSample_X.RobotSampleSubsystem4Simulink_b[1]) * 100.0;
    RobotSample_B.INPUT_2_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S32>/INPUT_2_1_1' */

    /* SimscapeExecutionBlock: '<S32>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S32>/OUTPUT_1_0'
     */
    simulationData = (NeslSimulationData *)RobotSample_DW.STATE_1_SimData;
    RobotSample_B.time = RobotSample_B.rtb_Clock3_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &RobotSample_B.time;
    simulationData->mData->mContStates.mN = 6;
    simulationData->mData->mContStates.mX =
      &RobotSample_X.RobotSampleSubsystem4Cylindrica[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &RobotSample_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = (int32_T *)
      &RobotSample_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    tmp = rtmIsMajorTimeStep(RobotSample_M);
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&RobotSample_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_0 = rtsiIsModeUpdateTimeStep(&RobotSample_M->solverInfo);
    simulationData->mData->mIsModeUpdateTimeStep = tmp_0;
    RobotSample_B.iv1[0] = 0;
    RobotSample_B.dv1[0] = RobotSample_B.INPUT_1_1_1[0];
    RobotSample_B.dv1[1] = RobotSample_B.INPUT_1_1_1[1];
    RobotSample_B.dv1[2] = RobotSample_B.INPUT_1_1_1[2];
    RobotSample_B.dv1[3] = RobotSample_B.INPUT_1_1_1[3];
    RobotSample_B.iv1[1] = 4;
    RobotSample_B.dv1[4] = RobotSample_B.INPUT_3_1_1[0];
    RobotSample_B.dv1[5] = RobotSample_B.INPUT_3_1_1[1];
    RobotSample_B.dv1[6] = RobotSample_B.INPUT_3_1_1[2];
    RobotSample_B.dv1[7] = RobotSample_B.INPUT_3_1_1[3];
    RobotSample_B.iv1[2] = 8;
    RobotSample_B.dv1[8] = RobotSample_B.INPUT_2_1_1[0];
    RobotSample_B.dv1[9] = RobotSample_B.INPUT_2_1_1[1];
    RobotSample_B.dv1[10] = RobotSample_B.INPUT_2_1_1[2];
    RobotSample_B.dv1[11] = RobotSample_B.INPUT_2_1_1[3];
    RobotSample_B.iv1[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &RobotSample_B.dv1[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = (int32_T *)&RobotSample_B.iv1[0];
    simulationData->mData->mOutputs.mN = 6;
    simulationData->mData->mOutputs.mX = &RobotSample_B.STATE_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    RobotSample_B.x_j = RobotSample_M->Timing.t[0];
    RobotSample_B.time_c = RobotSample_B.x_j;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &RobotSample_B.time_c;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    diagnosticManager = (NeuDiagnosticManager *)RobotSample_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)
      RobotSample_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (tmp_1 != 0L) {
      tmp_2 = error_buffer_is_empty(rtmGetErrorStatus(RobotSample_M));
      if (tmp_2) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(RobotSample_M, msg);
      }
    }

    /* SimscapeExecutionBlock: '<S32>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)RobotSample_DW.OUTPUT_1_0_SimData;
    RobotSample_B.time_k = RobotSample_B.rtb_Clock3_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &RobotSample_B.time_k;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &RobotSample_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = (int32_T *)
      &RobotSample_DW.OUTPUT_1_0_Modes;
    tmp_2 = false;
    simulationData->mData->mFoundZcEvents = tmp_2;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = tmp_0;
    RobotSample_B.iv[0] = 0;
    RobotSample_B.dv[0] = RobotSample_B.INPUT_1_1_1[0];
    RobotSample_B.dv[1] = RobotSample_B.INPUT_1_1_1[1];
    RobotSample_B.dv[2] = RobotSample_B.INPUT_1_1_1[2];
    RobotSample_B.dv[3] = RobotSample_B.INPUT_1_1_1[3];
    RobotSample_B.iv[1] = 4;
    RobotSample_B.dv[4] = RobotSample_B.INPUT_3_1_1[0];
    RobotSample_B.dv[5] = RobotSample_B.INPUT_3_1_1[1];
    RobotSample_B.dv[6] = RobotSample_B.INPUT_3_1_1[2];
    RobotSample_B.dv[7] = RobotSample_B.INPUT_3_1_1[3];
    RobotSample_B.iv[2] = 8;
    RobotSample_B.dv[8] = RobotSample_B.INPUT_2_1_1[0];
    RobotSample_B.dv[9] = RobotSample_B.INPUT_2_1_1[1];
    RobotSample_B.dv[10] = RobotSample_B.INPUT_2_1_1[2];
    RobotSample_B.dv[11] = RobotSample_B.INPUT_2_1_1[3];
    RobotSample_B.iv[3] = 12;
    RobotSample_B.dv[12] = RobotSample_B.STATE_1[0];
    RobotSample_B.dv[13] = RobotSample_B.STATE_1[1];
    RobotSample_B.dv[14] = RobotSample_B.STATE_1[2];
    RobotSample_B.dv[15] = RobotSample_B.STATE_1[3];
    RobotSample_B.dv[16] = RobotSample_B.STATE_1[4];
    RobotSample_B.dv[17] = RobotSample_B.STATE_1[5];
    RobotSample_B.iv[4] = 18;
    simulationData->mData->mInputValues.mN = 18;
    simulationData->mData->mInputValues.mX = &RobotSample_B.dv[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = (int32_T *)&RobotSample_B.iv[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &RobotSample_B.OUTPUT_1_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    RobotSample_B.time_cx = RobotSample_B.x_j;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &RobotSample_B.time_cx;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    diagnosticManager = (NeuDiagnosticManager *)
      RobotSample_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)
      RobotSample_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (tmp_1 != 0L) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(RobotSample_M));
      if (tmp) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(RobotSample_M, msg_0);
      }
    }

    /* MATLAB Function: '<Root>/Forwardkinematic2' */
    RobotSample_B.x_a = ((cos(RobotSample_B.OUTPUT_1_0[0] +
      RobotSample_B.OUTPUT_1_0[1]) * 90.0 + 120.0) + 100.0 * cos
                         (RobotSample_B.OUTPUT_1_0[0])) + 80.0;
    RobotSample_B.y_d = sin(RobotSample_B.OUTPUT_1_0[0] +
      RobotSample_B.OUTPUT_1_0[1]) * 90.0 + 100.0 * sin
      (RobotSample_B.OUTPUT_1_0[0]);
    RobotSample_B.the_j = (RobotSample_B.OUTPUT_1_0[0] +
      RobotSample_B.OUTPUT_1_0[1]) + RobotSample_B.OUTPUT_1_0[2];
    if (rtmIsMajorTimeStep(RobotSample_M)) {
      /* SignalConversion generated from: '<Root>/XValue2' */
      RobotSample_B.TmpSignalConversionAtTAQSigLogg[0] = 0.0;
      RobotSample_B.TmpSignalConversionAtTAQSigLogg[1] = RobotSample_B.x_a;

      /* SignalConversion generated from: '<Root>/YValue2' */
      RobotSample_B.TmpSignalConversionAtTAQSigLo_i[0] = 0.0;
      RobotSample_B.TmpSignalConversionAtTAQSigLo_i[1] = RobotSample_B.y_d;

      /* SignalConversion generated from: '<Root>/the_val' */
      RobotSample_B.TmpSignalConversionAtTAQSigLo_e[0] = 0.0;
      RobotSample_B.TmpSignalConversionAtTAQSigLo_e[1] = RobotSample_B.the_j;
    }
  }

  if (rtmIsMajorTimeStep(RobotSample_M)) {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T time;
    int32_T tmp_1;
    int_T tmp_0[4];
    boolean_T tmp;

    /* Update for SimscapeExecutionBlock: '<S32>/STATE_1' */
    simulationData = (NeslSimulationData *)RobotSample_DW.STATE_1_SimData;
    time = RobotSample_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 6;
    simulationData->mData->mContStates.mX =
      &RobotSample_X.RobotSampleSubsystem4Cylindrica[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &RobotSample_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = (int32_T *)
      &RobotSample_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(RobotSample_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&RobotSample_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
      (&RobotSample_M->solverInfo);
    tmp_0[0] = 0;
    RobotSample_B.dv5[0] = RobotSample_B.INPUT_1_1_1[0];
    RobotSample_B.dv5[1] = RobotSample_B.INPUT_1_1_1[1];
    RobotSample_B.dv5[2] = RobotSample_B.INPUT_1_1_1[2];
    RobotSample_B.dv5[3] = RobotSample_B.INPUT_1_1_1[3];
    tmp_0[1] = 4;
    RobotSample_B.dv5[4] = RobotSample_B.INPUT_3_1_1[0];
    RobotSample_B.dv5[5] = RobotSample_B.INPUT_3_1_1[1];
    RobotSample_B.dv5[6] = RobotSample_B.INPUT_3_1_1[2];
    RobotSample_B.dv5[7] = RobotSample_B.INPUT_3_1_1[3];
    tmp_0[2] = 8;
    RobotSample_B.dv5[8] = RobotSample_B.INPUT_2_1_1[0];
    RobotSample_B.dv5[9] = RobotSample_B.INPUT_2_1_1[1];
    RobotSample_B.dv5[10] = RobotSample_B.INPUT_2_1_1[2];
    RobotSample_B.dv5[11] = RobotSample_B.INPUT_2_1_1[3];
    tmp_0[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &RobotSample_B.dv5[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = (int32_T *)&tmp_0[0];
    diagnosticManager = (NeuDiagnosticManager *)RobotSample_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)
      RobotSample_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_1 != 0L) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(RobotSample_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(RobotSample_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S32>/STATE_1' */
    {                                  /* Sample time: [0.0s, 0.0s] */
      extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
      extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
        ((RobotSample_M->Timing.clockTick0 * 1) + 0)
        ;

      /* Trigger External Mode event */
      errorCode = extmodeEvent(0,currentTime);
      if (errorCode != EXTMODE_SUCCESS) {
        /* Code to handle External Mode event errors
           may be added here */
      }
    }

    if (rtmIsMajorTimeStep(RobotSample_M)) {/* Sample time: [0.01s, 0.0s] */
      extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
      extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
        ((RobotSample_M->Timing.clockTick1 * 1) + 0)
        ;

      /* Trigger External Mode event */
      errorCode = extmodeEvent(1,currentTime);
      if (errorCode != EXTMODE_SUCCESS) {
        /* Code to handle External Mode event errors
           may be added here */
      }
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(RobotSample_M)) {
    rt_ertODEUpdateContinuousStates(&RobotSample_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++RobotSample_M->Timing.clockTick0;
    RobotSample_M->Timing.t[0] = rtsiGetSolverStopTime
      (&RobotSample_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      RobotSample_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void RobotSample_derivatives(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot_RobotSample_T *_rtXdot;
  char *msg;
  real_T time;
  int32_T tmp_1;
  int_T tmp_0[4];
  boolean_T tmp;
  _rtXdot = ((XDot_RobotSample_T *) RobotSample_M->derivs);

  /* Derivatives for SimscapeInputBlock: '<S32>/INPUT_1_1_1' */
  _rtXdot->RobotSampleSubsystem4Simulink_P[0] =
    RobotSample_X.RobotSampleSubsystem4Simulink_P[1];
  _rtXdot->RobotSampleSubsystem4Simulink_P[1] = ((RobotSample_B.Gain1 -
    RobotSample_X.RobotSampleSubsystem4Simulink_P[0]) * 100.0 - 2.0 *
    RobotSample_X.RobotSampleSubsystem4Simulink_P[1]) * 100.0;

  /* Derivatives for SimscapeInputBlock: '<S32>/INPUT_3_1_1' */
  _rtXdot->RobotSampleSubsystem4Simulink_i[0] =
    RobotSample_X.RobotSampleSubsystem4Simulink_i[1];
  _rtXdot->RobotSampleSubsystem4Simulink_i[1] = ((RobotSample_B.Gain1_o -
    RobotSample_X.RobotSampleSubsystem4Simulink_i[0]) * 100.0 - 2.0 *
    RobotSample_X.RobotSampleSubsystem4Simulink_i[1]) * 100.0;

  /* Derivatives for SimscapeInputBlock: '<S32>/INPUT_2_1_1' */
  _rtXdot->RobotSampleSubsystem4Simulink_b[0] =
    RobotSample_X.RobotSampleSubsystem4Simulink_b[1];
  _rtXdot->RobotSampleSubsystem4Simulink_b[1] = ((RobotSample_B.Gain1_a -
    RobotSample_X.RobotSampleSubsystem4Simulink_b[0]) * 100.0 - 2.0 *
    RobotSample_X.RobotSampleSubsystem4Simulink_b[1]) * 100.0;

  /* Derivatives for SimscapeExecutionBlock: '<S32>/STATE_1' */
  simulationData = (NeslSimulationData *)RobotSample_DW.STATE_1_SimData;
  time = RobotSample_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 6;
  simulationData->mData->mContStates.mX =
    &RobotSample_X.RobotSampleSubsystem4Cylindrica[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &RobotSample_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = (int32_T *)
    &RobotSample_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(RobotSample_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&RobotSample_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&RobotSample_M->solverInfo);
  tmp_0[0] = 0;
  RobotSample_B.dv4[0] = RobotSample_B.INPUT_1_1_1[0];
  RobotSample_B.dv4[1] = RobotSample_B.INPUT_1_1_1[1];
  RobotSample_B.dv4[2] = RobotSample_B.INPUT_1_1_1[2];
  RobotSample_B.dv4[3] = RobotSample_B.INPUT_1_1_1[3];
  tmp_0[1] = 4;
  RobotSample_B.dv4[4] = RobotSample_B.INPUT_3_1_1[0];
  RobotSample_B.dv4[5] = RobotSample_B.INPUT_3_1_1[1];
  RobotSample_B.dv4[6] = RobotSample_B.INPUT_3_1_1[2];
  RobotSample_B.dv4[7] = RobotSample_B.INPUT_3_1_1[3];
  tmp_0[2] = 8;
  RobotSample_B.dv4[8] = RobotSample_B.INPUT_2_1_1[0];
  RobotSample_B.dv4[9] = RobotSample_B.INPUT_2_1_1[1];
  RobotSample_B.dv4[10] = RobotSample_B.INPUT_2_1_1[2];
  RobotSample_B.dv4[11] = RobotSample_B.INPUT_2_1_1[3];
  tmp_0[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &RobotSample_B.dv4[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = (int32_T *)&tmp_0[0];
  simulationData->mData->mDx.mN = 6;
  simulationData->mData->mDx.mX = &_rtXdot->RobotSampleSubsystem4Cylindrica[0];
  diagnosticManager = (NeuDiagnosticManager *)RobotSample_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method((NeslSimulator *)RobotSample_DW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_1 != 0L) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(RobotSample_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(RobotSample_M, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S32>/STATE_1' */
}

/* Model initialize function */
void RobotSample_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&RobotSample_M->solverInfo,
                          &RobotSample_M->Timing.simTimeStep);
    rtsiSetTPtr(&RobotSample_M->solverInfo, &rtmGetTPtr(RobotSample_M));
    rtsiSetStepSizePtr(&RobotSample_M->solverInfo,
                       &RobotSample_M->Timing.stepSize0);
    rtsiSetdXPtr(&RobotSample_M->solverInfo, &RobotSample_M->derivs);
    rtsiSetContStatesPtr(&RobotSample_M->solverInfo, (real_T **)
                         &RobotSample_M->contStates);
    rtsiSetNumContStatesPtr(&RobotSample_M->solverInfo,
      &RobotSample_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&RobotSample_M->solverInfo,
      &RobotSample_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&RobotSample_M->solverInfo,
      &RobotSample_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&RobotSample_M->solverInfo,
      &RobotSample_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&RobotSample_M->solverInfo, (boolean_T**)
      &RobotSample_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&RobotSample_M->solverInfo, (&rtmGetErrorStatus
      (RobotSample_M)));
    rtsiSetRTModelPtr(&RobotSample_M->solverInfo, RobotSample_M);
  }

  rtsiSetSimTimeStep(&RobotSample_M->solverInfo, MAJOR_TIME_STEP);
  RobotSample_M->intgData.y = RobotSample_M->odeY;
  RobotSample_M->intgData.f[0] = RobotSample_M->odeF[0];
  RobotSample_M->intgData.f[1] = RobotSample_M->odeF[1];
  RobotSample_M->intgData.f[2] = RobotSample_M->odeF[2];
  RobotSample_M->contStates = ((X_RobotSample_T *) &RobotSample_X);
  RobotSample_M->contStateDisabled = ((XDis_RobotSample_T *) &RobotSample_XDis);
  RobotSample_M->Timing.tStart = (0.0);
  rtsiSetSolverData(&RobotSample_M->solverInfo, (void *)&RobotSample_M->intgData);
  rtsiSetIsMinorTimeStepWithModeChange(&RobotSample_M->solverInfo, false);
  rtsiSetSolverName(&RobotSample_M->solverInfo,"ode3");
  rtmSetTPtr(RobotSample_M, &RobotSample_M->Timing.tArray[0]);
  rtmSetTFinal(RobotSample_M, 7.0);
  RobotSample_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  RobotSample_M->Sizes.checksums[0] = (3370763384U);
  RobotSample_M->Sizes.checksums[1] = (309541371U);
  RobotSample_M->Sizes.checksums[2] = (115491932U);
  RobotSample_M->Sizes.checksums[3] = (218306062U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    RobotSample_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(RobotSample_M->extModeInfo,
      &RobotSample_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(RobotSample_M->extModeInfo,
                        RobotSample_M->Sizes.checksums);
    rteiSetTPtr(RobotSample_M->extModeInfo, rtmGetTPtr(RobotSample_M));
  }

  {
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    int32_T tmp_2;
    boolean_T tmp_0;

    /* Start for SimscapeExecutionBlock: '<S32>/STATE_1' */
    tmp = nesl_lease_simulator("RobotSample/Subsystem4/Solver Configuration_1",
      0L, 0L);
    RobotSample_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(RobotSample_DW.STATE_1_Simulator);
    if (tmp_0) {
      RobotSample_871ffa15_1_gateway();
      tmp = nesl_lease_simulator("RobotSample/Subsystem4/Solver Configuration_1",
        0L, 0L);
      RobotSample_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    RobotSample_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    RobotSample_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    RobotSample_B.modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    RobotSample_B.modelParameters.mSolverAbsTol = 0.001;
    RobotSample_B.modelParameters.mSolverRelTol = 0.001;
    RobotSample_B.modelParameters.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    RobotSample_B.modelParameters.mStartTime = 0.0;
    RobotSample_B.modelParameters.mLoadInitialState = false;
    RobotSample_B.modelParameters.mUseSimState = false;
    RobotSample_B.modelParameters.mLinTrimCompile = false;
    RobotSample_B.modelParameters.mLoggingMode = SSC_LOGGING_OFF;
    RobotSample_B.modelParameters.mRTWModifiedTimeStamp = 6.19854984E+8;
    RobotSample_B.modelParameters.mUseModelRefSolver = false;
    RobotSample_B.modelParameters.mTargetFPGAHIL = false;
    RobotSample_B.d1 = 0.001;
    RobotSample_B.modelParameters.mSolverTolerance = RobotSample_B.d1;
    RobotSample_B.d1 = 0.01;
    RobotSample_B.modelParameters.mFixedStepSize = RobotSample_B.d1;
    tmp_0 = false;
    RobotSample_B.modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    RobotSample_B.modelParameters.mIsUsingODEN = tmp_0;
    RobotSample_B.modelParameters.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)RobotSample_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      RobotSample_DW.STATE_1_Simulator, &RobotSample_B.modelParameters,
      diagnosticManager);
    if (tmp_2 != 0L) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(RobotSample_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(RobotSample_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S32>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S32>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("RobotSample/Subsystem4/Solver Configuration_1",
      1L, 0L);
    RobotSample_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(RobotSample_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      RobotSample_871ffa15_1_gateway();
      tmp = nesl_lease_simulator("RobotSample/Subsystem4/Solver Configuration_1",
        1L, 0L);
      RobotSample_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    RobotSample_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    RobotSample_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    RobotSample_B.modelParameters_m.mSolverType = NE_SOLVER_TYPE_DAE;
    RobotSample_B.modelParameters_m.mSolverAbsTol = 0.001;
    RobotSample_B.modelParameters_m.mSolverRelTol = 0.001;
    RobotSample_B.modelParameters_m.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    RobotSample_B.modelParameters_m.mStartTime = 0.0;
    RobotSample_B.modelParameters_m.mLoadInitialState = false;
    RobotSample_B.modelParameters_m.mUseSimState = false;
    RobotSample_B.modelParameters_m.mLinTrimCompile = false;
    RobotSample_B.modelParameters_m.mLoggingMode = SSC_LOGGING_OFF;
    RobotSample_B.modelParameters_m.mRTWModifiedTimeStamp = 6.19854984E+8;
    RobotSample_B.modelParameters_m.mUseModelRefSolver = false;
    RobotSample_B.modelParameters_m.mTargetFPGAHIL = false;
    RobotSample_B.d1 = 0.001;
    RobotSample_B.modelParameters_m.mSolverTolerance = RobotSample_B.d1;
    RobotSample_B.d1 = 0.01;
    RobotSample_B.modelParameters_m.mFixedStepSize = RobotSample_B.d1;
    tmp_0 = false;
    RobotSample_B.modelParameters_m.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    RobotSample_B.modelParameters_m.mIsUsingODEN = tmp_0;
    RobotSample_B.modelParameters_m.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      RobotSample_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      RobotSample_DW.OUTPUT_1_0_Simulator, &RobotSample_B.modelParameters_m,
      diagnosticManager);
    if (tmp_2 != 0L) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(RobotSample_M));
      if (tmp_0) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(RobotSample_M, msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S32>/OUTPUT_1_0' */
  }
}

/* Model terminate function */
void RobotSample_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S32>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    RobotSample_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    RobotSample_DW.STATE_1_SimData);
  nesl_erase_simulator("RobotSample/Subsystem4/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S32>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    RobotSample_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    RobotSample_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("RobotSample/Subsystem4/Solver Configuration_1");
  nesl_destroy_registry();
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
