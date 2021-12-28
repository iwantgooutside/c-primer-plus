#include <stdio.h>
int main(void)
{
  float f_cen;
  printf("please enter your height in centimeters:___\b\b\b");
  scanf("%f",&f_cen);
  printf("your height in inch is %.2f \n",f_cen / 2.54);
  return 0 ;
}
