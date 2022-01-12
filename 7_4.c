#include <stdio.h>
int main(void)
{
  int i_num = 0 ;
  char c_ch;
  printf("please enter your text:");
  while ((c_ch = getchar())!='#')
  {
    if (c_ch == '.')
    {
      printf("!");
      i_num++;
      continue;
    }
    else if (c_ch == '!')
    {
      printf("!!");
      i_num++;
      continue;
    }
    else
    {
      putchar(c_ch);
    }
  }
  printf("%d",i_num);
  return 0;
}
