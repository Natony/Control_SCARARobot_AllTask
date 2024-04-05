/*
 * File: qdqd_robot.c
 *
 * Code generated for Simulink model 'qdqd_robot'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Dec 28 00:20:59 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "qdqd_robot.h"
#include "rtwtypes.h"
#include <math.h>
#include "qdqd_robot_private.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include <float.h>

/* Block signals (default storage) */
B_qdqd_robot_T qdqd_robot_B;

/* Block states (default storage) */
DW_qdqd_robot_T qdqd_robot_DW;

/* Real-time model */
static RT_MODEL_qdqd_robot_T qdqd_robot_M_;
RT_MODEL_qdqd_robot_T *const qdqd_robot_M = &qdqd_robot_M_;

/* Forward declaration for local functions */
static void qdqd_robot_TrajectoryPlanning(real_T t, const real_T P0[2], const
  real_T v0[2], const real_T Pf[2], const real_T vf[2], real_T tf, real_T t0,
  real_T *x, real_T *y);
static void qdqd_robot_cosd(real_T *x);
static void qdqd_robot_sind(real_T *x);
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
static void qdqd_robot_TrajectoryPlanning(real_T t, const real_T P0[2], const
  real_T v0[2], const real_T Pf[2], const real_T vf[2], real_T tf, real_T t0,
  real_T *x, real_T *y)
{
  real_T x_tmp;
  real_T x_tmp_0;
  real_T x_tmp_1;
  real_T x_tmp_2;
  real_T x_tmp_3;
  qdqd_robot_B.a_tmp = t - t0;
  qdqd_robot_B.x_tmp = rt_powd_snf(qdqd_robot_B.a_tmp, 3.0);
  x_tmp = tf * tf;
  x_tmp_0 = Pf[0] - P0[0];
  x_tmp_1 = 3.0 / x_tmp;
  x_tmp = 1.0 / x_tmp;
  x_tmp_2 = -2.0 / rt_powd_snf(tf, 3.0);
  x_tmp_3 = qdqd_robot_B.a_tmp * qdqd_robot_B.a_tmp;
  *x = (((x_tmp_1 * x_tmp_0 - 2.0 / tf * v0[0]) - 1.0 / tf * vf[0]) * x_tmp_3 +
        (qdqd_robot_B.a_tmp * v0[0] + P0[0])) + ((vf[0] + v0[0]) * x_tmp +
    x_tmp_2 * x_tmp_0) * qdqd_robot_B.x_tmp;
  x_tmp_0 = Pf[1] - P0[1];
  *y = (((x_tmp_1 * x_tmp_0 - 2.0 / tf * v0[1]) - 1.0 / tf * vf[1]) * x_tmp_3 +
        (qdqd_robot_B.a_tmp * v0[1] + P0[1])) + ((vf[1] + v0[1]) * x_tmp +
    x_tmp_2 * x_tmp_0) * qdqd_robot_B.x_tmp;
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
static void qdqd_robot_cosd(real_T *x)
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
static void qdqd_robot_sind(real_T *x)
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
void qdqd_robot_step(void)
{
  uint8_T tmp;

  /* Clock: '<S1>/Clock' incorporates:
   *  Clock: '<S2>/Clock'
   */
  qdqd_robot_B.theta1_m = qdqd_robot_M->Timing.t[0];

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
  qdqd_robot_B.chuky = qdqd_robot_P.tf_mode3_Value * 2.0;
  qdqd_robot_B.y_l = qdqd_robot_B.theta1_m / qdqd_robot_B.chuky;
  if (qdqd_robot_B.y_l < 0.0) {
    qdqd_robot_B.i = ceil(qdqd_robot_B.y_l);
  } else {
    qdqd_robot_B.i = floor(qdqd_robot_B.y_l);
  }

  if (qdqd_robot_B.theta1_m <= qdqd_robot_B.chuky * qdqd_robot_B.i +
      qdqd_robot_P.tf_mode3_Value) {
    qdqd_robot_B.dv[0] = qdqd_robot_P.Pax_mode3_Value;
    qdqd_robot_B.dv[1] = qdqd_robot_P.Pay_mode3_Value;
    qdqd_robot_B.Pa[0] = qdqd_robot_P.Pbx_mode3_Value;
    qdqd_robot_B.Pa[1] = qdqd_robot_P.Pby_mode3_Value;
    qdqd_robot_TrajectoryPlanning(qdqd_robot_B.theta1_m, qdqd_robot_B.dv,
      qdqd_robot_P.va_mode3_Value, qdqd_robot_B.Pa, qdqd_robot_P.vb_mode3_Value,
      qdqd_robot_P.tf_mode3_Value, qdqd_robot_B.chuky * qdqd_robot_B.i,
      &qdqd_robot_B.x_e, &qdqd_robot_B.y_l);
  } else {
    qdqd_robot_B.dv[0] = qdqd_robot_P.Pax_mode3_Value;
    qdqd_robot_B.dv[1] = qdqd_robot_P.Pay_mode3_Value;
    qdqd_robot_B.Pa[0] = qdqd_robot_P.Pbx_mode3_Value;
    qdqd_robot_B.Pa[1] = qdqd_robot_P.Pby_mode3_Value;
    qdqd_robot_TrajectoryPlanning(qdqd_robot_B.theta1_m, qdqd_robot_B.dv,
      qdqd_robot_P.va_mode3_Value, qdqd_robot_B.Pa, qdqd_robot_P.vb_mode3_Value,
      qdqd_robot_P.tf_mode3_Value, qdqd_robot_P.tf_mode3_Value +
      qdqd_robot_B.chuky * qdqd_robot_B.i, &qdqd_robot_B.x_e, &qdqd_robot_B.y_l);
  }

  if (qdqd_robot_B.theta1_m > qdqd_robot_B.chuky * qdqd_robot_P.n_mode3_Value) {
    qdqd_robot_B.x_e = qdqd_robot_P.Pax_mode3_Value;
    qdqd_robot_B.y_l = qdqd_robot_P.Pay_mode3_Value;
  }

  /* End of MATLAB Function: '<S1>/MATLAB Function' */

  /* MATLAB Function: '<Root>/IK1' incorporates:
   *  Constant: '<S1>/theta123'
   */
  qdqd_robot_B.i = qdqd_robot_P.theta123_Value;
  qdqd_robot_cosd(&qdqd_robot_B.i);
  qdqd_robot_B.i = (qdqd_robot_B.x_e - 80.0) - 80.0 * qdqd_robot_B.i;
  qdqd_robot_B.a = qdqd_robot_P.theta123_Value;
  qdqd_robot_sind(&qdqd_robot_B.a);
  qdqd_robot_B.B = qdqd_robot_B.y_l - 80.0 * qdqd_robot_B.a;
  qdqd_robot_B.a = 2.0 * qdqd_robot_B.i * 99.98;
  qdqd_robot_B.chuky = 2.0 * qdqd_robot_B.B * 99.98;
  qdqd_robot_B.s1_tmp = sqrt(qdqd_robot_B.a * qdqd_robot_B.a +
    qdqd_robot_B.chuky * qdqd_robot_B.chuky);
  qdqd_robot_B.i = (((qdqd_robot_B.i * qdqd_robot_B.i + qdqd_robot_B.B *
                      qdqd_robot_B.B) + 9996.0004) - 9051.6196) /
    qdqd_robot_B.s1_tmp;
  if (fabs(qdqd_robot_B.i - 1.0) <= 0.0001) {
    if (qdqd_robot_B.i > 0.0) {
      qdqd_robot_B.i = 1.0;
    } else {
      qdqd_robot_B.i = -1.0;
    }
  }

  qdqd_robot_B.theta1 = rt_atan2d_snf(qdqd_robot_B.i, sqrt(1.0 - qdqd_robot_B.i *
    qdqd_robot_B.i)) * 57.295779513082323 - rt_atan2d_snf(qdqd_robot_B.a /
    qdqd_robot_B.s1_tmp, qdqd_robot_B.chuky / qdqd_robot_B.s1_tmp) *
    57.295779513082323;
  qdqd_robot_B.i = qdqd_robot_P.theta123_Value;
  qdqd_robot_sind(&qdqd_robot_B.i);
  qdqd_robot_B.a = qdqd_robot_B.theta1;
  qdqd_robot_sind(&qdqd_robot_B.a);
  qdqd_robot_B.chuky = qdqd_robot_B.theta1;
  qdqd_robot_cosd(&qdqd_robot_B.chuky);
  qdqd_robot_B.s1_tmp = qdqd_robot_P.theta123_Value;
  qdqd_robot_cosd(&qdqd_robot_B.s1_tmp);
  qdqd_robot_B.x_e = rt_atan2d_snf(((qdqd_robot_B.y_l - 80.0 * qdqd_robot_B.i) -
    99.98 * qdqd_robot_B.a) / 95.14, (((qdqd_robot_B.x_e - 80.0) - 99.98 *
    qdqd_robot_B.chuky) - 80.0 * qdqd_robot_B.s1_tmp) / 95.14) *
    57.295779513082323 - qdqd_robot_B.theta1;

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
  qdqd_robot_B.chuky = qdqd_robot_P.tf_mode4_Value * 3.0;
  qdqd_robot_B.y_l = qdqd_robot_B.theta1_m / qdqd_robot_B.chuky;
  if (qdqd_robot_B.y_l < 0.0) {
    qdqd_robot_B.i = ceil(qdqd_robot_B.y_l);
  } else {
    qdqd_robot_B.i = floor(qdqd_robot_B.y_l);
  }

  qdqd_robot_B.Pa[0] = qdqd_robot_P.Pax_mode4_Value;
  qdqd_robot_B.Pa[1] = qdqd_robot_P.Pay_mode4_Value;
  qdqd_robot_B.Pb[0] = qdqd_robot_P.Pbx_mode4_Value;
  qdqd_robot_B.Pb[1] = qdqd_robot_P.Pby_mode4_Value;
  qdqd_robot_B.y_l = qdqd_robot_B.chuky * qdqd_robot_B.i;
  if (qdqd_robot_B.theta1_m <= qdqd_robot_B.y_l + qdqd_robot_P.tf_mode4_Value) {
    qdqd_robot_TrajectoryPlanning(qdqd_robot_B.theta1_m, qdqd_robot_B.Pa,
      qdqd_robot_P.va_mode4_Value, qdqd_robot_B.Pb, qdqd_robot_P.vb_mode4_Value,
      qdqd_robot_P.tf_mode4_Value, qdqd_robot_P.tf_mode4_Value * 0.0 +
      qdqd_robot_B.chuky * qdqd_robot_B.i, &qdqd_robot_B.y_l, &qdqd_robot_B.y);
  } else if (qdqd_robot_B.theta1_m <= qdqd_robot_P.tf_mode4_Value * 2.0 +
             qdqd_robot_B.y_l) {
    qdqd_robot_B.dv[0] = qdqd_robot_P.Pcx_mode4_Value;
    qdqd_robot_B.dv[1] = qdqd_robot_P.Pcy_mode4_Value;
    qdqd_robot_TrajectoryPlanning(qdqd_robot_B.theta1_m, qdqd_robot_B.Pb,
      qdqd_robot_P.vb_mode4_Value, qdqd_robot_B.dv, qdqd_robot_P.vc_mode4_Value,
      qdqd_robot_P.tf_mode4_Value, qdqd_robot_P.tf_mode4_Value +
      qdqd_robot_B.chuky * qdqd_robot_B.i, &qdqd_robot_B.y_l, &qdqd_robot_B.y);
  } else {
    qdqd_robot_B.dv[0] = qdqd_robot_P.Pcx_mode4_Value;
    qdqd_robot_B.dv[1] = qdqd_robot_P.Pcy_mode4_Value;
    qdqd_robot_TrajectoryPlanning(qdqd_robot_B.theta1_m, qdqd_robot_B.dv,
      qdqd_robot_P.vc_mode4_Value, qdqd_robot_B.Pa, qdqd_robot_P.va_mode4_Value,
      qdqd_robot_P.tf_mode4_Value, qdqd_robot_P.tf_mode4_Value * 2.0 +
      qdqd_robot_B.chuky * qdqd_robot_B.i, &qdqd_robot_B.y_l, &qdqd_robot_B.y);
  }

  if (qdqd_robot_B.theta1_m > qdqd_robot_B.chuky * qdqd_robot_P.n_mode4_Value) {
    qdqd_robot_B.y_l = qdqd_robot_P.Pax_mode4_Value;
    qdqd_robot_B.y = qdqd_robot_P.Pay_mode4_Value;
  }

  /* End of MATLAB Function: '<S2>/MATLAB Function' */

  /* MATLAB Function: '<Root>/IK2' incorporates:
   *  Constant: '<S2>/theta123'
   */
  qdqd_robot_B.i = qdqd_robot_P.theta123_Value_j;
  qdqd_robot_cosd(&qdqd_robot_B.i);
  qdqd_robot_B.i = (qdqd_robot_B.y_l - 80.0) - 80.0 * qdqd_robot_B.i;
  qdqd_robot_B.a = qdqd_robot_P.theta123_Value_j;
  qdqd_robot_sind(&qdqd_robot_B.a);
  qdqd_robot_B.B = qdqd_robot_B.y - 80.0 * qdqd_robot_B.a;
  qdqd_robot_B.a = 2.0 * qdqd_robot_B.i * 99.98;
  qdqd_robot_B.chuky = 2.0 * qdqd_robot_B.B * 99.98;
  qdqd_robot_B.s1_tmp = sqrt(qdqd_robot_B.a * qdqd_robot_B.a +
    qdqd_robot_B.chuky * qdqd_robot_B.chuky);
  qdqd_robot_B.i = (((qdqd_robot_B.i * qdqd_robot_B.i + qdqd_robot_B.B *
                      qdqd_robot_B.B) + 9996.0004) - 9051.6196) /
    qdqd_robot_B.s1_tmp;
  if (fabs(qdqd_robot_B.i - 1.0) <= 0.0001) {
    if (qdqd_robot_B.i > 0.0) {
      qdqd_robot_B.i = 1.0;
    } else {
      qdqd_robot_B.i = -1.0;
    }
  }

  qdqd_robot_B.theta1_m = rt_atan2d_snf(qdqd_robot_B.i, -sqrt(1.0 -
    qdqd_robot_B.i * qdqd_robot_B.i)) * 57.295779513082323 - rt_atan2d_snf
    (qdqd_robot_B.a / qdqd_robot_B.s1_tmp, qdqd_robot_B.chuky /
     qdqd_robot_B.s1_tmp) * 57.295779513082323;
  qdqd_robot_B.i = qdqd_robot_P.theta123_Value_j;
  qdqd_robot_sind(&qdqd_robot_B.i);
  qdqd_robot_B.a = qdqd_robot_B.theta1_m;
  qdqd_robot_sind(&qdqd_robot_B.a);
  qdqd_robot_B.chuky = qdqd_robot_B.theta1_m;
  qdqd_robot_cosd(&qdqd_robot_B.chuky);
  qdqd_robot_B.s1_tmp = qdqd_robot_P.theta123_Value_j;
  qdqd_robot_cosd(&qdqd_robot_B.s1_tmp);
  qdqd_robot_B.y = rt_atan2d_snf(((qdqd_robot_B.y - 80.0 * qdqd_robot_B.i) -
    99.98 * qdqd_robot_B.a) / 95.14, (((qdqd_robot_B.y_l - 80.0) - 99.98 *
    qdqd_robot_B.chuky) - 80.0 * qdqd_robot_B.s1_tmp) / 95.14) *
    57.295779513082323 - qdqd_robot_B.theta1_m;

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Mode'
   *  Constant: '<Root>/t1_mode1'
   *  Constant: '<Root>/t1_mode2'
   *  Constant: '<Root>/t2_mode1'
   *  Constant: '<Root>/t2_mode2'
   *  Constant: '<Root>/t3_mode1'
   *  Constant: '<Root>/t3_mode2'
   *  Constant: '<S1>/theta123'
   *  Constant: '<S2>/theta123'
   *  MATLAB Function: '<Root>/IK1'
   *  MATLAB Function: '<Root>/IK2'
   */
  switch ((int16_T)qdqd_robot_P.Mode_Value) {
   case 1:
    qdqd_robot_B.theta1_m = qdqd_robot_P.t1_mode1_Value;
    qdqd_robot_B.y = qdqd_robot_P.t2_mode1_Value;
    qdqd_robot_B.theta1 = qdqd_robot_P.t3_mode1_Value;
    break;

   case 2:
    qdqd_robot_B.theta1_m = qdqd_robot_P.t1_mode2_Value;
    qdqd_robot_B.y = qdqd_robot_P.t2_mode2_Value;
    qdqd_robot_B.theta1 = qdqd_robot_P.t3_mode2_Value;
    break;

   case 3:
    qdqd_robot_B.theta1_m = qdqd_robot_B.theta1;
    qdqd_robot_B.y = qdqd_robot_B.x_e;
    qdqd_robot_B.theta1 = (qdqd_robot_P.theta123_Value - qdqd_robot_B.theta1) -
      qdqd_robot_B.x_e;
    break;

   default:
    qdqd_robot_B.theta1 = (qdqd_robot_P.theta123_Value_j - qdqd_robot_B.theta1_m)
      - qdqd_robot_B.y;
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* MATLABSystem: '<Root>/Continuous Servo Write' */
  if (qdqd_robot_B.theta1_m + 90.0 < 0.0) {
    tmp = 0U;
  } else if (qdqd_robot_B.theta1_m + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    qdqd_robot_B.y_l = rt_roundd_snf(qdqd_robot_B.theta1_m + 90.0);
    if (qdqd_robot_B.y_l < 256.0) {
      if (qdqd_robot_B.y_l >= 0.0) {
        tmp = (uint8_T)qdqd_robot_B.y_l;
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
  if (qdqd_robot_B.y + 90.0 < 0.0) {
    tmp = 0U;
  } else if (qdqd_robot_B.y + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    qdqd_robot_B.y_l = rt_roundd_snf(qdqd_robot_B.y + 90.0);
    if (qdqd_robot_B.y_l < 256.0) {
      if (qdqd_robot_B.y_l >= 0.0) {
        tmp = (uint8_T)qdqd_robot_B.y_l;
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
  if (qdqd_robot_B.theta1 + 90.0 < 0.0) {
    tmp = 0U;
  } else if (qdqd_robot_B.theta1 + 90.0 > 180.0) {
    tmp = 180U;
  } else {
    qdqd_robot_B.y_l = rt_roundd_snf(qdqd_robot_B.theta1 + 90.0);
    if (qdqd_robot_B.y_l < 256.0) {
      if (qdqd_robot_B.y_l >= 0.0) {
        tmp = (uint8_T)qdqd_robot_B.y_l;
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
  qdqd_robot_B.chuky = qdqd_robot_B.theta1_m;
  qdqd_robot_cosd(&qdqd_robot_B.chuky);
  qdqd_robot_B.theta1 = qdqd_robot_B.theta1_m + qdqd_robot_B.y;
  qdqd_robot_B.i = qdqd_robot_B.theta1;
  qdqd_robot_cosd(&qdqd_robot_B.i);
  qdqd_robot_B.a = 0.0;
  qdqd_robot_cosd(&qdqd_robot_B.a);
  qdqd_robot_B.Px = ((250.0 * qdqd_robot_B.chuky + 100.0) + 250.0 *
                     qdqd_robot_B.i) + 150.0 * qdqd_robot_B.a;
  qdqd_robot_sind(&qdqd_robot_B.theta1_m);
  qdqd_robot_sind(&qdqd_robot_B.theta1);
  qdqd_robot_B.chuky = 0.0;
  qdqd_robot_sind(&qdqd_robot_B.chuky);
  qdqd_robot_B.Py = (250.0 * qdqd_robot_B.theta1_m + 250.0 * qdqd_robot_B.theta1)
    + 150.0 * qdqd_robot_B.chuky;
  qdqd_robot_B.Pz = 240.0;

  {                                    /* Sample time: [0.0s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
      ((qdqd_robot_M->Timing.clockTick0 * 1) + 0)
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
      ((qdqd_robot_M->Timing.clockTick1 * 1) + 0)
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
  qdqd_robot_M->Timing.t[0] =
    ((time_T)(++qdqd_robot_M->Timing.clockTick0)) *
    qdqd_robot_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    qdqd_robot_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void qdqd_robot_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&qdqd_robot_M->solverInfo,
                          &qdqd_robot_M->Timing.simTimeStep);
    rtsiSetTPtr(&qdqd_robot_M->solverInfo, &rtmGetTPtr(qdqd_robot_M));
    rtsiSetStepSizePtr(&qdqd_robot_M->solverInfo,
                       &qdqd_robot_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&qdqd_robot_M->solverInfo, (&rtmGetErrorStatus
      (qdqd_robot_M)));
    rtsiSetRTModelPtr(&qdqd_robot_M->solverInfo, qdqd_robot_M);
  }

  rtsiSetSimTimeStep(&qdqd_robot_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&qdqd_robot_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(qdqd_robot_M, &qdqd_robot_M->Timing.tArray[0]);
  rtmSetTFinal(qdqd_robot_M, -1);
  qdqd_robot_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  qdqd_robot_M->Sizes.checksums[0] = (1903384913U);
  qdqd_robot_M->Sizes.checksums[1] = (1970950673U);
  qdqd_robot_M->Sizes.checksums[2] = (4178843907U);
  qdqd_robot_M->Sizes.checksums[3] = (3642127121U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[9];
    qdqd_robot_M->extModeInfo = (&rt_ExtModeInfo);
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
    rteiSetModelMappingInfoPtr(qdqd_robot_M->extModeInfo,
      &qdqd_robot_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(qdqd_robot_M->extModeInfo, qdqd_robot_M->Sizes.checksums);
    rteiSetTPtr(qdqd_robot_M->extModeInfo, rtmGetTPtr(qdqd_robot_M));
  }

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write' */
  MW_servoAttach(0, 5);

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write1' */
  MW_servoAttach(1, 6);

  /* Start for MATLABSystem: '<Root>/Continuous Servo Write2' */
  MW_servoAttach(2, 9);
}

/* Model terminate function */
void qdqd_robot_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
