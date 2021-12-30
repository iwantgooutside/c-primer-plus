#include <stdio.h>
int main(void)
{
  float f_cen;
  char s_name[20];
  printf("please enter your height in centimeters:___\b\b\b");
  scanf("%f",&f_cen);
  printf("please enter your name:____\b\b\b\b");
  scanf("%s",s_name);
  printf("%s,you are %.2f meters\n",s_name,f_cen/100);
  return 0;
}
