#include <stdio.h>
#define BASIC_SALARY 10.00
#define OVERTIME 40.00
#define OVERTIME_RATE 1.5
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define TAX_RANGE_1 300
#define TAX_RANGE_2 150


int main(void)
{
  float f_hours,f_sum,f_tax;

  printf("please enter your hours:");
  while (scanf("%f",&f_hours) == 1)
  {
    if (f_hours >= OVERTIME)
    {
      f_sum = (f_hours - OVERTIME) * OVERTIME_RATE * BASIC_SALARY + BASIC_SALARY * OVERTIME;
    }
    else
    {
      f_sum = f_hours * BASIC_SALARY;
    }
    if (f_sum > TAX_RANGE_1 + TAX_RANGE_2)
    {
      f_tax = TAX_RANGE_1 * TAX_RATE_1 + TAX_RANGE_2 * TAX_RATE_2 + (f_sum - TAX_RANGE_1 - TAX_RANGE_2) * TAX_RATE_3 ;

    }
    else if (f_sum >= TAX_RANGE_1 && f_sum <= TAX_RANGE_1 + TAX_RANGE_2)
    {
      f_tax = TAX_RANGE_1 * TAX_RATE_1 + (f_sum - TAX_RANGE_1) * TAX_RATE_2 ;
    }
    else
      f_tax = f_sum * TAX_RATE_1 ;

    printf("gross pay : %.2f tax: %.2f  net pay : %.2f \n",f_sum,f_tax,f_sum - f_tax);
  }
  return 0;
}
