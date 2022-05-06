#include <stdio.h>

//列挙型enum　いくつかの値の中から一つが選ばれる。
//「列挙されたいずれかの値を持つ」性質の型を作りたい場合に使われる
enum color {
  red,        //通常、上から0から順に値が割り振られる
  green = 10, //明示的な指定も可能
  blue        //一つ前の値+1になる
};


int main(void) {
  enum color clr;
  // clr = aaa; 列挙されていないものを代入しようとするとコンパイルエラー
  printf("%d\n",red);
  printf("%d\n",green);
  printf("%d\n",blue);

  clr = red;
  if(clr == red) {
    clr = blue;
  }
  printf("%d\n",clr);


  return 0;
}
