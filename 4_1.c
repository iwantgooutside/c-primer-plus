#include <stdio.h>
int main(void)
{
  char s_first[20],s_last[20];
  printf("please enter your first name :____\b\b\b\b");
  scanf("%s",s_first);
  printf("please enter your last name:____\b\b\b\b");
  scanf("%s",s_last);
  printf("%s,%s\n",s_last,s_first);
  return 0;
}
