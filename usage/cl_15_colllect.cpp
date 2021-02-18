#include <iostream>
#include <map>
void map_string_int();

struct Node {
  std::string k1;
  std::string k2;

}

int main() {
  map_string_int();
  return 0;
}
void map_string_int() {
  std::map<std::string, int> map = {

      {"Java", 2014}, {"Java2", 2017}};

  for (const auto &entry : map) {
    auto key = entry.first;
    std::cout << entry.second << '\n';
    std::cout << entry.first << '\n';
  }
}