#include <stdio.h>

int main(void)
{
  int i_second,i_first;
  printf("THis program computes moduli.\n");
  printf("Enter an integer to serve as the second operand:");
  scanf("%d",&i_second);
  printf("Now enter the first operand:");
  scanf("%d",&i_first);
  while (i_first > 0)
  {
    printf("%d %% %d is %d\n",i_first,i_second,i_first % i_second);
    printf("Now enter the first operand:");
    scanf("%d",&i_first);
  }
  return 0;
}
