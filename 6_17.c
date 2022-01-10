#include <stdio.h>
int main(void)
{
  int year;
  float sum;
  for (sum = 1000000.0 , year = 1; sum > 100000.0 ; sum = sum * 1.08 - 100000 , year++)
  {
    printf("this is %d years and has %f dollars \n",year,sum);
  }
  printf("this is %d years and has %f dollars \n",year++,sum);
  printf("this is %d years and has 0 dollars \n",year);
  return 0;
}
