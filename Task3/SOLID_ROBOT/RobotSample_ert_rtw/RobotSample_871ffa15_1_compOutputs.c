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

PmfMessageId RobotSample_871ffa15_1_compOutputs(const RuntimeDerivedValuesBundle
  *rtdv, const double *state, const int *modeVector, const double *input, const
  double *inputDot, const double *inputDdot, const double *discreteState, double
  *output, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  output[0] = input[0];
  output[1] = input[1];
  output[2] = input[2];
  return NULL;
}
