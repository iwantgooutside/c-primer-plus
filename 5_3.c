#include <stdio.h>
int main(void)
{
  int i_day;
  printf("please enter your days:____\b\b\b\b");
  scanf("%d",&i_day);
  printf("%d days are %d weeks and %d days.\n",i_day,i_day/7,i_day%7);
  return 0 ;
}
