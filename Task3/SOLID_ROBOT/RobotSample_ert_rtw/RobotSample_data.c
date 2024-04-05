/*
 * File: RobotSample_data.c
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

/* Block parameters (default storage) */
P_RobotSample_T RobotSample_P = {
  /* Variable: P
   * Referenced by: '<S5>/pos3'
   */
  { 350.0, 360.0, -74.0, 70.0 },

  /* Variable: P1
   * Referenced by: '<S6>/pos4'
   */
  { 350.0, 350.0, 388.0, 350.0, -74.0, 70.0, 2.77, -74.0 },

  /* Variable: V
   * Referenced by: '<S5>/vel3'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Variable: V1
   * Referenced by: '<S6>/vel4'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Variable: n
   * Referenced by: '<S5>/N3'
   */
  1.0,

  /* Variable: n1
   * Referenced by: '<S6>/N4'
   */
  3.0,

  /* Mask Parameter: mode_gain
   * Referenced by: '<S8>/Slider Gain'
   */
  2.0,

  /* Mask Parameter: theta1_in_gain
   * Referenced by: '<S9>/Slider Gain'
   */
  0.0,

  /* Mask Parameter: theta2_in_gain
   * Referenced by: '<S10>/Slider Gain'
   */
  0.0,

  /* Mask Parameter: theta3_in_gain
   * Referenced by: '<S11>/Slider Gain'
   */
  0.0,

  /* Mask Parameter: gaintype_gain
   * Referenced by: '<S7>/Slider Gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/sw_mode'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/const1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/const2'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/const3'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/sw_type'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S5>/CK3'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S6>/CK4'
   */
  2.0,

  /* Expression: pi/180
   * Referenced by: '<S12>/Gain1'
   */
  0.017453292519943295,

  /* Expression: pi/180
   * Referenced by: '<S13>/Gain1'
   */
  0.017453292519943295,

  /* Expression: pi/180
   * Referenced by: '<S14>/Gain1'
   */
  0.017453292519943295
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
