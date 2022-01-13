/*
伪代码：
  do
    展示 用户选择界面，提示用户输入
    接受 用户值
    判断 用户值 所属分类
    将 相应税率，范围传递给主程序
    计算
    打印
  while

计算结果可用float类型
*/

#include <stdio.h>
#include <stdbool.h>

#define RATE_1 0.15
#define RATE_2 0.28
#define SINGLE_RANGE 17850
#define HOF_RANGE 23900
#define MJ_RANGE 29750
#define MS_RANGE 14875

int main(void)
{
  unsigned int u_salary,u_tax;
  int i_index , i_range ;
  bool i_flag;
  do
  {
    i_flag = false ;
    printf("*******************************************************\n");
    printf("please select your category\n");
    printf("   1) single                 2) head of household        \n");
    printf("   3) married joint          4) married separate\n");
    printf("   5) quit\n");
    printf("please enter here : ");
    scanf("%d",&i_index);
    switch (i_index)
    {
      case 1 :
        i_range = SINGLE_RANGE;
        break;
      case 2 :
        i_range = HOF_RANGE;
        break;
      case 3 :
        i_range = MJ_RANGE;
        break;
      case 4 :
        i_range = MS_RANGE;
        break;
      case 5 :
        i_flag = true;
        break;
      default :
        printf("please enter valid number : ");
        continue;
    }
    if (i_flag)
      break;

    printf("now,please enter your salary: ");
    scanf("%u",&u_salary);
    if (u_salary < i_range)
      u_tax = RATE_1 * u_salary;
    else
      u_tax = RATE_1 * i_range + (u_salary - i_range) * RATE_2 ;
    printf("this is your tax: %u \n",u_tax);
  }while(true);
return 0;
}
