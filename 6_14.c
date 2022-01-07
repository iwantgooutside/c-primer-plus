#include <stdio.h>
int main(void)
{
  double a_num1[8],a_num2[8],d_sum = 0.0;
  int i_index = 0 ;
  while (i_index++ < 8)
  {
    scanf("%lf",&a_num1[i_index]);
    d_sum += a_num1[i_index] ;
    a_num2[i_index] = d_sum ;

  }
  i_index = 0 ;
  while (i_index++ < 8)
  {
    printf("%10.2lf",a_num1[i_index]);
  }
  printf("\n");
  i_index = 0 ;
  while (i_index++ < 8)
  {
    printf("%10.2lf",a_num2[i_index]);
  }
  printf("\n");
  return 0;
}
