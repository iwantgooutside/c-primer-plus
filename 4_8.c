#include <stdio.h>
int main(void)
{
  const float g_l = 3.785;
  const float m_k = 1.609;
  float f_mile,f_gallon;
  printf("please enter the mile that you traveled:____\b\b\b\b");
  scanf("%f",&f_mile);
  printf("please enter how much gallon you used:____\b\b\b\b");
  scanf("%f",&f_gallon);
  printf("%.1f miles-per-gallon\n",f_mile/f_gallon);
  printf("%.1f liter-100-kilometers\n",(f_gallon * g_l / f_mile * m_k)*100);
  return 0;
}
