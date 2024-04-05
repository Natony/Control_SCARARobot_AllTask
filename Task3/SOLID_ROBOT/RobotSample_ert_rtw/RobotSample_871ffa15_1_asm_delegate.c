/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'RobotSample/Subsystem4/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"

void RobotSample_871ffa15_1_setTargets(const RuntimeDerivedValuesBundle *rtdv,
  CTarget *targets)
{
  (void) rtdv;
  (void) targets;
}

void RobotSample_871ffa15_1_resetAsmStateVector(const void *mech, double *state)
{
  double xx[1];
  (void) mech;
  xx[0] = 0.0;
  state[0] = xx[0];
  state[1] = xx[0];
  state[2] = xx[0];
  state[3] = xx[0];
  state[4] = xx[0];
  state[5] = xx[0];
  state[6] = xx[0];
  state[7] = xx[0];
  state[8] = xx[0];
  state[9] = xx[0];
  state[10] = xx[0];
  state[11] = xx[0];
}

void RobotSample_871ffa15_1_initializeTrackedAngleState(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *modeVector, const double
  *motionData, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
  (void) motionData;
}

void RobotSample_871ffa15_1_computeDiscreteState(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
}

void RobotSample_871ffa15_1_adjustPosition(const void *mech, const double
  *dofDeltas, double *state)
{
  (void) mech;
  state[0] = state[0] + dofDeltas[0];
  state[1] = state[1] + dofDeltas[1];
  state[4] = state[4] + dofDeltas[2];
  state[5] = state[5] + dofDeltas[3];
  state[8] = state[8] + dofDeltas[4];
  state[9] = state[9] + dofDeltas[5];
}

static void perturbAsmJointPrimitiveState_0_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbAsmJointPrimitiveState_0_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[2] = state[2] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_0_1(double mag, double *state)
{
  state[1] = state[1] + mag;
}

static void perturbAsmJointPrimitiveState_0_1v(double mag, double *state)
{
  state[1] = state[1] + mag;
  state[3] = state[3] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_0(double mag, double *state)
{
  state[4] = state[4] + mag;
}

static void perturbAsmJointPrimitiveState_1_0v(double mag, double *state)
{
  state[4] = state[4] + mag;
  state[6] = state[6] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_1(double mag, double *state)
{
  state[5] = state[5] + mag;
}

static void perturbAsmJointPrimitiveState_1_1v(double mag, double *state)
{
  state[5] = state[5] + mag;
  state[7] = state[7] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_2_0(double mag, double *state)
{
  state[8] = state[8] + mag;
}

static void perturbAsmJointPrimitiveState_2_0v(double mag, double *state)
{
  state[8] = state[8] + mag;
  state[10] = state[10] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_2_1(double mag, double *state)
{
  state[9] = state[9] + mag;
}

static void perturbAsmJointPrimitiveState_2_1v(double mag, double *state)
{
  state[9] = state[9] + mag;
  state[11] = state[11] - 0.875 * mag;
}

void RobotSample_871ffa15_1_perturbAsmJointPrimitiveState(const void *mech,
  size_t stageIdx, size_t primIdx, double mag, boolean_T doPerturbVelocity,
  double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch ((stageIdx * 6 + primIdx) * 2 + (doPerturbVelocity ? 1 : 0))
  {
   case 0:
    perturbAsmJointPrimitiveState_0_0(mag, state);
    break;

   case 1:
    perturbAsmJointPrimitiveState_0_0v(mag, state);
    break;

   case 2:
    perturbAsmJointPrimitiveState_0_1(mag, state);
    break;

   case 3:
    perturbAsmJointPrimitiveState_0_1v(mag, state);
    break;

   case 12:
    perturbAsmJointPrimitiveState_1_0(mag, state);
    break;

   case 13:
    perturbAsmJointPrimitiveState_1_0v(mag, state);
    break;

   case 14:
    perturbAsmJointPrimitiveState_1_1(mag, state);
    break;

   case 15:
    perturbAsmJointPrimitiveState_1_1v(mag, state);
    break;

   case 24:
    perturbAsmJointPrimitiveState_2_0(mag, state);
    break;

   case 25:
    perturbAsmJointPrimitiveState_2_0v(mag, state);
    break;

   case 26:
    perturbAsmJointPrimitiveState_2_1(mag, state);
    break;

   case 27:
    perturbAsmJointPrimitiveState_2_1v(mag, state);
    break;
  }
}

void RobotSample_871ffa15_1_computePosDofBlendMatrix(const void *mech, size_t
  stageIdx, size_t primIdx, const double *state, int partialType, double *matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void RobotSample_871ffa15_1_computeVelDofBlendMatrix(const void *mech, size_t
  stageIdx, size_t primIdx, const double *state, int partialType, double *matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void RobotSample_871ffa15_1_projectPartiallyTargetedPos(const void *mech, size_t
  stageIdx, size_t primIdx, const double *origState, int partialType, double
  *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) origState;
  (void) partialType;
  (void) state;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void RobotSample_871ffa15_1_propagateMotion(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const double *state, double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[56];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  xx[0] = 0.9998423354735633;
  xx[1] = 0.5;
  xx[2] = xx[1] * state[0];
  xx[3] = cos(xx[2]);
  xx[4] = xx[0] * xx[3];
  xx[5] = 0.01775680699818114;
  xx[6] = 0.9993693916104587;
  xx[7] = sin(xx[2]);
  xx[2] = xx[6] * xx[7];
  xx[8] = 0.03550801475922949;
  xx[9] = xx[8] * xx[7];
  xx[7] = xx[5] * xx[2] - xx[0] * xx[9];
  xx[10] = xx[5] * xx[3];
  xx[3] = xx[0] * xx[2] + xx[5] * xx[9];
  xx[0] = - xx[3];
  xx[2] = 0.1042835243602924;
  xx[5] = xx[2] * xx[10];
  xx[11] = xx[7];
  xx[12] = xx[10];
  xx[13] = xx[0];
  xx[9] = 0.0526238582707507;
  xx[14] = xx[9] * xx[3] + xx[7] * xx[2];
  xx[2] = xx[9] * xx[10];
  xx[15] = - xx[5];
  xx[16] = xx[14];
  xx[17] = xx[2];
  pm_math_Vector3_cross_ra(xx + 11, xx + 15, xx + 18);
  xx[3] = 2.0;
  xx[9] = 0.9999910690844086;
  xx[11] = xx[1] * state[4];
  xx[12] = cos(xx[11]);
  xx[13] = xx[9] * xx[12];
  xx[15] = - xx[13];
  xx[16] = 4.226316531171361e-3;
  xx[17] = 0.9990335570961152;
  xx[21] = sin(xx[11]);
  xx[11] = xx[17] * xx[21];
  xx[22] = 0.04395397360743524;
  xx[23] = xx[22] * xx[21];
  xx[21] = xx[16] * xx[11] - xx[9] * xx[23];
  xx[24] = xx[16] * xx[12];
  xx[12] = xx[9] * xx[11] + xx[16] * xx[23];
  xx[9] = - xx[12];
  xx[11] = 0.01414278299542873;
  xx[16] = xx[11] * xx[24];
  xx[25] = xx[21];
  xx[26] = xx[24];
  xx[27] = xx[9];
  xx[23] = 0.04013651103873456;
  xx[28] = xx[23] * xx[12] + xx[21] * xx[11];
  xx[29] = xx[23] * xx[24];
  xx[30] = - xx[16];
  xx[31] = xx[28];
  xx[32] = xx[29];
  pm_math_Vector3_cross_ra(xx + 25, xx + 30, xx + 33);
  xx[30] = 0.07102881027222342 + xx[8] * state[5] - ((xx[16] * xx[13] + xx[33]) *
    xx[3] - xx[23]);
  xx[16] = (xx[34] - xx[13] * xx[28]) * xx[3];
  xx[23] = xx[6] * state[5] - 3.610700012301834e-3 - (xx[3] * (xx[35] - xx[29] *
    xx[13]) - xx[11]);
  xx[11] = 0.9997296947760553;
  xx[28] = xx[1] * state[8];
  xx[1] = cos(xx[28]);
  xx[29] = xx[11] * xx[1];
  xx[31] = - xx[29];
  xx[32] = 0.02324945984266561;
  xx[33] = 0.9959102672917149;
  xx[34] = sin(xx[28]);
  xx[28] = xx[33] * xx[34];
  xx[35] = 0.09034788045629434;
  xx[36] = xx[35] * xx[34];
  xx[34] = xx[32] * xx[28] - xx[11] * xx[36];
  xx[37] = xx[32] * xx[1];
  xx[1] = xx[11] * xx[28] + xx[32] * xx[36];
  xx[11] = - xx[1];
  xx[28] = 0.01190974395097885;
  xx[32] = xx[28] * xx[37];
  xx[38] = xx[34];
  xx[39] = xx[37];
  xx[40] = xx[11];
  xx[36] = 0.01991287819426631;
  xx[41] = xx[36] * xx[1] + xx[34] * xx[28];
  xx[1] = xx[36] * xx[37];
  xx[42] = - xx[32];
  xx[43] = xx[41];
  xx[44] = xx[1];
  pm_math_Vector3_cross_ra(xx + 38, xx + 42, xx + 45);
  xx[38] = 0.06042615427496881 + 0.04395397360743526 * state[9] - ((xx[32] * xx
    [29] + xx[45]) * xx[3] - xx[36]);
  xx[32] = - ((xx[46] - xx[29] * xx[41]) * xx[3]);
  xx[36] = xx[17] * state[9] - 3.552676999729717e-3 - (xx[3] * (xx[47] - xx[1] *
    xx[29]) - xx[28]);
  xx[1] = xx[8] * state[2];
  xx[28] = xx[6] * state[2];
  xx[29] = xx[8] * state[3];
  xx[8] = 0.0488877723021054 * state[2];
  xx[39] = xx[6] * state[3];
  xx[6] = xx[24] * xx[28];
  xx[40] = xx[1] * xx[12] + xx[21] * xx[28];
  xx[12] = xx[24] * xx[1];
  xx[41] = xx[6];
  xx[42] = - xx[40];
  xx[43] = - xx[12];
  pm_math_Vector3_cross_ra(xx + 25, xx + 41, xx + 44);
  xx[25] = xx[1] + xx[3] * (xx[44] + xx[13] * xx[6]) + xx[22] * state[6];
  xx[6] = xx[3] * (xx[45] - xx[13] * xx[40]);
  xx[26] = xx[28] + (xx[46] - xx[13] * xx[12]) * xx[3] + xx[17] * state[6];
  xx[40] = xx[15];
  xx[41] = xx[21];
  xx[42] = xx[24];
  xx[43] = xx[9];
  xx[44] = xx[16] * xx[28] + xx[29];
  xx[45] = xx[28] * xx[30] - xx[1] * xx[23] + xx[8];
  xx[46] = xx[39] - xx[16] * xx[1];
  pm_math_Quaternion_inverseXform_ra(xx + 40, xx + 44, xx + 47);
  xx[12] = xx[47] + xx[22] * state[7];
  xx[13] = xx[48] + 0.03947608988193772 * state[6];
  xx[22] = xx[49] + xx[17] * state[7];
  xx[40] = xx[31];
  xx[41] = xx[34];
  xx[42] = xx[37];
  xx[43] = xx[11];
  xx[44] = xx[25];
  xx[45] = xx[6];
  xx[46] = xx[26];
  pm_math_Quaternion_inverseXform_ra(xx + 40, xx + 44, xx + 47);
  xx[50] = xx[38];
  xx[51] = xx[32];
  xx[52] = xx[36];
  pm_math_Vector3_cross_ra(xx + 44, xx + 50, xx + 53);
  xx[44] = xx[53] + xx[12];
  xx[45] = xx[54] + xx[13];
  xx[46] = xx[55] + xx[22];
  pm_math_Quaternion_inverseXform_ra(xx + 40, xx + 44, xx + 50);
  motionData[0] = - xx[4];
  motionData[1] = xx[7];
  motionData[2] = xx[10];
  motionData[3] = xx[0];
  motionData[4] = 0.1193657442391426 - (xx[5] * xx[4] + xx[18]) * xx[3];
  motionData[5] = - (0.2968456390102104 + (xx[19] - xx[4] * xx[14]) * xx[3]);
  motionData[6] = state[1] - xx[3] * (xx[20] - xx[2] * xx[4]) +
    0.2042114555868933;
  motionData[7] = xx[15];
  motionData[8] = xx[21];
  motionData[9] = xx[24];
  motionData[10] = xx[9];
  motionData[11] = xx[30];
  motionData[12] = - xx[16];
  motionData[13] = xx[23];
  motionData[14] = xx[31];
  motionData[15] = xx[34];
  motionData[16] = xx[37];
  motionData[17] = xx[11];
  motionData[18] = xx[38];
  motionData[19] = xx[32];
  motionData[20] = xx[36];
  motionData[21] = xx[1];
  motionData[22] = 0.0;
  motionData[23] = xx[28];
  motionData[24] = xx[29];
  motionData[25] = xx[8];
  motionData[26] = xx[39];
  motionData[27] = xx[25];
  motionData[28] = xx[6];
  motionData[29] = xx[26];
  motionData[30] = xx[12];
  motionData[31] = xx[13];
  motionData[32] = xx[22];
  motionData[33] = xx[47] + xx[35] * state[10];
  motionData[34] = xx[48];
  motionData[35] = xx[49] + xx[33] * state[10];
  motionData[36] = xx[50] + xx[35] * state[11];
  motionData[37] = xx[51] + 0.01875541972225101 * state[10];
  motionData[38] = xx[52] + xx[33] * state[11];
}

size_t RobotSample_871ffa15_1_computeAssemblyError(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const int *modeVector,
  const double *motionData, double *error)
{
  (void) mech;
  (void)rtdv;
  (void) modeVector;
  (void) motionData;
  (void) error;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t RobotSample_871ffa15_1_computeAssemblyJacobian(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, boolean_T
  forVelocitySatisfaction, const double *state, const int *modeVector, const
  double *motionData, double *J)
{
  (void) mech;
  (void) rtdv;
  (void) state;
  (void) modeVector;
  (void) forVelocitySatisfaction;
  (void) motionData;
  (void) J;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t RobotSample_871ffa15_1_computeFullAssemblyJacobian(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const double *state, const int
  *modeVector, const double *motionData, double *J)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
  (void) motionData;
  (void) J;
  return 0;
}

boolean_T RobotSample_871ffa15_1_isInKinematicSingularity(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const int
  *modeVector, const double *motionData)
{
  (void) mech;
  (void) rtdv;
  (void) modeVector;
  (void) motionData;
  switch (constraintIdx)
  {
  }

  return 0;
}

void RobotSample_871ffa15_1_convertStateVector(const void *asmMech, const
  RuntimeDerivedValuesBundle *rtdv, const void *simMech, const double *asmState,
  const int *asmModeVector, const int *simModeVector, double *simState)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) asmMech;
  (void) rtdvd;
  (void) rtdvi;
  (void) simMech;
  (void) asmModeVector;
  (void) simModeVector;
  simState[0] = asmState[0];
  simState[1] = asmState[1];
  simState[2] = asmState[2];
  simState[3] = asmState[3];
  simState[4] = asmState[4];
  simState[5] = asmState[5];
  simState[6] = asmState[6];
  simState[7] = asmState[7];
  simState[8] = asmState[8];
  simState[9] = asmState[9];
  simState[10] = asmState[10];
  simState[11] = asmState[11];
}
