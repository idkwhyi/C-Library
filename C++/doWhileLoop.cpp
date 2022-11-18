#include <iostream>

// do while loop = do some block of code first 
//                 THEN repeat again if condition is true

int main() {
  int number;

  do {
    std::cout << "enter an nummber: ";
    std::cin >> number; // akan dieksekusi terlebih dahulu lalu divalidasi dengan while

  }while (number < 0);

  std::cout << "the number is " << number;

  return 0;
}