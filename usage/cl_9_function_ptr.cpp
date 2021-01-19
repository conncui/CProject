#include <stdio.h>

// 声明函数

void call_by_switch();
void call_by_function_prt();

// void () method_1;
void method_1();

// void () method_2;
void method_2();
int main() {
  //   call_by_switch();
  call_by_function_prt();
  return 0;
}

void call_by_switch() {
  int i = 2;
  switch (i) {
    case 1:
      method_1();
      break;
    case 2:
      method_2();
      break;
  }
}

void call_by_function_prt() {
  int a = 1;
  /*
  // cl_9_function_ptr.cpp:34:11: error: cannot initialize a variable of type
  'void *' with an lvalue of type 'void ()' void *m1 = method_1;
  */

  /*
  // cl_9_function_ptr.cpp:38:11: error: cannot initialize a variable of type
  'void *' with an rvalue of type 'void' void *m1 = method_1();
   */

  /*
  // cl_9_function_ptr.cpp:44:12: error: cannot initialize a variable of type
  'void (*)' with an lvalue of type 'void ()'
  */
  // void (*m1) = method_1;

  /*
  // cl_9_function_ptr.cpp:28:27: error: cannot initialize an array element of
  type 'void *' with an lvalue of type 'void ()' void *p[] =
  {method_1,method_2}; p[1];
  */

  void (*ptr[])() = {method_1, method_2};
  ptr[1]();

  //   int a = 1;
  //   int  arr [] = {a}
  //   void () (*p)[]
}

void method_1() { puts("method_1"); }
void method_2() { puts("method_2"); }