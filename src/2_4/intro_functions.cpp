#include <iostream>

int doubleNumber(int i) { return i * 2; }

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  std::cout << "Double that number is: " << doubleNumber(x) << "\n";
  return 0;
}