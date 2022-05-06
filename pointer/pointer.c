#include <stdio.h>

int main(void)
{
  int a;
  int* ptr;

  a = 5;
  ptr = &a;
  *ptr = 3;
  printf("%d\n", a);

  return 0;
}
