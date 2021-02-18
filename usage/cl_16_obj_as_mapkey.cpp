#include <iostream>
#include <map>

template <typename T1, typename T2>
struct Node {
  T1 x;
  T2 y;

  // constructor
  Node(T1 x, T2 y) : x(x), y(y) {}

  // overload < operator to use a Node object as a key in a std::map
  // It returns true if the current object appears before the specified object
  bool operator<(const Node &ob) const {
    return x < ob.x || (x == ob.x && y < ob.y);
  }
};

int main() {

    // 在  https://techiedelight.com/compiler/ 上 选择 C++ Clang 编译器试试
  Node<std::string, std::string> n1 = {"C test", "C99"};
  printf("%p \n", n1);

  std::map<Node<std::string, std::string>, int> map = {
      {n1, 1000},
      {{"C", "C99"}, 1999},
      {{"C", "C11"}, 2011},
      {{"C++", "C++14"}, 2014},
      {{"C++", "C++17"}, 2017},
      {{"Java", "Java SE 8"}, 2014},
      {{"Java", "Java SE 9"}, 2017}};

  for (const auto &entry : map) {
    auto key = entry.first;
    printf("%p", key);

    std::cout << "{" << key.x << "," << key.y << "}, " << entry.second << '\n';
  }

  return 0;
}