#include <stdio.h>
#include <stdbool.h>

#define OVERTIME 40.00
#define OVERTIME_RATE 1.5
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define TAX_RANGE_1 300
#define TAX_RANGE_2 150


int main(void)
{
  float f_hours,f_sum,f_tax,BASIC_SALARY;
  int i_index ;
  bool b_quit = false ;
  do
  {
    printf("**********************************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action: \n");
    printf("   1) $8.75 /hr                                  2) $9.33 /hr  \n");
    printf("   3) $10.00 /hr                                 4) $11.20 /hr  \n");
    printf("   5) quit\n");
    printf("please enter number : ");
    scanf("%d",&i_index);

    switch (i_index)
    {
      case 1 :
        BASIC_SALARY = 8.75 ;
        break;
      case 2 :
        BASIC_SALARY = 9.33 ;
        break;
      case 3 :
        BASIC_SALARY = 10.00 ;
        break;
      case 4 :
        BASIC_SALARY = 11.20 ;
        break;
      case 5 :
        b_quit = true ;
        break;
    }
    if (b_quit)
      break;
    printf("please enter your hours:");
    scanf("%f",&f_hours);

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

  }while(1);


  return 0;
}
