/*
伪代码：
  总磅数，商品磅数，总金额，每个商品的金额，折扣金额，运费，
  do
  {
    展示界面，提示用户选择一种蔬菜
    提示用户选择蔬菜磅数，记录数据
  }while
  判断总磅数，计算运费
  判断总价值，计算折扣
*/

#include <stdio.h>
#include <stdbool.h>

#define A_PRICE 2.05
#define B_PRICE 1.15
#define C_PRICE 1.09
#define DISCOUNT_START 100
#define DISCOUNT_RATE 0.05
#define SHIPPING_RANGE_1 5
#define SHIPPING_PRICE_1 6.5
#define SHIPPING_RANGE_2 20
#define SHIPPING_PRICE_2 14
#define SHIPPING_PRICE_3 0.5

void display(void);
float compute(float single_price,float pound);

int main(void)
{

  float f_sum_pound = 0 ,f_pound = 0 ,f_a_pound = 0 ,f_b_pound = 0 ,f_c_pound = 0;
  float f_sum_price = 0 ,f_price = 0 ,f_a_price = 0 ,f_b_price = 0 ,f_c_price = 0;
  float f_discount = 0 ,f_shipping = 0;
  int i_index ;
  bool b_flag ;

//用户选择蔬菜开始
  do
  {
    b_flag = false ;
    display();
    scanf("%d",&i_index);
    switch (i_index)
    {
      case 1 :
        printf("how much pound do you want :");
        scanf("%f",&f_pound);
        f_a_pound += f_pound;
        f_price = compute(A_PRICE,f_pound);
        f_a_price += f_price;
        break;
      case 2 :
        printf("how much pound do you want :");
        scanf("%f",&f_pound);
        f_b_pound += f_pound;
        f_price = compute(B_PRICE,f_pound);
        f_b_price += f_price;
        break;
      case 3 :
        printf("how much pound do you want :");
        scanf("%f",&f_pound);
        f_c_pound += f_pound;
        f_price = compute(C_PRICE,f_pound);
        f_c_price += f_price;
        break;
      case 4 :
        b_flag = true ;
        break;
      default :
        printf("please enter a valid number :");
        continue;
    }
    if (b_flag)
      break;
  } while(true);
//用户选择蔬菜结束

//计算总磅数和总价格
  f_sum_pound = f_a_pound + f_b_pound + f_c_pound;
  f_sum_price = f_a_price + f_b_price + f_c_price;

//计算运费
  if (f_sum_pound <= SHIPPING_RANGE_1)
    f_shipping = SHIPPING_PRICE_1 ;
  else if (f_sum_pound <= SHIPPING_RANGE_2)
    f_shipping = SHIPPING_PRICE_2 ;
  else
    f_shipping = SHIPPING_PRICE_2 + (f_sum_pound - SHIPPING_RANGE_2) * SHIPPING_PRICE_3;

//计算折扣
  if (f_sum_price >= DISCOUNT_START)
    f_discount = DISCOUNT_RATE * f_sum_price ;

  printf("your detail : \n");
  printf("    name          pound          price          cost per pound         total price        discount        shipping cost          total charge          total pound\n");
  printf("antichokes         %.2f           %.2f              %.2f                   \n",
          f_a_pound,f_a_price,f_a_price/f_a_pound);
  printf("beets              %.2f           %.2f              %.2f                   \n",
          f_b_pound,f_b_price,f_b_price/f_b_pound);
  printf("carrot             %.2f           %.2f              %.2f                   \n",
          f_c_pound,f_c_price,f_c_price/f_c_pound);
  printf("                                                                         %.2f           %.2f           %.2f                    %.2f                  %.2f \n",
        f_sum_price,f_discount,f_shipping,f_sum_price - f_discount,f_sum_pound);
  return 0;
}

void display(void)
{
  printf("******************************************************\n");
  printf("please enter your choice : \n");
  printf("  1) antichokes                   2) beet \n");
  printf("  3) carrot                       4) quit \n");
  printf("please enter your choice :");
}

float compute(float single_price ,float pound)
{
  float price;
  price = pound * single_price;
  return price;
}
