#include <stdio.h>

//再帰 フィボナッチ
int fibo_recu(int n) {
  if(n == 1 || n == 2) {
    return 1;
  } else if(n >= 3) {
    //この例だと関数の呼び出し回数が膨大になるので良くない
    //特に、再帰で2回以上自身の関数を呼び出すのは避けた方が良さそう。
    return fibo_recu(n-1)+fibo_recu(n-2);
  }
}

//再帰を使わない場合
int fibo(int n) {
  int a[2] = {1,1};
  for(int i = 2; i < n; i++) {
    a[(i+1)%2] = a[i%2] + a[(i+1)%2];
  }
  return a[n%2];
}

int main(void) {

  for(int i = 1; i <= 10; i++) {
    printf("%3d%5d\n",fibo_recu(i),fibo(i));
  }

  return 0;
}
