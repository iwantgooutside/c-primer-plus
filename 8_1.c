#include <stdio.h>
int main()
{
      long l_num = 0 ;
      char c_ch;
      while ((c_ch = getchar()) != EOF)
      {
        l_num++;
      }
      printf("%ld\n",l_num);
      return 0 ;
}
