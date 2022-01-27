

#include <stdio.h>

int main()
{
  float f_num1,f_num2,f_output;
  char c_index;
  int i_flag;
  do
    {
      printf("please enter the operation of your choice : \n");
      printf("a. add            s. subtract\n"
             "m. multiply       d. divide \n"
             "q. quit \n");

      if ( (c_index = getchar()) != 'q')
      {

      //while (getchar() != '\n')
        //  continue;

        switch (c_index)
        {
          case 'a' :
            i_flag = 1;
            break;
          case 's' :
            i_flag = 2;
            break;
          case 'm' :
            i_flag = 3;
            break;
          case 'd' :
            i_flag = 4;
            break;
          default :
            while (getchar() != '\n')
              continue;
            printf("please enter a or s or m or d or q :");
            continue;
        }

        do
        {
          while (getchar() != '\n')
            continue;
          printf("please enter first number : ");
        } while( scanf("%f",&f_num1) != 1);

        do
        {
          while (getchar() != '\n')
            continue;
          printf("please enter second number : ");
        } while( scanf("%f",&f_num2) != 1);

        while (getchar() != '\n')
          continue;

        if (i_flag == 4 && f_num2 == (float)0)
        {
          printf("please enter a number other than 0 :");
          while (1)
          {
            scanf("%f",&f_num2);
            while (getchar() != '\n')
              continue;
            if (f_num2 != (float)0)
              break;
          }
        }

        switch (i_flag)
        {
          case 1 :
            f_output = f_num1 + f_num2 ;
            printf("%f + %f = %f \n",f_num1,f_num2,f_output);
            break;
          case 2 :
            f_output = f_num1 - f_num2 ;
            printf("%f - %f = %f \n",f_num1,f_num2,f_output);
            break;
          case 3 :
            f_output = f_num1 * f_num2 ;
            printf("%f * %f = %f \n",f_num1,f_num2,f_output);
            break;
          case 4 :
            f_output = f_num1 / f_num2 ;
            printf("%f / %f = %f \n",f_num1,f_num2,f_output);
            break;
        }

      }

      //跳出程序
      else
      {
        printf("done!\n");
        break;
      }

    }while(1);

}
