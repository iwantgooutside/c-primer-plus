#include <stdio.h>
int main(void)
{
  float f_num1,f_num2;
  printf("please enter your num1 and num2 :");
  while(scanf("%f%f",&f_num1,&f_num2)==2)
  {
    printf("%.2f\n",(f_num1-f_num2)/(f_num1*f_num2));
    printf("please enter next num1 and num2:");
  }
  return 0;
}
