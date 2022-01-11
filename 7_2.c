#include <stdio.h>
int main(void)
{
  char c_ch ;
  int i_count = 0 ;
  while ((c_ch = getchar()) != '#')
  {
    if (c_ch == '\n')
    {
      putchar(c_ch);
      i_count = 0 ;
      continue;
    }

    printf("%3c %3d",c_ch,c_ch);
    i_count++;
    if (0 == i_count % 8 )
    {
      printf("\n");
    }
  }
  return 0;
}
