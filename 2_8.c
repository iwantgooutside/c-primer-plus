#include <stdio.h>

void one(void);
void two(void);
void three(void);

int main(void)
{
  printf("starting now:\n");
  one();
  two();
  three();
  printf("done!\n");
  return 0;
}

void one(void)
{
  printf("one\n");
}

void two(void)
{
  printf("two\n");
}

void three(void)
{
  printf("three\n");
}
