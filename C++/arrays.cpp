#include <iostream> 

int main() {
  //arrays cannot contain different data type
  
  std::string cars[] = {"Corvette", "Mustang", "Camry"};

  cars[0] = "Camaro";

  std::cout << cars[0] << '\n';
  std::cout << cars[1] << '\n';
  std::cout << cars[2] << '\n';
  return 0;
}