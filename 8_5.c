/*
伪代码
  提示用户取值
  取 猜测最大值 的一半，
  while 询问用户是否正确

    若是
      直接跳出循环
    若不是
      询问用户该值偏大还是偏小

      若偏大
        将该值赋给 猜测最大值
        取 猜测最小值 和 猜测最大值 的一半
        跳回循环起始地
      若偏小
        将该值赋给 猜测最小值
        取 猜测最小值 和 猜测最大值 的一半
        跳回循环起始地
*/

#include <stdio.h>

int main()
{
  const MAX_NUMBER = 100;
  const MIN_NUMBER = 0;
  int i_guess = MAX_NUMBER / 2 ;
  int i_max_guess = MAX_NUMBER;
  int i_min_guess = MIN_NUMBER;
  char c_answer;

  printf("is the number %d ? \n",i_guess);
  printf("please enter y or n \n");
  while ( (c_answer = getchar()) != 'y')
  {

    //remove space
    while (getchar() != '\n')
      continue;


    printf("is i_guess great or less ?\n");
    printf("please enter g or l \n");

    //if great
    c_answer = getchar();
    if (c_answer == 'g')
    {

      while (getchar() != '\n')
        continue;

      i_max_guess = i_guess ;
      i_guess = (i_max_guess + i_min_guess) / 2   ;
      printf("is the number %d ? \n",i_guess);
      continue;
    }

    else if (c_answer == 'l')
    {

      while (getchar() != '\n')
        continue;

      i_min_guess = i_guess ;
      i_guess = (i_max_guess + i_min_guess) / 2   ;
      printf("is the number %d ? \n",i_guess);
      continue;
    }

    else
    {
      printf("is the number %d ? \n",i_guess);
      continue;
    }
  }
  printf("done!");
  return 0 ;
}
