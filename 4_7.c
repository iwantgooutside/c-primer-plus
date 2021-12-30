#include <stdio.h>
#include <float.h>

int main(void)
{
  const double NUM_1 = 1.0/3.0;
  const float NUM_2 = 1.0/3.0;
  printf("%.4lf and %.4f\n",NUM_1,NUM_2);
  printf("%.12lf and %.12f\n",NUM_1,NUM_2);
  printf("%.16lf and %.16f\n",NUM_1,NUM_2);
  printf("%zd and %zd \n",FLT_DIG,DBL_DIG);
  return 0;
}
