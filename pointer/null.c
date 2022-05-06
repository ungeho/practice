#include <stdio.h>

int main(void)
{
  void* p;
  //アドレスの0番地は土の変数のアドレスでもない事を意味する。
  //stdio.hでは0番地をNULLを名付けている。
  p = NULL; //ポインタがどの変数も入れてない事を示す場合にNULLを入れる。
  return 0;
}
