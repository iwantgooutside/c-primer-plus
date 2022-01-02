#include <stdio.h>
int main(void)
{
  int i_num,i_maxnum;
  printf("please enter your number :____\b\b\b\b");
  scanf("%d",&i_num);
  i_maxnum = i_num + 10;
  printf("%d\n",i_num);
  while ((i_num++) < i_maxnum)
  {
    printf("%d\n",i_num);
  }
  return 0;
}
