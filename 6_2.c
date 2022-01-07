#include <stdio.h>
int main(void)
{
  int r,i;
  for(r=0;r<5;r++)
    {
      for(i=0;i<=r;i++)
      {
        printf("$");
      }
      printf("\n");
    }
  return 0;
}
