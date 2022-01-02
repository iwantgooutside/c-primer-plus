#include <stdio.h>
int main(void)
{
  int i_sum,i_count,i_max;
  i_count = 0;
  i_sum = 0;
  printf("please enter your max number:____\b\b\b\b");
  scanf("%d",&i_max);
  while (i_count++ < i_max)
  {
    i_sum = i_sum + i_count * i_count;
  }
  printf("%d\n",i_sum);
  return 0 ;
}
