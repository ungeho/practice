#include <stdio.h>
#include <string.h>


struct person {
  char name[32];
  int  age;
};

//全てのメンバの値が複製される為、効率が悪い
void show_person_cpy(struct person a){
  printf("name :%s\n",a.name);
  printf("age  :%d\n",a.age);
}

//複製せずに原本を利用しているので効率が良い
//ただし、取り扱いには注意が必要（値を変更すると原本を直接書き換える事になる）
void show_person_ptr(struct person* a) {
  printf("name :%s\n",a->name); //a->name は (*a).name と同じ
  printf("age  :%d\n",a->age);
}

int main(void) {
  struct person x;
  strcpy(x.name, "ungeho");
  x.age  = 13;

  show_person_cpy(x);

  show_person_ptr(&x);

  return 0;
}
