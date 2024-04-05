/*
 * File: RobotFix.c
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

#include "RobotFix.h"
#include "rtwtypes.h"
#include "RobotFix_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include <float.h>

/* Block signals (default storage) */
B_RobotFix_T RobotFix_B;

/* Block states (default storage) */
DW_RobotFix_T RobotFix_DW;

/* Real-time model */
static RT_MODEL_RobotFix_T RobotFix_M_;
RT_MODEL_RobotFix_T *const RobotFix_M = &RobotFix_M_;

/* Forward declaration for local functions */
static real_T RobotFix_mod(real_T x, real_T y);
static void RobotFix_cosd(real_T *x);
static void RobotFix_sind(real_T *x);

/* Function for MATLAB Function: '<S4>/Trajectory3' */
static real_T RobotFix_mod(real_T x, real_T y)
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

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T tmp;
  real_T tmp_0;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
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
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
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

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      q = ceil(u1);
    } else {
      q = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != q)) {
      q = fabs(u0 / u1);
      if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/Forwardkinematic2' */
static void RobotFix_cosd(real_T *x)
{
  real_T absx;
  real_T b_x;
  int8_T n;
  if (rtIsInf(*x) || rtIsNaN(*x)) {
    *x = (rtNaN);
  } else {
    b_x = rt_remd_snf(*x, 360.0);
    absx = fabs(b_x);
    if (absx > 180.0) {
      if (b_x > 0.0) {
        b_x -= 360.0;
      } else {
        b_x += 360.0;
      }

      absx = fabs(b_x);
    }

    if (absx <= 45.0) {
      b_x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (b_x > 0.0) {
        b_x = (b_x - 90.0) * 0.017453292519943295;
        n = 1;
      } else {
        b_x = (b_x + 90.0) * 0.017453292519943295;
        n = -1;
      }
    } else if (b_x > 0.0) {
      b_x = (b_x - 180.0) * 0.017453292519943295;
      n = 2;
    } else {
      b_x = (b_x + 180.0) * 0.017453292519943295;
      n = -2;
    }

    switch (n) {
     case 0:
      *x = cos(b_x);
      break;

     case 1:
      *x = -sin(b_x);
      break;

     case -1:
      *x = sin(b_x);
      break;

     default:
      *x = -cos(b_x);
      break;
    }
  }
}

/* Function for MATLAB Function: '<Root>/Forwardkinematic2' */
static void RobotFix_sind(real_T *x)
{
  real_T absx;
  real_T b_x;
  int8_T n;
  if (rtIsInf(*x) || rtIsNaN(*x)) {
    *x = (rtNaN);
  } else {
    b_x = rt_remd_snf(*x, 360.0);
    absx = fabs(b_x);
    if (absx > 180.0) {
      if (b_x > 0.0) {
        b_x -= 360.0;
      } else {
        b_x += 360.0;
      }

      absx = fabs(b_x);
    }

    if (absx <= 45.0) {
      b_x *= 0.017453292519943295;
      n = 0;
    } else if (absx <= 135.0) {
      if (b_x > 0.0) {
        b_x = (b_x - 90.0) * 0.017453292519943295;
        n = 1;
      } else {
        b_x = (b_x + 90.0) * 0.017453292519943295;
        n = -1;
      }
    } else if (b_x > 0.0) {
      b_x = (b_x - 180.0) * 0.017453292519943295;
      n = 2;
    } else {
      b_x = (b_x + 180.0) * 0.017453292519943295;
      n = -2;
    }

    switch (n) {
     case 0:
      *x = sin(b_x);
      break;

     case 1:
      *x = cos(b_x);
      break;

     case -1:
      *x = -cos(b_x);
      break;

     default:
      *x = -sin(b_x);
      break;
    }
  }
}

/* Model step function */
void RobotFix_step(void)
{
  real_T x_i_tmp;
  real_T x_i_tmp_0;
  real_T x_i_tmp_1;
  real_T x_tmp;
  uint8_T tmp;

  /* Clock: '<S4>/Clock3' incorporates:
   *  Clock: '<S5>/Clock4'
   */
  RobotFix_B.s2 = RobotFix_M->Timing.t[0];

  /* MATLAB Function: '<S4>/Trajectory3' incorporates:
   *  Clock: '<S4>/Clock3'
   *  Constant: '<S4>/CK3'
   *  Constant: '<S4>/N3'
   *  Constant: '<S4>/pos3'
   *  Constant: '<S4>/vel3'
   */
  if (RobotFix_B.s2 < RobotFix_P.n * RobotFix_P.CK3_Value) {
    RobotFix_B.y = RobotFix_mod(RobotFix_B.s2, RobotFix_P.CK3_Value);
    RobotFix_B.i = (RobotFix_B.s2 - RobotFix_B.y) / RobotFix_P.CK3_Value + 1.0;
    RobotFix_B.y_n = rt_powd_snf(RobotFix_B.y, 3.0);
    RobotFix_B.x_i = RobotFix_P.V[(int16_T)RobotFix_B.i - 1];
    RobotFix_B.x = RobotFix_P.P[(int16_T)RobotFix_B.i - 1];
    RobotFix_B.x_i_tmp = RobotFix_P.V[(int16_T)(RobotFix_B.i + 1.0) - 1];
    RobotFix_B.x_i_tmp_m = RobotFix_P.CK3_Value * RobotFix_P.CK3_Value;
    RobotFix_B.x_i_tmp_c = RobotFix_P.P[(int16_T)(RobotFix_B.i + 1.0) - 1] -
      RobotFix_B.x;
    x_i_tmp = 3.0 / RobotFix_B.x_i_tmp_m;
    x_i_tmp_0 = RobotFix_B.y * RobotFix_B.y;
    RobotFix_B.x_i_tmp_m = 1.0 / RobotFix_B.x_i_tmp_m;
    x_i_tmp_1 = -2.0 / rt_powd_snf(RobotFix_P.CK3_Value, 3.0);
    RobotFix_B.x_i = (((RobotFix_B.x_i_tmp_c * x_i_tmp - 2.0 /
                        RobotFix_P.CK3_Value * RobotFix_B.x_i) - 1.0 /
                       RobotFix_P.CK3_Value * RobotFix_B.x_i_tmp) * x_i_tmp_0 +
                      (RobotFix_B.x_i * RobotFix_B.y + RobotFix_B.x)) +
      ((RobotFix_B.x_i_tmp + RobotFix_B.x_i) * RobotFix_B.x_i_tmp_m +
       RobotFix_B.x_i_tmp_c) * x_i_tmp_1 * RobotFix_B.y_n;
    RobotFix_B.x = RobotFix_P.V[(int16_T)RobotFix_B.i + 1];
    RobotFix_B.x_i_tmp = RobotFix_P.P[(int16_T)RobotFix_B.i + 1];
    RobotFix_B.x_i_tmp_c = RobotFix_P.V[(int16_T)(RobotFix_B.i + 1.0) + 1];
    RobotFix_B.i = RobotFix_P.P[(int16_T)(RobotFix_B.i + 1.0) + 1] -
      RobotFix_B.x_i_tmp;
    RobotFix_B.y_n = (((RobotFix_B.i * x_i_tmp - 2.0 / RobotFix_P.CK3_Value *
                        RobotFix_B.x) - 1.0 / RobotFix_P.CK3_Value *
                       RobotFix_B.x_i_tmp_c) * x_i_tmp_0 + (RobotFix_B.x *
      RobotFix_B.y + RobotFix_B.x_i_tmp)) + ((RobotFix_B.x_i_tmp_c +
      RobotFix_B.x) * RobotFix_B.x_i_tmp_m + RobotFix_B.i) * x_i_tmp_1 *
      RobotFix_B.y_n;
  } else {
    RobotFix_B.x_i = RobotFix_P.P[1];
    RobotFix_B.y_n = RobotFix_P.P[3];
  }

  /* End of MATLAB Function: '<S4>/Trajectory3' */

  /* MATLAB Function: '<S5>/Trajectory4' incorporates:
   *  Constant: '<S5>/CK4'
   *  Constant: '<S5>/N4'
   *  Constant: '<S5>/pos4'
   *  Constant: '<S5>/vel4'
   */
  if (RobotFix_B.s2 < RobotFix_P.n1 * RobotFix_P.CK4_Value) {
    RobotFix_B.y = RobotFix_mod(RobotFix_B.s2, RobotFix_P.CK4_Value);
    RobotFix_B.i = (RobotFix_B.s2 - RobotFix_B.y) / RobotFix_P.CK4_Value + 1.0;
    RobotFix_B.s2 = rt_powd_snf(RobotFix_B.y, 3.0);
    RobotFix_B.x = RobotFix_P.V1[(int16_T)RobotFix_B.i - 1];
    RobotFix_B.x_i_tmp = RobotFix_P.P1[(int16_T)RobotFix_B.i - 1];
    RobotFix_B.x_i_tmp_c = RobotFix_P.V1[(int16_T)(RobotFix_B.i + 1.0) - 1];
    RobotFix_B.x_i_tmp_m = RobotFix_P.CK4_Value * RobotFix_P.CK4_Value;
    x_tmp = RobotFix_P.P1[(int16_T)(RobotFix_B.i + 1.0) - 1] -
      RobotFix_B.x_i_tmp;
    x_i_tmp = 3.0 / RobotFix_B.x_i_tmp_m;
    x_i_tmp_0 = RobotFix_B.y * RobotFix_B.y;
    RobotFix_B.x_i_tmp_m = 1.0 / RobotFix_B.x_i_tmp_m;
    x_i_tmp_1 = -2.0 / rt_powd_snf(RobotFix_P.CK4_Value, 3.0);
    RobotFix_B.x = (((x_tmp * x_i_tmp - 2.0 / RobotFix_P.CK4_Value *
                      RobotFix_B.x) - 1.0 / RobotFix_P.CK4_Value *
                     RobotFix_B.x_i_tmp_c) * x_i_tmp_0 + (RobotFix_B.x *
      RobotFix_B.y + RobotFix_B.x_i_tmp)) + ((RobotFix_B.x_i_tmp_c +
      RobotFix_B.x) * RobotFix_B.x_i_tmp_m + x_tmp) * x_i_tmp_1 * RobotFix_B.s2;
    RobotFix_B.x_i_tmp = RobotFix_P.V1[(int16_T)RobotFix_B.i + 3];
    RobotFix_B.x_i_tmp_c = RobotFix_P.P1[(int16_T)RobotFix_B.i + 3];
    x_tmp = RobotFix_P.V1[(int16_T)(RobotFix_B.i + 1.0) + 3];
    RobotFix_B.i = RobotFix_P.P1[(int16_T)(RobotFix_B.i + 1.0) + 3] -
      RobotFix_B.x_i_tmp_c;
    RobotFix_B.y = (((RobotFix_B.i * x_i_tmp - 2.0 / RobotFix_P.CK4_Value *
                      RobotFix_B.x_i_tmp) - 1.0 / RobotFix_P.CK4_Value * x_tmp) *
                    x_i_tmp_0 + (RobotFix_B.x_i_tmp * RobotFix_B.y +
      RobotFix_B.x_i_tmp_c)) + ((x_tmp + RobotFix_B.x_i_tmp) *
      RobotFix_B.x_i_tmp_m + RobotFix_B.i) * x_i_tmp_1 * RobotFix_B.s2;
  } else {
    RobotFix_B.x = RobotFix_P.P1[3];
    RobotFix_B.y = RobotFix_P.P1[7];
  }

  /* End of MATLAB Function: '<S5>/Trajectory4' */

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/sw_type'
   *  Gain: '<S6>/Slider Gain'
   */
  if ((int16_T)(RobotFix_P.gaintype_gain * RobotFix_P.sw_type_Value) == 1) {
    RobotFix_B.x = RobotFix_B.x_i;
    RobotFix_B.y = RobotFix_B.y_n;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* MATLAB Function: '<Root>/Inversekinematic5' */
  RobotFix_B.y_n = RobotFix_B.y * RobotFix_B.y;
  RobotFix_B.i = ((((RobotFix_B.x - 120.0) - 80.0) * ((RobotFix_B.x - 120.0) -
    80.0) + RobotFix_B.y_n) - 18100.0) / 18000.0;
  RobotFix_B.s2 = sqrt(1.0 - RobotFix_B.i * RobotFix_B.i);
  RobotFix_B.x_i = 57.295779513082323 * rt_atan2d_snf(RobotFix_B.s2,
    RobotFix_B.i);
  RobotFix_B.i = 90.0 * RobotFix_B.i + 100.0;
  RobotFix_B.s2 *= 90.0;
  RobotFix_B.x_i_tmp_m = RobotFix_B.s2 * RobotFix_B.s2 + RobotFix_B.i *
    RobotFix_B.i;
  x_i_tmp = sqrt(RobotFix_B.x_i_tmp_m);
  RobotFix_B.y_n = rt_atan2d_snf(RobotFix_B.y / x_i_tmp, sqrt(1.0 -
    RobotFix_B.y_n / RobotFix_B.x_i_tmp_m)) * 57.295779513082323 - rt_atan2d_snf
    (RobotFix_B.s2 / x_i_tmp, RobotFix_B.i / x_i_tmp) * 57.295779513082323;

  /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
   *  Constant: '<Root>/sw_mode'
   *  Constant: '<S3>/const1'
   *  Constant: '<S3>/const2'
   *  Constant: '<S3>/const3'
   *  Gain: '<S10>/Slider Gain'
   *  Gain: '<S7>/Slider Gain'
   *  Gain: '<S8>/Slider Gain'
   *  Gain: '<S9>/Slider Gain'
   *  MATLAB Function: '<Root>/Inversekinematic5'
   */
  if ((int16_T)(RobotFix_P.mode_gain * RobotFix_P.sw_mode_Value) == 1) {
    RobotFix_B.y_n = RobotFix_P.theta1_in_gain * RobotFix_P.const1_Value;
    RobotFix_B.x_i = RobotFix_P.theta2_in_gain * RobotFix_P.const2_Value;
    RobotFix_B.y = RobotFix_P.theta3_in_gain * RobotFix_P.const3_Value;
  } else {
    RobotFix_B.y = (0.0 - RobotFix_B.y_n) - RobotFix_B.x_i;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */

  /* MATLABSystem: '<Root>/Continuous Servo Write3' */
  if (RobotFix_B.y_n + 90.0 < 0.0) {
    tmp = 0U;
  } else if (RobotFix_B.y_n + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    RobotFix_B.i = rt_roundd_snf(RobotFix_B.y_n + 90.0);
    if (RobotFix_B.i < 256.0) {
      if (RobotFix_B.i >= 0.0) {
        tmp = (uint8_T)RobotFix_B.i;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(0, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write3' */

  /* MATLABSystem: '<Root>/Continuous Servo Write4' */
  if (RobotFix_B.y + 90.0 < 0.0) {
    tmp = 0U;
  } else if (RobotFix_B.y + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    RobotFix_B.i = rt_roundd_snf(RobotFix_B.y + 90.0);
    if (RobotFix_B.i < 256.0) {
      if (RobotFix_B.i >= 0.0) {
        tmp = (uint8_T)RobotFix_B.i;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(1, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write4' */

  /* MATLABSystem: '<Root>/Continuous Servo Write5' */
  if (RobotFix_B.x_i + 90.0 < 0.0) {
    tmp = 0U;
  } else if (RobotFix_B.x_i + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    RobotFix_B.i = rt_roundd_snf(RobotFix_B.x_i + 90.0);
    if (RobotFix_B.i < 256.0) {
      if (RobotFix_B.i >= 0.0) {
        tmp = (uint8_T)RobotFix_B.i;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(2, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write5' */

  /* MATLAB Function: '<Root>/Forwardkinematic2' */
  RobotFix_B.x_i += RobotFix_B.y_n;
  RobotFix_B.i = RobotFix_B.x_i;
  RobotFix_cosd(&RobotFix_B.i);
  RobotFix_B.s2 = RobotFix_B.y_n;
  RobotFix_cosd(&RobotFix_B.s2);
  RobotFix_B.x_l = ((90.0 * RobotFix_B.i + 120.0) + 100.0 * RobotFix_B.s2) +
    80.0;
  RobotFix_B.i = RobotFix_B.x_i;
  RobotFix_sind(&RobotFix_B.i);
  RobotFix_sind(&RobotFix_B.y_n);
  RobotFix_B.y_g = 90.0 * RobotFix_B.i + 100.0 * RobotFix_B.y_n;
  RobotFix_B.the_lq = RobotFix_B.x_i + RobotFix_B.y;

  /* SignalConversion generated from: '<Root>/XValue2' */
  RobotFix_B.TmpSignalConversionAtTAQSigLogg[0] = 0.0;
  RobotFix_B.TmpSignalConversionAtTAQSigLogg[1] = RobotFix_B.x_l;

  /* SignalConversion generated from: '<Root>/YValue2' */
  RobotFix_B.TmpSignalConversionAtTAQSigLo_i[0] = 0.0;
  RobotFix_B.TmpSignalConversionAtTAQSigLo_i[1] = RobotFix_B.y_g;

  /* SignalConversion generated from: '<Root>/the_val' */
  RobotFix_B.TmpSignalConversionAtTAQSigLo_e[0] = 0.0;
  RobotFix_B.TmpSignalConversionAtTAQSigLo_e[1] = RobotFix_B.the_lq;

  {                                    /* Sample time: [0.0s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
      ((RobotFix_M->Timing.clockTick0 * 1) + 0)
      ;

    /* Trigger External Mode event */
    errorCode = extmodeEvent(0,currentTime);
    if (errorCode != EXTMODE_SUCCESS) {
      /* Code to handle External Mode event errors
         may be added here */
    }
  }

  {                                    /* Sample time: [0.01s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
      ((RobotFix_M->Timing.clockTick1 * 1) + 0)
      ;

    /* Trigger External Mode event */
    errorCode = extmodeEvent(1,currentTime);
    if (errorCode != EXTMODE_SUCCESS) {
      /* Code to handle External Mode event errors
         may be added here */
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  RobotFix_M->Timing.t[0] =
    ((time_T)(++RobotFix_M->Timing.clockTick0)) * RobotFix_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    RobotFix_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void RobotFix_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&RobotFix_M->solverInfo,
                          &RobotFix_M->Timing.simTimeStep);
    rtsiSetTPtr(&RobotFix_M->solverInfo, &rtmGetTPtr(RobotFix_M));
    rtsiSetStepSizePtr(&RobotFix_M->solverInfo, &RobotFix_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&RobotFix_M->solverInfo, (&rtmGetErrorStatus
      (RobotFix_M)));
    rtsiSetRTModelPtr(&RobotFix_M->solverInfo, RobotFix_M);
  }

  rtsiSetSimTimeStep(&RobotFix_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&RobotFix_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(RobotFix_M, &RobotFix_M->Timing.tArray[0]);
  rtmSetTFinal(RobotFix_M, 10.0);
  RobotFix_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  RobotFix_M->Sizes.checksums[0] = (3108813933U);
  RobotFix_M->Sizes.checksums[1] = (3120566827U);
  RobotFix_M->Sizes.checksums[2] = (457302007U);
  RobotFix_M->Sizes.checksums[3] = (3454300120U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[8];
    RobotFix_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(RobotFix_M->extModeInfo,
      &RobotFix_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(RobotFix_M->extModeInfo, RobotFix_M->Sizes.checksums);
    rteiSetTPtr(RobotFix_M->extModeInfo, rtmGetTPtr(RobotFix_M));
  }

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write3' */
  RobotFix_DW.obj_k.matlabCodegenIsDeleted = false;
  RobotFix_DW.obj_k.isInitialized = 1L;
  MW_servoAttach(0, 8);
  RobotFix_DW.obj_k.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write4' */
  RobotFix_DW.obj_h.matlabCodegenIsDeleted = false;
  RobotFix_DW.obj_h.isInitialized = 1L;
  MW_servoAttach(1, 10);
  RobotFix_DW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write5' */
  RobotFix_DW.obj.matlabCodegenIsDeleted = false;
  RobotFix_DW.obj.isInitialized = 1L;
  MW_servoAttach(2, 9);
  RobotFix_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void RobotFix_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Continuous Servo Write3' */
  if (!RobotFix_DW.obj_k.matlabCodegenIsDeleted) {
    RobotFix_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Continuous Servo Write3' */

  /* Terminate for MATLABSystem: '<Root>/Continuous Servo Write4' */
  if (!RobotFix_DW.obj_h.matlabCodegenIsDeleted) {
    RobotFix_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Continuous Servo Write4' */

  /* Terminate for MATLABSystem: '<Root>/Continuous Servo Write5' */
  if (!RobotFix_DW.obj.matlabCodegenIsDeleted) {
    RobotFix_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Continuous Servo Write5' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
