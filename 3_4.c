#include <stdio.h>
int main(void)
{
  float f_num;
  printf("please enter your float number : ____");
  printf("\b\b\b\b");
  scanf("%f",&f_num);
  printf("fixed-point notation: %f \n",f_num);
  printf("exponential notation: %e \n",f_num);
  printf("p notation: %p \n",f_num);
  return 0;
}
