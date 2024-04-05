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
#include "RobotSample_871ffa15_1_geometries.h"

PmfMessageId RobotSample_871ffa15_1_compDerivs(const RuntimeDerivedValuesBundle *
  rtdv, const int *eqnEnableFlags, const double *state, const int *modeVector,
  const double *input, const double *inputDot, const double *inputDdot, const
  double *discreteState, double *deriv, double *errorResult,
  NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  int ii[1];
  double xx[107];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 0.9999910690844086;
  xx[1] = 0.5;
  xx[2] = xx[1] * input[1];
  xx[3] = cos(xx[2]);
  xx[4] = xx[0] * xx[3];
  xx[5] = 4.226316531171361e-3;
  xx[6] = 0.9990335570961152;
  xx[7] = sin(xx[2]);
  xx[2] = xx[6] * xx[7];
  xx[8] = 0.04395397360743524;
  xx[9] = xx[8] * xx[7];
  xx[7] = xx[5] * xx[2] - xx[0] * xx[9];
  xx[10] = xx[5] * xx[3];
  xx[3] = xx[0] * xx[2] + xx[5] * xx[9];
  xx[0] = - xx[3];
  xx[11] = - xx[4];
  xx[12] = xx[7];
  xx[13] = xx[10];
  xx[14] = xx[0];
  xx[2] = 0.9997296947760553;
  xx[5] = xx[1] * input[2];
  xx[9] = cos(xx[5]);
  xx[15] = xx[2] * xx[9];
  xx[16] = 0.02324945984266561;
  xx[17] = 0.9959102672917149;
  xx[18] = sin(xx[5]);
  xx[5] = xx[17] * xx[18];
  xx[19] = 0.09034788045629434;
  xx[20] = xx[19] * xx[18];
  xx[18] = xx[16] * xx[5] - xx[2] * xx[20];
  xx[21] = xx[16] * xx[9];
  xx[9] = xx[2] * xx[5] + xx[16] * xx[20];
  xx[2] = - xx[9];
  xx[22] = - xx[15];
  xx[23] = xx[18];
  xx[24] = xx[21];
  xx[25] = xx[2];
  xx[5] = 0.03550801475922949;
  xx[16] = xx[5] * inputDot[0];
  xx[20] = 2.0;
  xx[26] = xx[7];
  xx[27] = xx[10];
  xx[28] = xx[0];
  xx[0] = 0.9993693916104587;
  xx[29] = xx[0] * inputDot[0];
  xx[30] = xx[10] * xx[29];
  xx[31] = xx[16] * xx[3] + xx[7] * xx[29];
  xx[32] = xx[10] * xx[16];
  xx[33] = xx[30];
  xx[34] = - xx[31];
  xx[35] = - xx[32];
  pm_math_Vector3_cross_ra(xx + 26, xx + 33, xx + 36);
  xx[33] = xx[16] + xx[20] * (xx[36] + xx[4] * xx[30]);
  xx[30] = xx[8] * inputDot[1];
  xx[34] = xx[33] + xx[30];
  xx[35] = xx[20] * (xx[37] - xx[4] * xx[31]);
  xx[31] = xx[29] + (xx[38] - xx[4] * xx[32]) * xx[20];
  xx[32] = xx[6] * inputDot[1];
  xx[36] = xx[31] + xx[32];
  pm_math_Quaternion_inverseXform_ra(xx + 22, xx + 34, xx + 37);
  xx[40] = xx[37] + xx[37] + xx[19] * inputDot[2];
  xx[41] = xx[38] + xx[38];
  xx[42] = xx[39] + xx[39] + xx[17] * inputDot[2];
  xx[37] = 0.01875541972225101;
  xx[43] = xx[19] * state[5];
  xx[44] = xx[37] * inputDot[2];
  xx[45] = xx[17] * state[5];
  pm_math_Vector3_cross_ra(xx + 40, xx + 43, xx + 46);
  xx[38] = 0.01190974395097885;
  xx[39] = xx[38] * xx[21];
  xx[40] = xx[18];
  xx[41] = xx[21];
  xx[42] = xx[2];
  xx[2] = 0.01991287819426631;
  xx[43] = xx[2] * xx[9] + xx[18] * xx[38];
  xx[44] = xx[2] * xx[21];
  xx[49] = - xx[39];
  xx[50] = xx[43];
  xx[51] = xx[44];
  pm_math_Vector3_cross_ra(xx + 40, xx + 49, xx + 52);
  xx[40] = 0.06042615427496881 + 0.04395397360743526 * state[4] - ((xx[39] * xx
    [15] + xx[52]) * xx[20] - xx[2]);
  xx[41] = - ((xx[53] - xx[15] * xx[43]) * xx[20]);
  xx[42] = xx[6] * state[4] - 3.552676999729717e-3 - (xx[20] * (xx[54] - xx[44] *
    xx[15]) - xx[38]);
  pm_math_Vector3_cross_ra(xx + 34, xx + 40, xx + 43);
  pm_math_Vector3_cross_ra(xx + 34, xx + 43, xx + 49);
  pm_math_Quaternion_inverseXform_ra(xx + 22, xx + 49, xx + 43);
  xx[2] = 0.01492901493232299;
  xx[38] = (xx[46] + xx[43]) * xx[2];
  xx[39] = (xx[48] + xx[45]) * xx[2];
  xx[49] = (xx[19] * xx[38] + xx[17] * xx[39]) / xx[2];
  xx[50] = xx[38] - 1.34880485643575e-3 * xx[49];
  xx[51] = (xx[47] + xx[44] + xx[37] * inputDdot[2]) * xx[2];
  xx[52] = xx[39] - 0.01486795925165179 * xx[49];
  pm_math_Quaternion_xform_ra(xx + 22, xx + 50, xx + 37);
  xx[43] = xx[15] * xx[15];
  xx[44] = 1.0;
  xx[45] = (xx[43] + xx[18] * xx[18]) * xx[20] - xx[44];
  xx[46] = xx[18] * xx[21];
  xx[47] = xx[15] * xx[9];
  xx[48] = xx[46] - xx[47];
  xx[50] = xx[18] * xx[9];
  xx[51] = xx[21] * xx[15];
  xx[52] = (xx[50] + xx[51]) * xx[20];
  xx[53] = (xx[46] + xx[47]) * xx[20];
  xx[46] = (xx[43] + xx[21] * xx[21]) * xx[20] - xx[44];
  xx[47] = xx[18] * xx[15];
  xx[15] = xx[21] * xx[9];
  xx[18] = xx[20] * (xx[47] - xx[15]);
  xx[21] = xx[20] * (xx[51] - xx[50]);
  xx[50] = xx[15] + xx[47];
  xx[15] = (xx[43] + xx[9] * xx[9]) * xx[20] - xx[44];
  xx[54] = xx[45];
  xx[55] = xx[20] * xx[48];
  xx[56] = - xx[52];
  xx[57] = xx[53];
  xx[58] = xx[46];
  xx[59] = xx[18];
  xx[60] = xx[21];
  xx[61] = - (xx[50] * xx[20]);
  xx[62] = xx[15];
  xx[9] = 0.01480715327239486;
  xx[43] = 1.343288605097291e-3;
  xx[47] = 0.02985802986464597;
  xx[51] = 1.218616599281269e-4;
  xx[63] = xx[9] * xx[45] + xx[43] * xx[52];
  xx[64] = xx[9] * xx[53] - xx[43] * xx[18];
  xx[65] = xx[9] * xx[21] - xx[43] * xx[15];
  xx[66] = xx[47] * xx[48];
  xx[67] = xx[2] * xx[46];
  xx[68] = - (xx[50] * xx[47]);
  xx[69] = - (xx[43] * xx[45] + xx[51] * xx[52]);
  xx[70] = xx[51] * xx[18] - xx[43] * xx[53];
  xx[71] = xx[51] * xx[15] - xx[43] * xx[21];
  pm_math_Matrix3x3_compose_ra(xx + 54, xx + 63, xx + 72);
  pm_math_Matrix3x3_postCross_ra(xx + 72, xx + 40, xx + 50);
  xx[59] = - xx[50];
  xx[60] = - xx[53];
  xx[61] = - xx[56];
  xx[62] = - xx[51];
  xx[63] = - xx[54];
  xx[64] = - xx[57];
  xx[65] = - xx[52];
  xx[66] = - xx[55];
  xx[67] = - xx[58];
  xx[2] = xx[32] * xx[35] + xx[8] * inputDdot[1];
  xx[9] = xx[31] * xx[30] - xx[33] * xx[32];
  xx[15] = xx[6] * inputDdot[1] - xx[30] * xx[35];
  xx[45] = xx[2];
  xx[46] = xx[9];
  xx[47] = xx[15];
  pm_math_Matrix3x3_transposeXform_ra(xx + 59, xx + 45, xx + 68);
  xx[18] = 0.02931089522707674;
  xx[21] = xx[18] + xx[72];
  xx[30] = xx[18] + xx[80];
  xx[59] = xx[21];
  xx[60] = xx[73];
  xx[61] = xx[74];
  xx[62] = xx[75];
  xx[63] = xx[18] + xx[76];
  xx[64] = xx[77];
  xx[65] = xx[78];
  xx[66] = xx[79];
  xx[67] = xx[30];
  xx[45] = xx[33] + xx[34];
  xx[46] = xx[35] + xx[35];
  xx[47] = xx[31] + xx[36];
  xx[31] = 0.03947608988193772;
  xx[32] = xx[8] * state[3];
  xx[33] = xx[31] * inputDot[1];
  xx[34] = xx[6] * state[3];
  pm_math_Vector3_cross_ra(xx + 45, xx + 32, xx + 80);
  xx[32] = 0.01414278299542873;
  xx[33] = xx[32] * xx[10];
  xx[34] = 0.04013651103873456;
  xx[35] = xx[34] * xx[3] + xx[7] * xx[32];
  xx[36] = xx[34] * xx[10];
  xx[45] = - xx[33];
  xx[46] = xx[35];
  xx[47] = xx[36];
  pm_math_Vector3_cross_ra(xx + 26, xx + 45, xx + 83);
  xx[43] = 0.07102881027222342 + xx[5] * state[2] - ((xx[33] * xx[4] + xx[83]) *
    xx[20] - xx[34]);
  xx[33] = xx[0] * state[2] - 3.610700012301834e-3 - (xx[20] * (xx[85] - xx[36] *
    xx[4]) - xx[32]);
  xx[32] = xx[29] * xx[43] - xx[16] * xx[33];
  xx[34] = (xx[84] - xx[4] * xx[35]) * xx[20];
  xx[45] = - (xx[29] * xx[32]);
  xx[46] = xx[29] * xx[34] * xx[29] + xx[16] * xx[34] * xx[16];
  xx[47] = xx[16] * xx[32];
  pm_math_Quaternion_inverseXform_ra(xx + 11, xx + 45, xx + 83);
  xx[32] = xx[80] + xx[83];
  xx[35] = xx[81] + xx[84] + xx[31] * inputDdot[1];
  xx[31] = xx[82] + xx[85];
  xx[45] = xx[32];
  xx[46] = xx[35];
  xx[47] = xx[31];
  pm_math_Matrix3x3_xform_ra(xx + 59, xx + 45, xx + 80);
  xx[36] = xx[37] + xx[68] + xx[80];
  xx[45] = xx[21] * xx[8] + xx[6] * xx[74];
  xx[46] = xx[39] + xx[70] + xx[82];
  xx[47] = xx[8] * xx[78] + xx[30] * xx[6];
  xx[48] = xx[45] * xx[8] + xx[47] * xx[6];
  ii[0] = factorSymmetricPosDef(xx + 48, 1, xx + 59);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'RobotSample/Subsystem4/Cylindrical1' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[59] = (xx[36] * xx[8] + xx[46] * xx[6]) / xx[48];
  xx[37] = xx[8] * xx[75] + xx[6] * xx[77];
  xx[60] = xx[36] - xx[45] * xx[59];
  xx[61] = xx[38] + xx[69] + xx[81] - xx[37] * xx[59];
  xx[62] = xx[46] - xx[47] * xx[59];
  pm_math_Quaternion_xform_ra(xx + 11, xx + 60, xx + 63);
  xx[36] = xx[5] * inputDdot[0];
  xx[38] = xx[4] * xx[4];
  xx[39] = xx[7] * xx[10];
  xx[46] = xx[4] * xx[3];
  xx[60] = xx[7] * xx[3];
  xx[61] = xx[10] * xx[4];
  xx[62] = xx[7] * xx[4];
  xx[66] = xx[10] * xx[3];
  xx[80] = (xx[38] + xx[7] * xx[7]) * xx[20] - xx[44];
  xx[81] = xx[20] * (xx[39] - xx[46]);
  xx[82] = - ((xx[60] + xx[61]) * xx[20]);
  xx[83] = (xx[39] + xx[46]) * xx[20];
  xx[84] = (xx[38] + xx[10] * xx[10]) * xx[20] - xx[44];
  xx[85] = xx[20] * (xx[62] - xx[66]);
  xx[86] = xx[20] * (xx[61] - xx[60]);
  xx[87] = - ((xx[66] + xx[62]) * xx[20]);
  xx[88] = (xx[38] + xx[3] * xx[3]) * xx[20] - xx[44];
  xx[38] = xx[8] * xx[50] + xx[6] * xx[56];
  xx[39] = xx[45] / xx[48];
  xx[44] = xx[37] / xx[48];
  xx[46] = xx[47] / xx[48];
  xx[60] = xx[8] * xx[51] + xx[6] * xx[57];
  xx[61] = xx[8] * xx[52] + xx[6] * xx[58];
  xx[89] = xx[38] * xx[39] - xx[50];
  xx[90] = xx[38] * xx[44] - xx[53];
  xx[91] = xx[38] * xx[46] - xx[56];
  xx[92] = xx[60] * xx[39] - xx[51];
  xx[93] = xx[60] * xx[44] - xx[54];
  xx[94] = xx[60] * xx[46] - xx[57];
  xx[95] = xx[61] * xx[39] - xx[52];
  xx[96] = xx[61] * xx[44] - xx[55];
  xx[97] = xx[61] * xx[46] - xx[58];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 89, xx + 80, xx + 50);
  pm_math_Matrix3x3_compose_ra(xx + 80, xx + 50, xx + 89);
  xx[50] = xx[37] * xx[39];
  xx[51] = xx[47] * xx[39];
  xx[52] = xx[47] * xx[44];
  xx[98] = xx[21] - xx[45] * xx[39];
  xx[99] = xx[73] - xx[50];
  xx[100] = xx[74] - xx[51];
  xx[101] = xx[75] - xx[50];
  xx[102] = xx[76] - xx[37] * xx[44] + xx[18];
  xx[103] = xx[77] - xx[52];
  xx[104] = xx[78] - xx[51];
  xx[105] = xx[79] - xx[52];
  xx[106] = xx[30] - xx[47] * xx[46];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 98, xx + 80, xx + 50);
  pm_math_Matrix3x3_compose_ra(xx + 80, xx + 50, xx + 66);
  xx[50] = xx[43];
  xx[51] = - xx[34];
  xx[52] = xx[33];
  pm_math_Matrix3x3_postCross_ra(xx + 66, xx + 50, xx + 75);
  xx[18] = xx[0] * inputDdot[0];
  xx[21] = 0.03331089522707675;
  xx[30] = xx[21] + xx[66];
  xx[37] = xx[21] + xx[74];
  xx[50] = xx[30];
  xx[51] = xx[67];
  xx[52] = xx[68];
  xx[53] = xx[69];
  xx[54] = xx[21] + xx[70];
  xx[55] = xx[71];
  xx[56] = xx[72];
  xx[57] = xx[73];
  xx[58] = xx[37];
  xx[21] = 0.0488877723021054;
  xx[45] = xx[21] * inputDot[0];
  xx[47] = xx[45] * xx[29];
  xx[62] = xx[5] * state[1] * xx[29] - xx[16] * xx[0] * state[1] + xx[21] *
    inputDdot[0];
  xx[21] = xx[16] * xx[45];
  xx[84] = - xx[47];
  xx[85] = xx[62];
  xx[86] = xx[21];
  pm_math_Matrix3x3_xform_ra(xx + 50, xx + 84, xx + 98);
  xx[16] = xx[30] * xx[5] + xx[0] * xx[68];
  xx[29] = xx[5] * xx[72] + xx[37] * xx[0];
  xx[30] = xx[16] * xx[5] + xx[29] * xx[0];
  ii[0] = factorSymmetricPosDef(xx + 30, 1, xx + 37);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'RobotSample/Subsystem4/Cylindrical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[50] = xx[16] / xx[30];
  xx[51] = (xx[5] * xx[69] + xx[0] * xx[71]) / xx[30];
  xx[52] = xx[29] / xx[30];
  xx[16] = 0.9998423354735633;
  xx[29] = xx[1] * input[0];
  xx[1] = cos(xx[29]);
  xx[37] = xx[16] * xx[1];
  xx[45] = 9.806649999999999;
  xx[53] = sin(xx[29]);
  xx[29] = xx[0] * xx[53];
  xx[54] = 0.01775680699818114;
  xx[55] = xx[5] * xx[53];
  xx[53] = xx[16] * xx[29] + xx[54] * xx[55];
  xx[56] = xx[45] * xx[53];
  xx[57] = xx[54] * xx[29] - xx[16] * xx[55];
  xx[16] = xx[57] * xx[45];
  xx[29] = xx[54] * xx[1];
  xx[1] = (xx[37] * xx[56] + xx[16] * xx[29]) * xx[20];
  xx[54] = (xx[56] * xx[53] + xx[57] * xx[16]) * xx[20];
  xx[53] = xx[20] * (xx[16] * xx[37] - xx[29] * xx[56]);
  xx[55] = xx[1];
  xx[56] = xx[45] - xx[54];
  xx[57] = xx[53];
  xx[16] = ((xx[63] + xx[36] * (xx[89] - xx[75]) + xx[18] * (xx[95] - xx[77]) +
             xx[98]) * xx[5] + (xx[65] + xx[36] * (xx[91] - xx[81]) + xx[18] *
             (xx[97] - xx[83]) + xx[100]) * xx[0]) / xx[30] +
    pm_math_Vector3_dot_ra(xx + 50, xx + 55);
  xx[50] = - (xx[38] / xx[48]);
  xx[51] = - (xx[60] / xx[48]);
  xx[52] = - (xx[61] / xx[48]);
  xx[29] = xx[10] * xx[18];
  xx[30] = xx[36] * xx[3] + xx[7] * xx[18];
  xx[3] = xx[10] * xx[36];
  xx[55] = xx[29];
  xx[56] = - xx[30];
  xx[57] = - xx[3];
  pm_math_Vector3_cross_ra(xx + 26, xx + 55, xx + 63);
  xx[7] = xx[36] + xx[20] * (xx[63] + xx[4] * xx[29]);
  xx[10] = xx[20] * (xx[64] - xx[4] * xx[30]);
  xx[26] = xx[18] + (xx[65] - xx[4] * xx[3]) * xx[20];
  xx[27] = xx[7];
  xx[28] = xx[10];
  xx[29] = xx[26];
  xx[55] = xx[39];
  xx[56] = xx[44];
  xx[57] = xx[46];
  xx[37] = xx[1] - xx[16] * xx[5] - xx[47] + xx[34] * xx[18];
  xx[38] = xx[62] - xx[54] + xx[18] * xx[43] - xx[36] * xx[33] + xx[45];
  xx[39] = xx[53] - xx[16] * xx[0] + xx[21] - xx[34] * xx[36];
  pm_math_Quaternion_inverseXform_ra(xx + 11, xx + 37, xx + 3);
  xx[0] = xx[59] + pm_math_Vector3_dot_ra(xx + 50, xx + 27) +
    pm_math_Vector3_dot_ra(xx + 55, xx + 3);
  xx[11] = xx[7] + xx[2];
  xx[12] = xx[10] + xx[9];
  xx[13] = xx[26] + xx[15];
  pm_math_Vector3_cross_ra(xx + 11, xx + 40, xx + 26);
  xx[9] = xx[3] - xx[0] * xx[8] + xx[32] + xx[26];
  xx[10] = xx[4] + xx[35] + xx[27];
  xx[11] = xx[5] - xx[0] * xx[6] + xx[31] + xx[28];
  pm_math_Quaternion_inverseXform_ra(xx + 22, xx + 9, xx + 1);
  deriv[0] = state[1];
  deriv[1] = - xx[16];
  deriv[2] = state[3];
  deriv[3] = - xx[0];
  deriv[4] = state[5];
  deriv[5] = - (xx[49] + xx[19] * xx[1] + xx[17] * xx[3]);
  errorResult[0] = 0.0;
  return NULL;
}

PmfMessageId RobotSample_871ffa15_1_numJacPerturbLoBounds(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *bounds, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[1];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 1.0e-9;
  bounds[0] = xx[0];
  bounds[1] = xx[0];
  bounds[2] = xx[0];
  bounds[3] = xx[0];
  bounds[4] = xx[0];
  bounds[5] = xx[0];
  errorResult[0] = 0.0;
  return NULL;
}

PmfMessageId RobotSample_871ffa15_1_numJacPerturbHiBounds(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *bounds, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[1];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = +pmf_get_inf();
  bounds[0] = xx[0];
  bounds[1] = xx[0];
  bounds[2] = xx[0];
  bounds[3] = xx[0];
  bounds[4] = xx[0];
  bounds[5] = xx[0];
  errorResult[0] = 0.0;
  return NULL;
}
