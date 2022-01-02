#include <stdio.h>
void Temperatures(double T_lf_Ftemperature);
int main(void)
{
  double lf_Ftemperature;
  int test;
  printf("please enter your number:____\b\b\b\b");
  test = scanf("%lf",&lf_Ftemperature);
  while (test == 1)
  {
    Temperatures(lf_Ftemperature);
    printf("please enter your number:____\b\b\b\b");
    test = scanf("%lf",&lf_Ftemperature);
  }
  return 0;
}

void Temperatures(double T_lf_Ftemperature)
{
  double T_lf_Ctemperature,T_lf_Ktemperature;
  T_lf_Ctemperature = 5.0/9.0*(T_lf_Ftemperature - 32.0);
  T_lf_Ktemperature = T_lf_Ctemperature + 273.16 ;
  printf("Fahrenheit: %.2f\nCelsius: %.2f\nKelvin: %.2f\n",T_lf_Ftemperature,
          T_lf_Ctemperature,T_lf_Ktemperature);
}
