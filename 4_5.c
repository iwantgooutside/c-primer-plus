#include <stdio.h>
int main(void)
{
  float f_speed,f_size;
  printf("please enter speed:____\b\b\b\b");
  scanf("%f",&f_speed);
  printf("please enter size:____\b\b\b\b");
  scanf("%f",&f_size);
  printf("At %.2f megabits per second,a file of %.2f megabytes\n"
        "downloads in %.2f seconds\n",f_speed,f_size,f_size * 8 / f_speed);
  return 0 ;
}
