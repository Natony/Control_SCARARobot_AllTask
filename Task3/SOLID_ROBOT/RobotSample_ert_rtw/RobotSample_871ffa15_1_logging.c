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

PmfMessageId RobotSample_871ffa15_1_recordLog(const RuntimeDerivedValuesBundle
  *rtdv, const int *eqnEnableFlags, const double *state, const int *modeVector,
  const double *input, const double *inputDot, const double *inputDdot, double
  *logVector, double *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  int ii[1];
  double xx[108];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) neDiagMgr;
  xx[0] = 57.29577951308232;
  xx[1] = 0.9999910690844086;
  xx[2] = 0.5;
  xx[3] = xx[2] * state[4];
  xx[4] = cos(xx[3]);
  xx[5] = xx[1] * xx[4];
  xx[6] = 4.226316531171361e-3;
  xx[7] = 0.9990335570961152;
  xx[8] = sin(xx[3]);
  xx[3] = xx[7] * xx[8];
  xx[9] = 0.04395397360743524;
  xx[10] = xx[9] * xx[8];
  xx[8] = xx[6] * xx[3] - xx[1] * xx[10];
  xx[11] = xx[6] * xx[4];
  xx[4] = xx[1] * xx[3] + xx[6] * xx[10];
  xx[1] = - xx[4];
  xx[12] = - xx[5];
  xx[13] = xx[8];
  xx[14] = xx[11];
  xx[15] = xx[1];
  xx[3] = 0.9997296947760553;
  xx[6] = xx[2] * state[8];
  xx[10] = cos(xx[6]);
  xx[16] = xx[3] * xx[10];
  xx[17] = 0.02324945984266561;
  xx[18] = 0.9959102672917149;
  xx[19] = sin(xx[6]);
  xx[6] = xx[18] * xx[19];
  xx[20] = 0.09034788045629434;
  xx[21] = xx[20] * xx[19];
  xx[19] = xx[17] * xx[6] - xx[3] * xx[21];
  xx[22] = xx[17] * xx[10];
  xx[10] = xx[3] * xx[6] + xx[17] * xx[21];
  xx[3] = - xx[10];
  xx[23] = - xx[16];
  xx[24] = xx[19];
  xx[25] = xx[22];
  xx[26] = xx[3];
  xx[6] = 0.03550801475922949;
  xx[17] = xx[6] * state[2];
  xx[21] = 2.0;
  xx[27] = xx[8];
  xx[28] = xx[11];
  xx[29] = xx[1];
  xx[1] = 0.9993693916104587;
  xx[30] = xx[1] * state[2];
  xx[31] = xx[11] * xx[30];
  xx[32] = xx[17] * xx[4] + xx[8] * xx[30];
  xx[33] = xx[11] * xx[17];
  xx[34] = xx[31];
  xx[35] = - xx[32];
  xx[36] = - xx[33];
  pm_math_Vector3_cross_ra(xx + 27, xx + 34, xx + 37);
  xx[34] = xx[17] + xx[21] * (xx[37] + xx[5] * xx[31]);
  xx[31] = xx[9] * state[6];
  xx[35] = xx[34] + xx[31];
  xx[36] = xx[21] * (xx[38] - xx[5] * xx[32]);
  xx[32] = xx[30] + (xx[39] - xx[5] * xx[33]) * xx[21];
  xx[33] = xx[7] * state[6];
  xx[37] = xx[32] + xx[33];
  pm_math_Quaternion_inverseXform_ra(xx + 23, xx + 35, xx + 38);
  xx[41] = xx[38] + xx[38] + xx[20] * state[10];
  xx[42] = xx[39] + xx[39];
  xx[43] = xx[40] + xx[40] + xx[18] * state[10];
  xx[38] = 0.01875541972225101;
  xx[44] = xx[20] * state[11];
  xx[45] = xx[38] * state[10];
  xx[46] = xx[18] * state[11];
  pm_math_Vector3_cross_ra(xx + 41, xx + 44, xx + 47);
  xx[39] = 0.01190974395097885;
  xx[40] = xx[39] * xx[22];
  xx[41] = xx[19];
  xx[42] = xx[22];
  xx[43] = xx[3];
  xx[3] = 0.01991287819426631;
  xx[44] = xx[3] * xx[10] + xx[19] * xx[39];
  xx[45] = xx[3] * xx[22];
  xx[50] = - xx[40];
  xx[51] = xx[44];
  xx[52] = xx[45];
  pm_math_Vector3_cross_ra(xx + 41, xx + 50, xx + 53);
  xx[41] = 0.06042615427496881 + 0.04395397360743526 * state[9] - ((xx[40] * xx
    [16] + xx[53]) * xx[21] - xx[3]);
  xx[42] = - ((xx[54] - xx[16] * xx[44]) * xx[21]);
  xx[43] = xx[7] * state[9] - 3.552676999729717e-3 - (xx[21] * (xx[55] - xx[45] *
    xx[16]) - xx[39]);
  pm_math_Vector3_cross_ra(xx + 35, xx + 41, xx + 44);
  pm_math_Vector3_cross_ra(xx + 35, xx + 44, xx + 50);
  pm_math_Quaternion_inverseXform_ra(xx + 23, xx + 50, xx + 44);
  xx[3] = 0.01492901493232299;
  xx[39] = (xx[47] + xx[44]) * xx[3];
  xx[40] = (xx[49] + xx[46]) * xx[3];
  xx[50] = (xx[20] * xx[39] + xx[18] * xx[40]) / xx[3];
  xx[51] = xx[39] - 1.34880485643575e-3 * xx[50];
  xx[52] = (xx[48] + xx[45] + xx[38] * inputDdot[2]) * xx[3];
  xx[53] = xx[40] - 0.01486795925165179 * xx[50];
  pm_math_Quaternion_xform_ra(xx + 23, xx + 51, xx + 38);
  xx[44] = xx[16] * xx[16];
  xx[45] = 1.0;
  xx[46] = (xx[44] + xx[19] * xx[19]) * xx[21] - xx[45];
  xx[47] = xx[19] * xx[22];
  xx[48] = xx[16] * xx[10];
  xx[49] = xx[47] - xx[48];
  xx[51] = xx[19] * xx[10];
  xx[52] = xx[22] * xx[16];
  xx[53] = (xx[51] + xx[52]) * xx[21];
  xx[54] = (xx[47] + xx[48]) * xx[21];
  xx[47] = (xx[44] + xx[22] * xx[22]) * xx[21] - xx[45];
  xx[48] = xx[19] * xx[16];
  xx[16] = xx[22] * xx[10];
  xx[19] = xx[21] * (xx[48] - xx[16]);
  xx[22] = xx[21] * (xx[52] - xx[51]);
  xx[51] = xx[16] + xx[48];
  xx[16] = (xx[44] + xx[10] * xx[10]) * xx[21] - xx[45];
  xx[55] = xx[46];
  xx[56] = xx[21] * xx[49];
  xx[57] = - xx[53];
  xx[58] = xx[54];
  xx[59] = xx[47];
  xx[60] = xx[19];
  xx[61] = xx[22];
  xx[62] = - (xx[51] * xx[21]);
  xx[63] = xx[16];
  xx[10] = 0.01480715327239486;
  xx[44] = 1.343288605097291e-3;
  xx[48] = 0.02985802986464597;
  xx[52] = 1.218616599281269e-4;
  xx[64] = xx[10] * xx[46] + xx[44] * xx[53];
  xx[65] = xx[10] * xx[54] - xx[44] * xx[19];
  xx[66] = xx[10] * xx[22] - xx[44] * xx[16];
  xx[67] = xx[48] * xx[49];
  xx[68] = xx[3] * xx[47];
  xx[69] = - (xx[51] * xx[48]);
  xx[70] = - (xx[44] * xx[46] + xx[52] * xx[53]);
  xx[71] = xx[52] * xx[19] - xx[44] * xx[54];
  xx[72] = xx[52] * xx[16] - xx[44] * xx[22];
  pm_math_Matrix3x3_compose_ra(xx + 55, xx + 64, xx + 73);
  pm_math_Matrix3x3_postCross_ra(xx + 73, xx + 41, xx + 51);
  xx[60] = - xx[51];
  xx[61] = - xx[54];
  xx[62] = - xx[57];
  xx[63] = - xx[52];
  xx[64] = - xx[55];
  xx[65] = - xx[58];
  xx[66] = - xx[53];
  xx[67] = - xx[56];
  xx[68] = - xx[59];
  xx[3] = xx[33] * xx[36] + xx[9] * inputDdot[1];
  xx[10] = xx[32] * xx[31] - xx[34] * xx[33];
  xx[16] = xx[7] * inputDdot[1] - xx[31] * xx[36];
  xx[46] = xx[3];
  xx[47] = xx[10];
  xx[48] = xx[16];
  pm_math_Matrix3x3_transposeXform_ra(xx + 60, xx + 46, xx + 69);
  xx[19] = 0.02931089522707674;
  xx[22] = xx[19] + xx[73];
  xx[31] = xx[19] + xx[81];
  xx[60] = xx[22];
  xx[61] = xx[74];
  xx[62] = xx[75];
  xx[63] = xx[76];
  xx[64] = xx[19] + xx[77];
  xx[65] = xx[78];
  xx[66] = xx[79];
  xx[67] = xx[80];
  xx[68] = xx[31];
  xx[46] = xx[34] + xx[35];
  xx[47] = xx[36] + xx[36];
  xx[48] = xx[32] + xx[37];
  xx[32] = 0.03947608988193772;
  xx[33] = xx[9] * state[7];
  xx[34] = xx[32] * state[6];
  xx[35] = xx[7] * state[7];
  pm_math_Vector3_cross_ra(xx + 46, xx + 33, xx + 81);
  xx[33] = 0.01414278299542873;
  xx[34] = xx[33] * xx[11];
  xx[35] = 0.04013651103873456;
  xx[36] = xx[35] * xx[4] + xx[8] * xx[33];
  xx[37] = xx[35] * xx[11];
  xx[46] = - xx[34];
  xx[47] = xx[36];
  xx[48] = xx[37];
  pm_math_Vector3_cross_ra(xx + 27, xx + 46, xx + 84);
  xx[44] = 0.07102881027222342 + xx[6] * state[5] - ((xx[34] * xx[5] + xx[84]) *
    xx[21] - xx[35]);
  xx[34] = xx[1] * state[5] - 3.610700012301834e-3 - (xx[21] * (xx[86] - xx[37] *
    xx[5]) - xx[33]);
  xx[33] = xx[30] * xx[44] - xx[17] * xx[34];
  xx[35] = (xx[85] - xx[5] * xx[36]) * xx[21];
  xx[46] = - (xx[30] * xx[33]);
  xx[47] = xx[30] * xx[35] * xx[30] + xx[17] * xx[35] * xx[17];
  xx[48] = xx[17] * xx[33];
  pm_math_Quaternion_inverseXform_ra(xx + 12, xx + 46, xx + 84);
  xx[33] = xx[81] + xx[84];
  xx[36] = xx[82] + xx[85] + xx[32] * inputDdot[1];
  xx[32] = xx[83] + xx[86];
  xx[46] = xx[33];
  xx[47] = xx[36];
  xx[48] = xx[32];
  pm_math_Matrix3x3_xform_ra(xx + 60, xx + 46, xx + 81);
  xx[37] = xx[38] + xx[69] + xx[81];
  xx[46] = xx[22] * xx[9] + xx[7] * xx[75];
  xx[47] = xx[40] + xx[71] + xx[83];
  xx[48] = xx[9] * xx[79] + xx[31] * xx[7];
  xx[49] = xx[46] * xx[9] + xx[48] * xx[7];
  ii[0] = factorSymmetricPosDef(xx + 49, 1, xx + 60);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'RobotSample/Subsystem4/Cylindrical1' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[60] = (xx[37] * xx[9] + xx[47] * xx[7]) / xx[49];
  xx[38] = xx[9] * xx[76] + xx[7] * xx[78];
  xx[61] = xx[37] - xx[46] * xx[60];
  xx[62] = xx[39] + xx[70] + xx[82] - xx[38] * xx[60];
  xx[63] = xx[47] - xx[48] * xx[60];
  pm_math_Quaternion_xform_ra(xx + 12, xx + 61, xx + 64);
  xx[37] = xx[6] * inputDdot[0];
  xx[39] = xx[5] * xx[5];
  xx[40] = xx[8] * xx[11];
  xx[47] = xx[5] * xx[4];
  xx[61] = xx[8] * xx[4];
  xx[62] = xx[11] * xx[5];
  xx[63] = xx[8] * xx[5];
  xx[67] = xx[11] * xx[4];
  xx[81] = (xx[39] + xx[8] * xx[8]) * xx[21] - xx[45];
  xx[82] = xx[21] * (xx[40] - xx[47]);
  xx[83] = - ((xx[61] + xx[62]) * xx[21]);
  xx[84] = (xx[40] + xx[47]) * xx[21];
  xx[85] = (xx[39] + xx[11] * xx[11]) * xx[21] - xx[45];
  xx[86] = xx[21] * (xx[63] - xx[67]);
  xx[87] = xx[21] * (xx[62] - xx[61]);
  xx[88] = - ((xx[67] + xx[63]) * xx[21]);
  xx[89] = (xx[39] + xx[4] * xx[4]) * xx[21] - xx[45];
  xx[39] = xx[9] * xx[51] + xx[7] * xx[57];
  xx[40] = xx[46] / xx[49];
  xx[45] = xx[38] / xx[49];
  xx[47] = xx[48] / xx[49];
  xx[61] = xx[9] * xx[52] + xx[7] * xx[58];
  xx[62] = xx[9] * xx[53] + xx[7] * xx[59];
  xx[90] = xx[39] * xx[40] - xx[51];
  xx[91] = xx[39] * xx[45] - xx[54];
  xx[92] = xx[39] * xx[47] - xx[57];
  xx[93] = xx[61] * xx[40] - xx[52];
  xx[94] = xx[61] * xx[45] - xx[55];
  xx[95] = xx[61] * xx[47] - xx[58];
  xx[96] = xx[62] * xx[40] - xx[53];
  xx[97] = xx[62] * xx[45] - xx[56];
  xx[98] = xx[62] * xx[47] - xx[59];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 90, xx + 81, xx + 51);
  pm_math_Matrix3x3_compose_ra(xx + 81, xx + 51, xx + 90);
  xx[51] = xx[38] * xx[40];
  xx[52] = xx[48] * xx[40];
  xx[53] = xx[48] * xx[45];
  xx[99] = xx[22] - xx[46] * xx[40];
  xx[100] = xx[74] - xx[51];
  xx[101] = xx[75] - xx[52];
  xx[102] = xx[76] - xx[51];
  xx[103] = xx[77] - xx[38] * xx[45] + xx[19];
  xx[104] = xx[78] - xx[53];
  xx[105] = xx[79] - xx[52];
  xx[106] = xx[80] - xx[53];
  xx[107] = xx[31] - xx[48] * xx[47];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 99, xx + 81, xx + 51);
  pm_math_Matrix3x3_compose_ra(xx + 81, xx + 51, xx + 67);
  xx[51] = xx[44];
  xx[52] = - xx[35];
  xx[53] = xx[34];
  pm_math_Matrix3x3_postCross_ra(xx + 67, xx + 51, xx + 76);
  xx[19] = xx[1] * inputDdot[0];
  xx[22] = 0.03331089522707675;
  xx[31] = xx[22] + xx[67];
  xx[38] = xx[22] + xx[75];
  xx[51] = xx[31];
  xx[52] = xx[68];
  xx[53] = xx[69];
  xx[54] = xx[70];
  xx[55] = xx[22] + xx[71];
  xx[56] = xx[72];
  xx[57] = xx[73];
  xx[58] = xx[74];
  xx[59] = xx[38];
  xx[22] = 0.0488877723021054;
  xx[46] = xx[22] * state[2];
  xx[48] = xx[46] * xx[30];
  xx[63] = xx[6] * state[3] * xx[30] - xx[17] * xx[1] * state[3] + xx[22] *
    inputDdot[0];
  xx[22] = xx[17] * xx[46];
  xx[85] = - xx[48];
  xx[86] = xx[63];
  xx[87] = xx[22];
  pm_math_Matrix3x3_xform_ra(xx + 51, xx + 85, xx + 99);
  xx[17] = xx[31] * xx[6] + xx[1] * xx[69];
  xx[30] = xx[6] * xx[73] + xx[38] * xx[1];
  xx[31] = xx[17] * xx[6] + xx[30] * xx[1];
  ii[0] = factorSymmetricPosDef(xx + 31, 1, xx + 38);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "physmod:sm:core:compiler:mechanism:mechanism:degenerateMassFoll",
      "'RobotSample/Subsystem4/Cylindrical' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[51] = xx[17] / xx[31];
  xx[52] = (xx[6] * xx[70] + xx[1] * xx[72]) / xx[31];
  xx[53] = xx[30] / xx[31];
  xx[17] = 0.9998423354735633;
  xx[30] = xx[2] * state[0];
  xx[2] = cos(xx[30]);
  xx[38] = xx[17] * xx[2];
  xx[46] = 9.806649999999999;
  xx[54] = sin(xx[30]);
  xx[30] = xx[1] * xx[54];
  xx[55] = 0.01775680699818114;
  xx[56] = xx[6] * xx[54];
  xx[54] = xx[17] * xx[30] + xx[55] * xx[56];
  xx[57] = xx[46] * xx[54];
  xx[58] = xx[55] * xx[30] - xx[17] * xx[56];
  xx[17] = xx[58] * xx[46];
  xx[30] = xx[55] * xx[2];
  xx[2] = (xx[38] * xx[57] + xx[17] * xx[30]) * xx[21];
  xx[55] = (xx[57] * xx[54] + xx[58] * xx[17]) * xx[21];
  xx[54] = xx[21] * (xx[17] * xx[38] - xx[30] * xx[57]);
  xx[56] = xx[2];
  xx[57] = xx[46] - xx[55];
  xx[58] = xx[54];
  xx[17] = ((xx[64] + xx[37] * (xx[90] - xx[76]) + xx[19] * (xx[96] - xx[78]) +
             xx[99]) * xx[6] + (xx[66] + xx[37] * (xx[92] - xx[82]) + xx[19] *
             (xx[98] - xx[84]) + xx[101]) * xx[1]) / xx[31] +
    pm_math_Vector3_dot_ra(xx + 51, xx + 56);
  xx[51] = - (xx[39] / xx[49]);
  xx[52] = - (xx[61] / xx[49]);
  xx[53] = - (xx[62] / xx[49]);
  xx[30] = xx[11] * xx[19];
  xx[31] = xx[37] * xx[4] + xx[8] * xx[19];
  xx[4] = xx[11] * xx[37];
  xx[56] = xx[30];
  xx[57] = - xx[31];
  xx[58] = - xx[4];
  pm_math_Vector3_cross_ra(xx + 27, xx + 56, xx + 64);
  xx[8] = xx[37] + xx[21] * (xx[64] + xx[5] * xx[30]);
  xx[11] = xx[21] * (xx[65] - xx[5] * xx[31]);
  xx[27] = xx[19] + (xx[66] - xx[5] * xx[4]) * xx[21];
  xx[28] = xx[8];
  xx[29] = xx[11];
  xx[30] = xx[27];
  xx[56] = xx[40];
  xx[57] = xx[45];
  xx[58] = xx[47];
  xx[38] = xx[2] - xx[17] * xx[6] - xx[48] + xx[35] * xx[19];
  xx[39] = xx[63] - xx[55] + xx[19] * xx[44] - xx[37] * xx[34] + xx[46];
  xx[40] = xx[54] - xx[17] * xx[1] + xx[22] - xx[35] * xx[37];
  pm_math_Quaternion_inverseXform_ra(xx + 12, xx + 38, xx + 4);
  xx[1] = xx[60] + pm_math_Vector3_dot_ra(xx + 51, xx + 28) +
    pm_math_Vector3_dot_ra(xx + 56, xx + 4);
  xx[12] = xx[8] + xx[3];
  xx[13] = xx[11] + xx[10];
  xx[14] = xx[27] + xx[16];
  pm_math_Vector3_cross_ra(xx + 12, xx + 41, xx + 27);
  xx[10] = xx[4] - xx[1] * xx[9] + xx[33] + xx[27];
  xx[11] = xx[5] + xx[36] + xx[28];
  xx[12] = xx[6] - xx[1] * xx[7] + xx[32] + xx[29];
  pm_math_Quaternion_inverseXform_ra(xx + 23, xx + 10, xx + 2);
  logVector[0] = xx[0] * state[0];
  logVector[1] = state[1];
  logVector[2] = xx[0] * state[2];
  logVector[3] = state[3];
  logVector[4] = xx[0] * state[4];
  logVector[5] = state[5];
  logVector[6] = xx[0] * state[6];
  logVector[7] = state[7];
  logVector[8] = xx[0] * state[8];
  logVector[9] = state[9];
  logVector[10] = xx[0] * state[10];
  logVector[11] = state[11];
  logVector[12] = xx[0] * inputDdot[0];
  logVector[13] = - xx[17];
  logVector[14] = xx[0] * inputDdot[1];
  logVector[15] = - xx[1];
  logVector[16] = xx[0] * inputDdot[2];
  logVector[17] = - (xx[50] + xx[20] * xx[2] + xx[18] * xx[4]);
  errorResult[0] = 0.0;
  return NULL;
}
