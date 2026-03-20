#include <iostream>
double square(double x) { return x * x; }
void print_square(double x) {
  std::cout << "The square of " << x << "is " << square(x) << "\n";
}
int main() {
  std::cout << "Hello, World!" << std::endl;
  print_square(1.234);
  return 0;
}
