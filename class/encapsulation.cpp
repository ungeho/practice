#include <iostream>


//protected: 外部から参照は出来ないが、継承したクラスからは参照可能

//カプセル化
class Number {
private: //外部や継承したクラスから参照不可
  int value;

public: //外部から参照可能
  void Set(int v) {
    this->value = v;
  }
};

//継承の時に
//:protected 継承元　とした場合、継承元のメンバでpublic:だったものは全てprotected:になり引き継がれる。
//:private 継承元　　とした場合、継承元のメンバは全てprivate:になって引き継がれる。
//:public 継承元　　　とした場合、継承元のアクセス修飾子がそのまま引き継がれる。

int main(void) {
  Number n; //n.valueのように読み書きは出来ない
  n.Set(5); //publicにあるSetを使って代入のみ可能
  return 0;
}
