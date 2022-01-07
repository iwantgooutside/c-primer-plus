#include <stdio.h>
int main(void)
{
  int i_row,i_col,i_min,i_max,i_max_min_row;
  printf("please enter your min and max num:______\b\b\b\b\b\b");
  scanf("%d %d",&i_min,&i_max);
  for (; i_min <= i_max ; i_min++)
  {
    printf("%5d%5d%5d",i_min,i_min * i_min,i_min * i_min * i_min);
    printf("\n");
  }
  return 0;
}
