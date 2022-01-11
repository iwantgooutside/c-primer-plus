#include <stdio.h>
int main(void)
{
  int i_num,i_even_count,i_odd_count,i_even_sum = 0,i_odd_sum = 0 ;
  while (scanf("%d",&i_num) && i_num != 0)
  {
    switch (i_num % 2)
    {
      case 0 :
        i_even_count++;
        i_even_sum += i_num;
        break;
      case 1 :
        i_odd_count++;
        i_odd_sum += i_num;
        break;
    }
  }
  printf("even count : %d  even sum : %.2f \n",i_even_count,(float)i_even_sum / (float)i_even_count);
  printf("odd count : %d   odd  sum : %.2f \n",i_odd_count,(float)i_odd_sum / (float)i_odd_count);
  return 0;
}
