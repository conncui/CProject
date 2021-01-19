#include <iostream>
#include <typeinfo>

using namespace std;
struct MyStruct {
  int a;
  double b;
  char c;

  MyStruct(int a, double b, char c) {
    this->a = a;
    this->b = b;
    this->c = c;
  }
};

void base_data_type() {
  std::cout << "base_data_type:" << std::endl;
  std::cout << typeid(1).name() << std::endl;
  std::cout << typeid('a').name() << std::endl;
  std::cout << typeid("aaaaaa").name() << std::endl;
  std::cout << typeid(11.22).name() << std::endl;

  int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
  int(*p)[2][2];
  int b = 10;
  int *p1 = &b;
  char *pr_char = "a";

  short *(pp[2][3]);

  cout << "int :" << typeid(*(p1)).name() << endl;
  cout << "int point :" << typeid(p1).name() << endl;
  cout << "char point :" << typeid(pr_char).name() << endl;

  cout << "int array:" << typeid(a).name() << endl;
  cout << "array point :" << typeid(p).name() << endl;
  cout << "s point array :" << typeid(pp).name() << endl;
  p = a;
  cout << "A2 int array" << typeid((p[1][1])).name() << endl;
  cout << "int data" << (p[1][1][1]) << endl;
}

void type_name_map({})

int main(int argc, char *argv[]) {
  //
  base_data_type();
  //
  int num = 100;
  if (typeid(int) == typeid(num)) {
    std::cout << "typeid(num).name():" << std::endl;
    std::cout << typeid(num).name() << std::endl;
    //   std::cout << typeid(num) << std::endl;
  }

  MyStruct st = MyStruct(12, 12.34, 'A');
  if (typeid(MyStruct) == typeid(st)) {
    std::cout << "typeid(MyStruct):" << std::endl;
    std::cout << typeid(st).name() << std::endl;
  }

  return 0;
}