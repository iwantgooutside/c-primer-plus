#include <stdio.h>
#include <string.h>
int main(void)
{
  char s_first[20];
  int i_len;
  printf("please enter your first name:____");
  scanf("%s",s_first);
  printf("\"%s\"\n",s_first);
  printf("\"%-20s\"\n",s_first);
  printf("\"%20s\"\n",s_first);
  i_len = strlen(s_first) + 3 ;
  printf("%*s\n",i_len,s_first);
  return 0;
}
