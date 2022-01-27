//修改
//程序前需添加头文件 ctype.hchar 
get_first(void)
{
  int i_ch;

  while (isspace( ( i_ch = getchar() ) ))
    continue;
  while (getchar() != '\n')
    continue;

  return i_ch;

}
