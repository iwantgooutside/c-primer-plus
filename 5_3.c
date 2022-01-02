#include <stdio.h>
int main(void)
{
  int i_day;
  printf("please enter your days:____\b\b\b\b");
  scanf("%d",&i_day);
  while (i_day >0)
  {
    printf("%d days are %d weeks and %d days.\n",i_day,i_day/7,i_day%7);
    printf("please enter your days:____\b\b\b\b");
    scanf("%d",&i_day);
  }
  return 0 ;
}

