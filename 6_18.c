#include <stdio.h>
int main(void)
{
  int i_week,i_sum;
  for (i_week =1 , i_sum = 5 ; i_sum < 150 ;)
  {
    i_sum = (i_sum - i_week) * 2;
    i_week++;
    printf("this is %d weeks and has %d friend\n",i_week,i_sum);
  }
  return 0;
}
