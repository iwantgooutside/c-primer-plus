#include <stdio.h>
int main(void)
{
  int i_num = 0 ;
  char c_ch;
  printf("please enter your text:");
  while ((c_ch = getchar())!='#')
  {
    switch (c_ch)
    {
      case '.' :
        printf("!");
        i_num++;
        break;
      case '!' :
        printf("!!");
        i_num++;
        break;
      default  :
        putchar(c_ch);
        break;
    }
  }
  printf("%d",i_num);
  return 0;
}
