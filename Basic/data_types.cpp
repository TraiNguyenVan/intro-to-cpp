#include <iostream>

int main() {
  bool b = 0;
  char c = 'z';
  int i = 5;
  double d = 3.14;
  float f = 3.14;

  std::cout << sizeof(b) << "\n"; // 1 byte;
  std::cout << sizeof(c) << "\n"; // 1 byte;
  std::cout << sizeof(i) << "\n"; // 4 byte;
  std::cout << sizeof(d) << "\n"; // 8 byte;
  std::cout << sizeof(f) << "\n"; // 4 byte;
  return 0;
}
