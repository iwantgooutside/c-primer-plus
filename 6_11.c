#include <stdio.h>
int main(void)
{
  int a_num[8];
  int i_index;
  printf("please enter eight int num:");
  for (i_index = 0 ; i_index < 8 ;i_index++)
  {
    scanf("%d",&a_num[i_index]);
  }
  for (i_index = 7 ; i_index >= 0 ; i_index--)
  {
    printf("%d",a_num[i_index]);
  }
  printf("\n");
  return 0;
}
