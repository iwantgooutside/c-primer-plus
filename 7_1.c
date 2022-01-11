#include <stdio.h>
int main(void)
{
  char c_ch ;
  int i_s, i_n, i_o;
  i_s = i_n = i_o = 0 ;

  while ((c_ch = getchar()) != '#')
  {
    if (c_ch == ' ')
      i_s++;
    else if (c_ch == '\n')
      i_n++;
    else
      i_o++;
  }
  printf("%d spaces %d newline %d other",i_s,i_n,i_o);
  return 0;
}
