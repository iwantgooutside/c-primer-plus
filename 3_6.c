#include <stdio.h>
int main(void)
{
  int i_quart ;
  printf("please enter your water quart:___");
  printf("\b\b\b");
  scanf("%d",&i_quart);

  printf("%d quart has %e water molecules\n",i_quart,i_quart * 950 / 3.0e-23);
  return 0;
}
