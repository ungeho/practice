#include<iostream>


class Person {
public:
  //メンバ関数の先頭にvirtualと書くと継承先のクラスで上書きが可能になる
  virtual int GetAge() { return 0; }
};

class Ungeho : public Person {
public:
  int GetAge() { return 13; }
};

class Alice : public Person
{
public:
  int GetAge() { return 7; }
};

int main(void) {
  Person person;
  Ungeho ungeho;
  Alice  alice;
  //継承先のクラスを継承元クラスと同じように扱う
  Person* people[3] = { &person, &ungeho, &alice };
  int i;
  for (i = 0; i < 3; i++) {
    std::cout << people[i]->GetAge() << std::endl;
  }
  return 0;
}
