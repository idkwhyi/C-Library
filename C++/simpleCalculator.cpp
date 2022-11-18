#include <iostream>

int main() {
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "***************** CALCULATOR *****************\n" ;
  std::cout << "\n";

  std::cout << "choose the operator (+ - / *): ";
  std::cin >> op;

  std::cout << "input number #1: ";
  std::cin >> num1;
  std::cout << "input number #2: ";
  std::cin >> num2;

  switch (op) {
    case '+' :
      result = num1 + num2;
      std::cout << "result = " << result << '\n';
      break;
    case '-':
      result = num1 - num2;
      std::cout << "result = " << result << '\n';
      break;
    case '/':
      result = num1 / num2;
      std::cout << "result = " << result << '\n';
      break;
    case '*': 
      result = num1 * num2;
      std::cout << "result = " << result << '\n';
      break;
    default: 
      std::cout << "please input a valid operator";
      break;
  }

  std::cout << "\n";
  std::cout << "***********************************************";

  return 0;
}