#include <stdio.h>
int main(void)
{
  int i;
  char c_letter;
  char a_letters[26];
  for(c_letter = 'a',i=0;c_letter <= 'z';c_letter++,i++)
    {
      a_letters[i] = c_letter ;
      printf("%c",a_letters[i]);
    }
  printf("\n");
  return 0;
}
