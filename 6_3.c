#include <stdio.h>
int main(void)
{
  char c_letter;
  int r,i;
  for(r=0;r<6;r++)
  {
    for(c_letter='F',i=0;i<=r;c_letter--,i++)
    {
      printf("%c",c_letter);
    }
    printf("\n");
  }
  return 0;
}
