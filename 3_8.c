#include <stdio.h>
int main(void)
{
  float f_cup ;
  printf("please enter a cup :___\b\b\b");
  scanf("%f",&f_cup);
  printf("your cup is %.2f and it is %.2f pint %.2f ounce %.2f tablespoons %.2f teaspoons\n",
          f_cup,f_cup/2,f_cup*8,f_cup*16,f_cup*48);
  return 0;
}
