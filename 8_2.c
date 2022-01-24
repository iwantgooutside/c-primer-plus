#include <stdio.h>
int main()
{
  int i_ch;
  int i_index = 0 ;
  while ((i_ch = getchar()) != EOF)
  {
    if (i_index < 10)
    {
      i_index++;
      switch (i_ch)
      {
        case ' ' :
          continue;
        case '\n' :
          i_index = 0 ;
          printf("\\n ");
          printf("%-4d",(int)'\n');
          printf("\n");
          break;
        case '\t' :
          printf("\\t ");
          printf("%-4d",(int)'\t');
          break;
        default:
          printf("%c ",i_ch);
          printf("%-4d",i_ch);
          break;
      }
    }
    else
    {
      i_index = 0;
      printf("\n");
    }
  }
  return 0 ;

}
