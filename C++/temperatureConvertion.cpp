#include <iostream>

int main(){
  double temp;
  char unit;

  std::cout << "***** Temperature Convertion *****\n";
  std::cout << "F = fahrenheit\n";
  std::cout << "C = celsius\n";
  std::cout << "what unit would you like to convert to-- ";
  std::cin >> unit;

  // std::cout << unit;
  if(unit=='F' || unit=='f') {
    std::cout << "You enter a " << unit <<" unit..\n";
    std::cout << "Enter the temperature in celsius ";
    std::cin >> temp;
    temp = (temp * 9/5) + 32;
    std::cout << "Your result: " << temp << "F" << '\n';
  } else if(unit=='C' || unit=='c') {
    std::cout << "You enter a " << unit <<" unit..\n";
    std::cout << "Enter the temperature in fahrenheit ";
    std::cin >> temp;
    temp = (temp - 32) * 5/9;
    std::cout << "Your result: " << temp << "C" << '\n';
  } else {
    std::cout << "Enter a valid unit...\n";
  }

  std::cout << "**********************************\n";
  return 0;
}
