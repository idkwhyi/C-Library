#include <iostream>


// while loop its much like if statement 
// EXCEPT we cant repeat some code infinitely amount except if the condition is true

int main() {
  std::string name;

  while(name.empty()){ // check if this statement is true or false
    std::cout << "enter your name "; // if the statement is true then this code will be excecuted
    std::getline(std::cin, name);
  }

  std::cout << "Hello " << name;

  return 0;
}