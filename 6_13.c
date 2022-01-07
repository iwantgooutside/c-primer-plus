#include <stdio.h>
int main(void)
{
  double d_sum1,d_sum2;
  float f_num1,f_num2,f_num3;
  printf("please enter your number : ");
  scanf("%f",&f_num2);
  while (f_num2 > 0)
  {
    for (f_num1 = 1.0 , d_sum1 =0 , d_sum2 = 0 ,f_num3 = 1.0; f_num1 <= f_num2 ; f_num1++,f_num3 *= -1.0)
    {
      d_sum1 += 1.0/f_num1 ;
      d_sum2 += 1.0/f_num1 * f_num3;
    }
    printf("%lf\n%lf\n",d_sum1,d_sum2);
    printf("please enter your number : ");
    scanf("%f",&f_num2);
  }
  return 0;
}
