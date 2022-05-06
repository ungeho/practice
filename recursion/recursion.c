#include <stdio.h>

int a(int n) {
  if(n == 1 || n == 2) {
    return 1;
  } else if(n >= 3) {
    return a(n-1)+a(n-2);
  }
}

int main(void) {

  for(int i = 1; i <= 10; i++) {
    printf("%3d\n",a(i));
  }

  return 0;
}
