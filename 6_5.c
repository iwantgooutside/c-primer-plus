#include <stdio.h>
int main(void)
{
  int i_row,i_maxrow,i_col,i_char;
  char c_letter;
  printf("please enter your letter:_\b");
  scanf("%c",&c_letter);
  i_maxrow = c_letter - 'A' + 1;

  for (i_row = 0 ; i_row < i_maxrow ; i_row++)
  {
    for (i_col = i_maxrow ; i_col > i_row ; i_col--)
      printf(" ");
    for (c_letter = 'A',i_char = 0 ; i_char <= i_row ; c_letter++,i_char++)
    {
      printf("%c",c_letter);
    }
    for (c_letter = 'A' + i_row -1 , i_char = 0 ; i_char < i_row ; c_letter--,i_char++)
      printf("%c",c_letter);
    printf("\n");
  }
  return 0;
}
