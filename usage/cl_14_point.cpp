#include "stdlib.h"
// #include "string.h"

// #include "string"
// #include "string"

#include <iostream>
#include <map>

using namespace std;

typedef struct Student {
  string name = "xiao ming";
  int age = 18;
  int body_height;

  string gender;

  Student() { printf("\n构造函数 %p", this); }
  ~Student() { printf("\n析构函数 %p", this); }
} Student;


template<typename T1, typename T2>

struct Node {
  T1 x;
  T2 y;

  // constructor
  Node(T1 x, T2 y) : x(x), y(y) {}

  // overload < operator to use a Node object as a key in a std::map
  // It returns true if the current object appears before the specified object
  bool operator<(const Node& ob) const {
    return x < ob.x || (x == ob.x && y < ob.y);
  }
};

int getMap() {
  std::map<Node<std::string, std::string>, int> map = {
      {{"C", "C99"}, 1999},          {{"C", "C11"}, 2011},
      {{"C++", "C++14"}, 2014},      {{"C++", "C++17"}, 2017},
      {{"Java", "Java SE 8"}, 2014}, {{"Java", "Java SE 9"}, 2017}};

  for (const auto& entry : map) {
    auto key = entry.first;
    std::cout << "{" << key.x << "," << key.y << "}, " << entry.second << '\n';
  }

  return 0;
}

int main() {
  printf("cl_14_point");

  // cl_14_point.cpp:16:16: error: cannot pass non-POD object of type 'Student'
  // to variadic function; expected type from format string was 'int'
  // [-Wnon-pod-varargs]
  //   printf("%d", std1);

  // cl_14_point.cpp:17:16: error: cannot pass non-POD object of type 'Student'
  // to variadic function; expected type from format string was 'void *'
  // [-Wnon-pod-varargs]
  //   printf("%p", std1);

  Student std1;
  std1.age = 1;
  printf("\n&std1: %p", &std1);  // cl_14_point0x107308040
  printf("\n&std1.age: %d", std1.age);

  Student* std1_p;

  // std1_p = &std1;
  // printf("\n&std1_p: %p", std1_p);

  //   cl_14_point.cpp:24:16: warning: format specifies type 'int' but the
  //   argument has type 'Student *' [-Wformat] printf("%d", &std1);

  printf("\n%lu", sizeof(int));

  printf("\n%lu", sizeof(std1));

  Student* std2;
  printf("\n&std2 : %p", &std2);
  // printf("\n&std2->age : %p", &std2->age);
  // std2->age = 12341234;
  // printf("\nstd2->age : %d", std2->age);

  // printf("\n&std1->age : %p", std1->age);

  // printf("\n&std2->age : %p", std2->age);

  Student* std3 = new Student();
  printf("\n&std3 : %p", &std3);

  Student* std4;

  printf("\n&std4 : %p", std4);
  printf("\n&std4 : %p", &std4);
  printf("\n&std4 : %p", std4);

  //   free(std2);
  //   free(st
  Student std5;
  Student* std5_p = &std5;
  printf("\n&std5   : %d", &std5);
  printf("\nstd5_p  : %d", std5_p);
  printf("\n&std5_p : %d", &std5_p);

  printf("\n&std5   : %p", &std5);
  printf("\nstd5_p  : %p", std5_p);
  printf("\n&std5_p : %p", &std5_p);

  std5.age = 32;
  printf("\n&std5.age   : %d", std5.age);
  printf("\nstd5_p->age : %d", std5_p->age);

  //   printf("\nstd5.age : %d", &std5.age);

  Student std6;
  printf("\n&std6 : %d", &std6);

  int num_1 = 10;
  int num_2 = 10;

  int* num_1_p = &num_1;

  printf("\n ----------------------------------------------------------------");

  printf("\n num_1    : %d", num_1);
  printf("\n &num_1   : %d", &num_1);
  printf("\n &num_2   : %d", &num_2);

  printf("\n num_1  p : %p", num_1);
  printf("\n num_2  p : %p", num_2);

  printf("\n &num_1   : %p", &num_1);

  printf("\n num_1_p  : %d", num_1_p);
  printf("\n &num_1_p : %d", &num_1_p);
  printf("\n num_1_p  : %p", num_1_p);
  printf("\n &num_1_p : %p", &num_1_p);

  printf("\n ----------------------------------------------------------------");

  printf(
      "\n -----------------------------  map "
      "-----------------------------------");

  // getMap();
}
