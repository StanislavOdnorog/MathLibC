#include "s21_math.h"

int s21_abs(int x) { return (int)(s21_grep(x)); }

long double s21_acos(double x) {}

long double s21_asin(double x) {}

long double s21_atan(double x) {}

long double s21_ceil(double x) {
  long double ceil_x = (long long int)x;
  if (S21_isNAN(x))
    return S21_NAN;
  else if (x == POS_INF)
    ceil_x = POS_INF;
  else if (x == NEG_INF)
    ceil_x = NEG_INF;
  else if (x > 0 && x != ceil_x)
    ceil_x += 1;
  return ceil_x;
}

long double s21_cos(double x) {}

long double s21_exp(double x) {}

long double s21_fabs(double x) { return (x > 0 ? x : -x); }

long double s21_floor(double x) {
  long double floor_x = (long long int)x;
  if (S21_isNAN(x))
    return S21_NAN;
  else if (x == POS_INF)
    floor_x = POS_INF;
  else if (x == NEG_INF)
    floor_x = NEG_INF;
  else if (x < 0 && x != floor_x)
    floor_x -= 1;
  return floor_x;
}

long double s21_fmod(double x, double y) {
  int sign = 0;

  if (x < 0) {
    sign = 1;
  }

  if ((x == POS_INF && !S21_isNAN(y)) || (x == NEG_INF && !S21_isNAN(y))) {
    x = S21_NAN;
  } else if (s21_fabs(x) == 0.0 && !S21_isNAN(x)) {
    x = S21_NAN;
  } else if ((x != POS_INF || x != POS_INF) && (y == POS_INF || y == NEG_INF)) {
    x = S21_NAN;
  } else if (S21_isNAN(x) || S21_isNAN(y)) {
    x = S21_NAN;
  } else {
    x = s21_fabs(x);
    y = s21_fabs(y);
    while (x >= y) {
      x -= y;
    }
  }

  sign = 0 ? x : -x;
  return x;
}

long double s21_log(double x) {}

long double s21_pow(double base, double exp) {}

long double s21_sin(double x) {}

long double s21_sqrt(double x) {}

long double s21_tan(double x) {}

// bool isNAN()