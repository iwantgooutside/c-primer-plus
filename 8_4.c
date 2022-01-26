#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
  long l_letter_num = 0 ;
  int i_word_num = 0;
  int c_ch;
  bool b_is_start = false;

  while ( ( c_ch = getchar() ) != EOF )
  {
    if (isspace(c_ch) || ispunct(c_ch))
    {
      b_is_start = false ;
      continue;
    }
    else if (isalpha(c_ch))
    {
      if (!b_is_start)
        {
          i_word_num++;
          b_is_start = true ;
        }
      l_letter_num++;
    }
  }
  printf("%ld letter and %d word,%d average",l_letter_num,i_word_num,l_letter_num/i_word_num);
  return 0;
}
