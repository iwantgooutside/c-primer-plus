#include <stdio.h>
int main(void)
{
  char c_letter;
  int r,i;
  for(r=0,c_letter='A';r<6;r++)
  {
    for(i=0;i<=r;c_letter++,i++)
    {
      printf("%c",c_letter);
    }
    printf("\n");
  }
  return 0;
}
