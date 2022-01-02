#include <stdio.h>

void cubed(double cubed_lf_num);

int main(void)
{
  double lf_num;
  printf("please enter your number:____\b\b\b\b");
  scanf("%lf",&lf_num);
  cubed(lf_num);
  return 0;
}

void cubed(double cubed_lf_num)
{
  printf("%.2f\n",cubed_lf_num * cubed_lf_num * cubed_lf_num);
}
