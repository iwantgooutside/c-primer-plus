#include <stdio.h>
#include <stdbool.h>
int main(void)
{
  char c_ch1,c_ch2;
  int i_num = 0;
  bool b_ch2_is_e = false;
  printf("please enter your num:");
  while ((c_ch1 = getchar()) != '#')
  {
    if (b_ch2_is_e)
    {
      c_ch2 = c_ch1;
      c_ch1 = 'e';
    }
    if (c_ch1 == 'e')
    {
      if (!(b_ch2_is_e))
      {
        c_ch2 = getchar();
        b_ch2_is_e = false ;
      }
      if (c_ch2 == 'i')
      {
        i_num++;
      }
      else if (c_ch2 == 'e')
      {
        b_ch2_is_e = true;
      }
      else
      {
        continue;
      }
    }
  }
  printf("%d",i_num);
  return 0;
}
