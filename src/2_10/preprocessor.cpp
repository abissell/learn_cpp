#include <iostream>

#define MY_NAME "Andrew"

#define PRINT_JOE

int main() {
  std::cout << "My name is: " << MY_NAME << '\n';

#ifdef PRINT_JOE
  std::cout << "Joe\n";
#endif

#ifdef PRINT_BOB
  std::cout << "Bob\n";
#endif

  return 0;
}