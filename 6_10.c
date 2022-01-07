#include <stdio.h>
int main(void)
{
  int i_min,i_max,i_sum;
  printf("please enter min and max num: ");
  scanf("%d%d",&i_min,&i_max);
  while (i_max > i_min)
  {
    printf(" The sums of the squares from %d to %d is ",i_min,i_max);
    for (i_sum = 0 ;i_min <= i_max;i_min++)
    {
      i_sum += i_min * i_min ;
    }
    printf("%d\n",i_sum);
    printf("please enter min and max num: ");
    scanf("%d%d",&i_min,&i_max);
  }
  return 0;
}
