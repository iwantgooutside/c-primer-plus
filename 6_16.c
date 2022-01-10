#include <stdio.h>
int main(void)
{
  float f_sum1,f_sum2;
  int year;
  for (f_sum1 = 110.0,f_sum2 = 105.0 , year = 1 ; f_sum1 > f_sum2 ; f_sum1 += 10 ,f_sum2 = f_sum2 + f_sum2 * 0.05 , year++)
  {
    printf("%d years after sum1 will be %f and sum2 will be %f \n",year,f_sum1,f_sum2);
  }
  printf("%d years after sum1 will be %f and sum2 will be %f \n",year,f_sum1,f_sum2);
  return 0;

}
