#include <iostream>

int main() {
  // pointers = variable that store memory address(&) of another variable
  //       reason to use = sometimes its easier to work with an address

  //  &  address operator
  //  *  derefrence operator

  std::string name = "Matt";
  int age = 18;
  std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

  std::string *pName = &name; //this is pointer of name
  int *pAge = &age;
  std::string *pFreePizzas = freePizzas; // we dont need to add & to an array

  std::cout << *pName << '\n';
  std::cout << *pAge << '\n';
  std::cout << pFreePizzas << '\n'; // this code will return the address
  std::cout << *pFreePizzas << '\n'; // this will return the first array

  return 0;
}

// * untuk membuat pointer (biasanya diberi huruf *p... untuk menunjukkan bahwa itu pointer)
// & digunakan untuk menunjuk pointer pada variabel yang telah ada