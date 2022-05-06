#include <iostream>

//基底クラス(継承されるクラス)
class BaseClass {
public:
  void print() {
    std::cout << "BassClass\n";
  }
};

//派生クラス(継承するクラス)
class DerivedClass : public BaseClass {
public:
  //新しい機能の追加
  void printNew() {
    std::cout << "DerivedClass\n";
  }
};

int main() {
  //派生クラスのインスタンスを生成
  DerivedClass dc;

  //派生クラスのインスタンスから
  //基底クラスのメンバ関数を呼び出す
  dc.print();

  //派生クラスで定義したメンバ関数
  dc.printNew();
}
