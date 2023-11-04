#ifndef S21_MATH_H
#define S21_MATH_H

# define S21_M_E		2.718281828459045235360287471352662498L /* e */
# define S21_M_LOG2E	1.442695040888963407359924681001892137L /* log_2 e */
# define S21_M_LOG10E	0.434294481903251827651128918916605082L /* log_10 e */
# define S21_M_LN2		0.693147180559945309417232121458176568L /* log_e 2 */
# define S21_M_LN10	2.302585092994045684017991454684364208L /* log_e 10 */
# define S21_M_PI		3.141592653589793238462643383279502884L /* pi */
# define S21_M_PI_2	1.570796326794896619231321691639751442L /* pi/2 */
# define S21_M_PI_4	0.785398163397448309615660845819875721L /* pi/4 */
# define S21_M_1_PI	0.318309886183790671537767526745028724L /* 1/pi */
# define S21_M_2_PI	0.636619772367581343075535053490057448L /* 2/pi */
# define S21_M_2_SQRTPI	1.128379167095512573896158903121545172L /* 2/sqrt(pi) */
# define S21_M_SQRT2	1.414213562373095048801688724209698079L /* sqrt(2) */
# define S21_M_SQRT1_2	0.707106781186547524400844362104849039L /* 1/sqrt(2) */

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif