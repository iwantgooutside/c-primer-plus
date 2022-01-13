/*
伪代码：
  从用户值开始for循环，每次递减1
     从 i_num = 用户值 - 1 开始；到 i_num = 2 为止 ；i_num 每次递减1 ；
     {
        判断 用户值 % i_num 是否为零，
        若是，则可说明该用户值不为素数，跳出循环，迭代用户值
        若循环结束，仍未有求模为零的情况，则说明该数为素数，打印结果
      }
*/

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
  unsigned uni_user,uni_num;
  bool is_prime;
  int i_index;
  printf("please enter your number :");
  scanf("%u",&uni_user);
  for ( ; uni_user > 3 ;uni_user--)
  {
    is_prime = true ;
    for (uni_num = uni_user - 1 ; uni_num >= 2 ; uni_num--)
    {
      i_index = (uni_user % uni_num);
      if (i_index == 0)
      {
        is_prime = false ;
        break;
      }
    }
    if (is_prime)
      printf("%u \n",uni_user);
    }
  printf("3\n2\n1\n");
  return 0;
}
