#include "stdlib.h"
// #include "string.h"

// #include "string"
// #include "string"

#include <iostream>

using namespace std;

typedef struct Student {
  string name ="xiao ming";
  int age = 18;
  int body_height;

  string gender;

  Student() { printf("\n构造函数 %p", this); }
  ~Student() { printf("\n析构函数 %p", this); }
} Student;

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

  printf("\n&std1: %p", &std1);  // cl_14_point0x107308040

  //   cl_14_point.cpp:24:16: warning: format specifies type 'int' but the
  //   argument has type 'Student *' [-Wformat] printf("%d", &std1);

  printf("\n%lu", sizeof(int));

  printf("\n%lu", sizeof(std1));

  Student* std2;
  printf("\n&std2 : %p", &std2);
  // printf("\n&std2->age : %p", &std2->age);
  printf("\nstd2->age : %d", std2->age);

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

  //   printf("\nstd5.age : %d", &std5.age);

  Student std6;
  printf("\n&std6 : %d", &std6);

  int num_1 = 10;
  int num_2 = 10;

  int * num_1_p = &num_1;

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
}
