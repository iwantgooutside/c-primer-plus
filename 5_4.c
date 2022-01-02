#include <stdio.h>
int main(void)
{
  int i_cen;
  printf("please enter your height in centimeters:____\b\b\b\b");
  scanf("%d",&i_cen);
  while (i_cen > 0)
  {
    printf("%.1f cm = %d feet, %.1f inches\n",(float)i_cen,i_cen / 31,
    (i_cen - (i_cen / 31)*30.48)/2.54);
    printf("please enter your height in centimeters:___\b\b\b");
    scanf("%d",&i_cen);
  }
  return 0;
}
