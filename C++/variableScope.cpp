#include <iostream>

int myNum = 3; // this is global variable

void printNum();

int main()
{
  // local variables = variables that declare inside a function or block
  // global variables = variables that declare outside of all function
  int myNum = 1; // this is local variable
  printNum();
  std::cout << myNum;

  return 0;
}
void printNum()
{
  int myNum = 2;                // this is local variable
  std::cout << myNum << '\n';   // this code will use local variable
  std::cout << ::myNum << '\n'; // this code will use global variable
}
