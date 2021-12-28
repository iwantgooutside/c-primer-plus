#include <stdio.h>
int main(void)
{
  int i_ages ;
  printf("please enter your ages:___");
  printf("\b\b\b");
  scanf("%d",&i_ages);
  printf("you has lived in %.4e seconds\n",i_ages * 3.156e7);
  return 0;
}
