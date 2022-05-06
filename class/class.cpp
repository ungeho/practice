#include <iostream>

struct S{
private: //外部からアクセス不可
  int  a;
  char b;
};

class C{
public: //外部から自由にアクセス可能
  int  a;
  char b;

  void f(void) {
    this->a = 5; //ここでのthisは省略可能
  }
};

int main(void){
  S s;
  C c;

  c.a = 3;
  std::cout << c.a << std::endl;
  c.f();
  std::cout << c.a << std::endl;

  return 0;
}
