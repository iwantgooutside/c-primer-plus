#include <stdio.h>
#include <string.h>
int main(void)
{
  char s_string[30];
  int i_len;
  printf("please enter your string:");
  scanf("%s",s_string);
  i_len = strlen(s_string);
  for (;i_len >= 0 ; i_len--)
  {
    printf("%c",s_string[i_len]);
  }
  printf("\n");
  return 0;
}
