#include <iostream>

void myFcn1(int x) { std::cout << 2 * x; }

void myFcn(int x);

int main() {
  myFcn(5);
  return 0;
}