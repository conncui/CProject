#include <iostream>

using namespace std;

int add(int x, int y) { return x + y; }

int subtract(int x, int y) { return x - y; }

int common_operator(int x, int y, int (*function)(int, int)) {
  return (*function)(x, y);
}

int main() {
  cout << common_operator(1, 2, add) << endl;
  cout << common_operator(1, 2, subtract) << endl;
}