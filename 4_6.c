#include <stdio.h>
#include <string.h>
int main(void)
{
  char s_first[20],s_last[20];
  int i_first,i_last;

  printf("please enter your first name :____\b\b\b\b");
  scanf("%s",s_first);
  i_first = strlen(s_first);
  printf("please enter your last name:____\b\b\b\b");
  scanf("%s",s_last);
  i_last = strlen(s_last);
  printf("%s %s\n%-*d %-*d\n",s_first,s_last,i_first,i_first,i_last,i_last);
  printf("%s %s\n%*d %*d\n",s_first,s_last,i_first,i_first,i_last,i_last);
  return 0;
}
