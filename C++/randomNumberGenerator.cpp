#include <iostream>

// this code is pseudo-random
// pseudo-random = NOT truly random (but close)
int main() {
  srand(time(NULL));

  int num1 = (rand() % 6) + 1;
  int num2 = (rand() % 6) + 1;
  int num3 = (rand() % 6) + 1;
  // this code above is creating random number from 1 to 6 (we can change the 6 number to whatever we like)
  std::cout << num1 << '\n';
  std::cout << num2 << '\n';
  std::cout << num3 << '\n';
  return 0;
}