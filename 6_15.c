#include <stdio.h>
#include <string.h>
int main(void)
{
  char car[255];
  int i=0,len;
  printf("please enter your input : ");
  scanf("%s",car);
  len = strlen(car);
  while (len >= 0)
    printf("%c",car[len--]);
  printf("\n");
  return 0;
}
