#include <stdio.h>
#define M_PER_H 60
int main(void)
{
  int min;
  printf("please enter your number in min : _____\b\b\b\b");
  scanf("%d",&min);
  while (min > 0)
  {
    printf("%d min is %d hours and %d min\n",min,min/M_PER_H,min%M_PER_H);
    printf("please enter your number in min : ____\b\b\b\b");
    scanf("%d",&min);
  }
  return 0;
}
