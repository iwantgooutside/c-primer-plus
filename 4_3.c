#include <stdio.h>
int main(void)
{
  float f_num;
  printf("please enter your number :____\b\b\b\b");
  scanf("%f",&f_num);
  printf("The input is %.1f or %.1e\n",f_num,f_num);
  printf("The input is %+.3f or %.3E\n",f_num,f_num);
  return 0;
}
