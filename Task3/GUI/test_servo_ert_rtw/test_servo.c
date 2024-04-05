/*
 * File: test_servo.c
 *
 * Code generated for Simulink model 'test_servo'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Dec 28 00:37:38 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test_servo.h"
#include "rtwtypes.h"
#include <math.h>
#include "test_servo_private.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include <float.h>

/* Block signals (default storage) */
B_test_servo_T test_servo_B;

/* Real-time model */
static RT_MODEL_test_servo_T test_servo_M_;
RT_MODEL_test_servo_T *const test_servo_M = &test_servo_M_;

/* Forward declaration for local functions */
static void test_servo_TrajectoryPlanning(real_T t, const real_T P0[2], const
  real_T v0[2], const real_T Pf[2], const real_T vf[2], real_T tf, real_T t0,
  real_T *x, real_T *y);
static void test_servo_cosd(real_T *x);
static void test_servo_sind(real_T *x);
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

/* Function for MATLAB Function: '<S1>/MATLAB Function' */
static void test_servo_TrajectoryPlanning(real_T t, const real_T P0[2], const
  real_T v0[2], const real_T Pf[2], const real_T vf[2], real_T tf, real_T t0,
  real_T *x, real_T *y)
{
  real_T x_tmp;
  real_T x_tmp_0;
  real_T x_tmp_1;
  real_T x_tmp_2;
  real_T x_tmp_3;
  test_servo_B.a_tmp = t - t0;
  test_servo_B.x_tmp = rt_powd_snf(test_servo_B.a_tmp, 3.0);
  x_tmp = tf * tf;
  x_tmp_0 = Pf[0] - P0[0];
  x_tmp_1 = 3.0 / x_tmp;
  x_tmp = 1.0 / x_tmp;
  x_tmp_2 = -2.0 / rt_powd_snf(tf, 3.0);
  x_tmp_3 = test_servo_B.a_tmp * test_servo_B.a_tmp;
  *x = (((x_tmp_1 * x_tmp_0 - 2.0 / tf * v0[0]) - 1.0 / tf * vf[0]) * x_tmp_3 +
        (test_servo_B.a_tmp * v0[0] + P0[0])) + ((vf[0] + v0[0]) * x_tmp +
    x_tmp_2 * x_tmp_0) * test_servo_B.x_tmp;
  x_tmp_0 = Pf[1] - P0[1];
  *y = (((x_tmp_1 * x_tmp_0 - 2.0 / tf * v0[1]) - 1.0 / tf * vf[1]) * x_tmp_3 +
        (test_servo_B.a_tmp * v0[1] + P0[1])) + ((vf[1] + v0[1]) * x_tmp +
    x_tmp_2 * x_tmp_0) * test_servo_B.x_tmp;
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

/* Function for MATLAB Function: '<Root>/FK' */
static void test_servo_cosd(real_T *x)
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

/* Function for MATLAB Function: '<Root>/FK' */
static void test_servo_sind(real_T *x)
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

/* Model step function */
void test_servo_step(void)
{
  uint8_T tmp;

  /* Clock: '<S1>/Clock' incorporates:
   *  Clock: '<S2>/Clock'
   */
  test_servo_B.theta1_m = test_servo_M->Timing.t[0];

  /* MATLAB Function: '<S1>/MATLAB Function' incorporates:
   *  Clock: '<S1>/Clock'
   *  Constant: '<S1>/Pax_mode3'
   *  Constant: '<S1>/Pay_mode3'
   *  Constant: '<S1>/Pbx_mode3'
   *  Constant: '<S1>/Pby_mode3'
   *  Constant: '<S1>/n_mode3'
   *  Constant: '<S1>/tf_mode3'
   *  Constant: '<S1>/va_mode3'
   *  Constant: '<S1>/vb_mode3'
   */
  test_servo_B.chuky = test_servo_P.tf_mode3_Value * 2.0;
  test_servo_B.y_m = test_servo_B.theta1_m / test_servo_B.chuky;
  if (test_servo_B.y_m < 0.0) {
    test_servo_B.i = ceil(test_servo_B.y_m);
  } else {
    test_servo_B.i = floor(test_servo_B.y_m);
  }

  if (test_servo_B.theta1_m <= test_servo_B.chuky * test_servo_B.i +
      test_servo_P.tf_mode3_Value) {
    test_servo_B.dv[0] = test_servo_P.Pax_mode3_Value;
    test_servo_B.dv[1] = test_servo_P.Pay_mode3_Value;
    test_servo_B.Pa[0] = test_servo_P.Pbx_mode3_Value;
    test_servo_B.Pa[1] = test_servo_P.Pby_mode3_Value;
    test_servo_TrajectoryPlanning(test_servo_B.theta1_m, test_servo_B.dv,
      test_servo_P.va_mode3_Value, test_servo_B.Pa, test_servo_P.vb_mode3_Value,
      test_servo_P.tf_mode3_Value, test_servo_B.chuky * test_servo_B.i,
      &test_servo_B.x_p, &test_servo_B.y_m);
  } else {
    test_servo_B.dv[0] = test_servo_P.Pax_mode3_Value;
    test_servo_B.dv[1] = test_servo_P.Pay_mode3_Value;
    test_servo_B.Pa[0] = test_servo_P.Pbx_mode3_Value;
    test_servo_B.Pa[1] = test_servo_P.Pby_mode3_Value;
    test_servo_TrajectoryPlanning(test_servo_B.theta1_m, test_servo_B.dv,
      test_servo_P.va_mode3_Value, test_servo_B.Pa, test_servo_P.vb_mode3_Value,
      test_servo_P.tf_mode3_Value, test_servo_P.tf_mode3_Value +
      test_servo_B.chuky * test_servo_B.i, &test_servo_B.x_p, &test_servo_B.y_m);
  }

  if (test_servo_B.theta1_m > test_servo_B.chuky * test_servo_P.n_mode3_Value) {
    test_servo_B.x_p = test_servo_P.Pax_mode3_Value;
    test_servo_B.y_m = test_servo_P.Pay_mode3_Value;
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function' */

  /* MATLAB Function: '<Root>/IK1' incorporates:
   *  Constant: '<S1>/theta123'
   */
  test_servo_B.chuky = test_servo_P.theta123_Value;
  test_servo_cosd(&test_servo_B.chuky);
  test_servo_B.i = (test_servo_B.x_p - 80.0) - 80.0 * test_servo_B.chuky;
  test_servo_B.chuky = test_servo_P.theta123_Value;
  test_servo_sind(&test_servo_B.chuky);
  test_servo_B.B = test_servo_B.y_m - 80.0 * test_servo_B.chuky;
  test_servo_B.a = 2.0 * test_servo_B.i * 99.98;
  test_servo_B.chuky = 2.0 * test_servo_B.B * 99.98;
  test_servo_B.s1_tmp = sqrt(test_servo_B.a * test_servo_B.a +
    test_servo_B.chuky * test_servo_B.chuky);
  test_servo_B.i = (((test_servo_B.i * test_servo_B.i + test_servo_B.B *
                      test_servo_B.B) + 9996.0004) - 9051.6196) /
    test_servo_B.s1_tmp;
  if (fabs(test_servo_B.i - 1.0) <= 0.0001) {
    if (test_servo_B.i > 0.0) {
      test_servo_B.i = 1.0;
    } else {
      test_servo_B.i = -1.0;
    }
  }

  test_servo_B.theta1 = rt_atan2d_snf(test_servo_B.i, sqrt(1.0 - test_servo_B.i *
    test_servo_B.i)) * 57.295779513082323 - rt_atan2d_snf(test_servo_B.a /
    test_servo_B.s1_tmp, test_servo_B.chuky / test_servo_B.s1_tmp) *
    57.295779513082323;
  test_servo_B.chuky = test_servo_P.theta123_Value;
  test_servo_sind(&test_servo_B.chuky);
  test_servo_B.i = test_servo_B.theta1;
  test_servo_sind(&test_servo_B.i);
  test_servo_B.a = test_servo_B.theta1;
  test_servo_cosd(&test_servo_B.a);
  test_servo_B.s1_tmp = test_servo_P.theta123_Value;
  test_servo_cosd(&test_servo_B.s1_tmp);
  test_servo_B.x_p = rt_atan2d_snf(((test_servo_B.y_m - 80.0 *
    test_servo_B.chuky) - 99.98 * test_servo_B.i) / 95.14, (((test_servo_B.x_p -
    80.0) - 99.98 * test_servo_B.a) - 80.0 * test_servo_B.s1_tmp) / 95.14) *
    57.295779513082323 - test_servo_B.theta1;

  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Constant: '<S2>/Pax_mode4'
   *  Constant: '<S2>/Pay_mode4'
   *  Constant: '<S2>/Pbx_mode4'
   *  Constant: '<S2>/Pby_mode4'
   *  Constant: '<S2>/Pcx_mode4'
   *  Constant: '<S2>/Pcy_mode4'
   *  Constant: '<S2>/n_mode4'
   *  Constant: '<S2>/tf_mode4'
   *  Constant: '<S2>/va_mode4'
   *  Constant: '<S2>/vb_mode4'
   *  Constant: '<S2>/vc_mode4'
   */
  test_servo_B.chuky = test_servo_P.tf_mode4_Value * 3.0;
  test_servo_B.y_m = test_servo_B.theta1_m / test_servo_B.chuky;
  if (test_servo_B.y_m < 0.0) {
    test_servo_B.i = ceil(test_servo_B.y_m);
  } else {
    test_servo_B.i = floor(test_servo_B.y_m);
  }

  test_servo_B.Pa[0] = test_servo_P.Pax_mode4_Value;
  test_servo_B.Pa[1] = test_servo_P.Pay_mode4_Value;
  test_servo_B.Pb[0] = test_servo_P.Pbx_mode4_Value;
  test_servo_B.Pb[1] = test_servo_P.Pby_mode4_Value;
  test_servo_B.y_m = test_servo_B.chuky * test_servo_B.i;
  if (test_servo_B.theta1_m <= test_servo_B.y_m + test_servo_P.tf_mode4_Value) {
    test_servo_TrajectoryPlanning(test_servo_B.theta1_m, test_servo_B.Pa,
      test_servo_P.va_mode4_Value, test_servo_B.Pb, test_servo_P.vb_mode4_Value,
      test_servo_P.tf_mode4_Value, test_servo_P.tf_mode4_Value * 0.0 +
      test_servo_B.chuky * test_servo_B.i, &test_servo_B.y_m, &test_servo_B.y);
  } else if (test_servo_B.theta1_m <= test_servo_P.tf_mode4_Value * 2.0 +
             test_servo_B.y_m) {
    test_servo_B.dv[0] = test_servo_P.Pcx_mode4_Value;
    test_servo_B.dv[1] = test_servo_P.Pcy_mode4_Value;
    test_servo_TrajectoryPlanning(test_servo_B.theta1_m, test_servo_B.Pb,
      test_servo_P.vb_mode4_Value, test_servo_B.dv, test_servo_P.vc_mode4_Value,
      test_servo_P.tf_mode4_Value, test_servo_P.tf_mode4_Value +
      test_servo_B.chuky * test_servo_B.i, &test_servo_B.y_m, &test_servo_B.y);
  } else {
    test_servo_B.dv[0] = test_servo_P.Pcx_mode4_Value;
    test_servo_B.dv[1] = test_servo_P.Pcy_mode4_Value;
    test_servo_TrajectoryPlanning(test_servo_B.theta1_m, test_servo_B.dv,
      test_servo_P.vc_mode4_Value, test_servo_B.Pa, test_servo_P.va_mode4_Value,
      test_servo_P.tf_mode4_Value, test_servo_P.tf_mode4_Value * 2.0 +
      test_servo_B.chuky * test_servo_B.i, &test_servo_B.y_m, &test_servo_B.y);
  }

  if (test_servo_B.theta1_m > test_servo_B.chuky * test_servo_P.n_mode4_Value) {
    test_servo_B.y_m = test_servo_P.Pax_mode4_Value;
    test_servo_B.y = test_servo_P.Pay_mode4_Value;
  }

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* MATLAB Function: '<Root>/IK2' incorporates:
   *  Constant: '<S2>/theta123'
   */
  test_servo_B.chuky = test_servo_P.theta123_Value_i;
  test_servo_cosd(&test_servo_B.chuky);
  test_servo_B.i = (test_servo_B.y_m - 80.0) - 80.0 * test_servo_B.chuky;
  test_servo_B.chuky = test_servo_P.theta123_Value_i;
  test_servo_sind(&test_servo_B.chuky);
  test_servo_B.B = test_servo_B.y - 80.0 * test_servo_B.chuky;
  test_servo_B.a = 2.0 * test_servo_B.i * 99.98;
  test_servo_B.chuky = 2.0 * test_servo_B.B * 99.98;
  test_servo_B.s1_tmp = sqrt(test_servo_B.a * test_servo_B.a +
    test_servo_B.chuky * test_servo_B.chuky);
  test_servo_B.i = (((test_servo_B.i * test_servo_B.i + test_servo_B.B *
                      test_servo_B.B) + 9996.0004) - 9051.6196) /
    test_servo_B.s1_tmp;
  if (fabs(test_servo_B.i - 1.0) <= 0.0001) {
    if (test_servo_B.i > 0.0) {
      test_servo_B.i = 1.0;
    } else {
      test_servo_B.i = -1.0;
    }
  }

  test_servo_B.theta1_m = rt_atan2d_snf(test_servo_B.i, -sqrt(1.0 -
    test_servo_B.i * test_servo_B.i)) * 57.295779513082323 - rt_atan2d_snf
    (test_servo_B.a / test_servo_B.s1_tmp, test_servo_B.chuky /
     test_servo_B.s1_tmp) * 57.295779513082323;
  test_servo_B.chuky = test_servo_P.theta123_Value_i;
  test_servo_sind(&test_servo_B.chuky);
  test_servo_B.i = test_servo_B.theta1_m;
  test_servo_sind(&test_servo_B.i);
  test_servo_B.a = test_servo_B.theta1_m;
  test_servo_cosd(&test_servo_B.a);
  test_servo_B.s1_tmp = test_servo_P.theta123_Value_i;
  test_servo_cosd(&test_servo_B.s1_tmp);
  test_servo_B.y = rt_atan2d_snf(((test_servo_B.y - 80.0 * test_servo_B.chuky) -
    99.98 * test_servo_B.i) / 95.14, (((test_servo_B.y_m - 80.0) - 99.98 *
    test_servo_B.a) - 80.0 * test_servo_B.s1_tmp) / 95.14) * 57.295779513082323
    - test_servo_B.theta1_m;

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant6'
   *  Constant: '<S1>/theta123'
   *  Constant: '<S2>/theta123'
   *  MATLAB Function: '<Root>/IK1'
   *  MATLAB Function: '<Root>/IK2'
   */
  if ((int16_T)test_servo_P.Constant6_Value == 1) {
    test_servo_B.theta1_m = test_servo_B.theta1;
    test_servo_B.y = test_servo_B.x_p;
    test_servo_B.theta1 = (test_servo_P.theta123_Value - test_servo_B.theta1) -
      test_servo_B.x_p;
  } else {
    test_servo_B.theta1 = (test_servo_P.theta123_Value_i - test_servo_B.theta1_m)
      - test_servo_B.y;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* MATLABSystem: '<Root>/Continuous Servo Write' */
  if (test_servo_B.y + 90.0 < 0.0) {
    tmp = 0U;
  } else if (test_servo_B.y + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    test_servo_B.y_m = rt_roundd_snf(test_servo_B.y + 90.0);
    if (test_servo_B.y_m < 256.0) {
      if (test_servo_B.y_m >= 0.0) {
        tmp = (uint8_T)test_servo_B.y_m;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(0, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write' */

  /* MATLABSystem: '<Root>/Continuous Servo Write1' */
  if (test_servo_B.theta1 + 90.0 < 0.0) {
    tmp = 0U;
  } else if (test_servo_B.theta1 + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    test_servo_B.y_m = rt_roundd_snf(test_servo_B.theta1 + 90.0);
    if (test_servo_B.y_m < 256.0) {
      if (test_servo_B.y_m >= 0.0) {
        tmp = (uint8_T)test_servo_B.y_m;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(1, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write1' */

  /* MATLABSystem: '<Root>/Continuous Servo Write2' */
  if (test_servo_B.theta1_m + 90.0 < 0.0) {
    tmp = 0U;
  } else if (test_servo_B.theta1_m + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    test_servo_B.y_m = rt_roundd_snf(test_servo_B.theta1_m + 90.0);
    if (test_servo_B.y_m < 256.0) {
      if (test_servo_B.y_m >= 0.0) {
        tmp = (uint8_T)test_servo_B.y_m;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(2, tmp);

  /* End of MATLABSystem: '<Root>/Continuous Servo Write2' */

  /* MATLAB Function: '<Root>/FK' */
  test_servo_B.x_p = test_servo_B.theta1_m + test_servo_B.y;
  test_servo_B.chuky = test_servo_B.x_p;
  test_servo_cosd(&test_servo_B.chuky);
  test_servo_B.chuky = test_servo_B.theta1_m;
  test_servo_cosd(&test_servo_B.chuky);
  test_servo_B.theta1 += test_servo_B.x_p;
  test_servo_B.chuky = test_servo_B.theta1;
  test_servo_cosd(&test_servo_B.chuky);
  test_servo_sind(&test_servo_B.x_p);
  test_servo_sind(&test_servo_B.theta1_m);
  test_servo_sind(&test_servo_B.theta1);

  {                                    /* Sample time: [0.0s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
      ((test_servo_M->Timing.clockTick0 * 1) + 0)
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
      ((test_servo_M->Timing.clockTick1 * 1) + 0)
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
  test_servo_M->Timing.t[0] =
    ((time_T)(++test_servo_M->Timing.clockTick0)) *
    test_servo_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    test_servo_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void test_servo_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&test_servo_M->solverInfo,
                          &test_servo_M->Timing.simTimeStep);
    rtsiSetTPtr(&test_servo_M->solverInfo, &rtmGetTPtr(test_servo_M));
    rtsiSetStepSizePtr(&test_servo_M->solverInfo,
                       &test_servo_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&test_servo_M->solverInfo, (&rtmGetErrorStatus
      (test_servo_M)));
    rtsiSetRTModelPtr(&test_servo_M->solverInfo, test_servo_M);
  }

  rtsiSetSimTimeStep(&test_servo_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&test_servo_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(test_servo_M, &test_servo_M->Timing.tArray[0]);
  rtmSetTFinal(test_servo_M, -1);
  test_servo_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  test_servo_M->Sizes.checksums[0] = (1475201087U);
  test_servo_M->Sizes.checksums[1] = (1078541172U);
  test_servo_M->Sizes.checksums[2] = (2695661929U);
  test_servo_M->Sizes.checksums[3] = (743766120U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[9];
    test_servo_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(test_servo_M->extModeInfo,
      &test_servo_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(test_servo_M->extModeInfo, test_servo_M->Sizes.checksums);
    rteiSetTPtr(test_servo_M->extModeInfo, rtmGetTPtr(test_servo_M));
  }

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write' */
  MW_servoAttach(0, 6);

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write1' */
  MW_servoAttach(1, 9);

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write2' */
  MW_servoAttach(2, 5);
}

/* Model terminate function */
void test_servo_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
