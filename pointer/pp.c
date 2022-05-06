#include <stdio.h>

int main(void)
{
  int a;
  int* ptr;
  int** ptrptr; //ポインタのポインタ

  a = 5;
  ptr = &a;
  ptrptr = &ptr;
  **ptrptr = 3; //参照先（ptr）の参照先（a）の値が書き換わる
  printf("%d\n", a);

  return 0;
}
