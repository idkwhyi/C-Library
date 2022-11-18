#include <iostream>

// ternary operator is an replacement to an if/else statement
// condition ? expression 1 : expression 2;
//               (true)         (false)
// pada ternary expression 1 merupakan true
//              expression 2 merupakan false

int main(){
  // int grade = 50;
  // (grade >= 65) ? std::cout << "you pass!" : std::cout << "try again";

  // int number = 8;
  // number % 2 ? std::cout << "odd" : std::cout << "even";  // pada kode disamping kolom 1 = true(1) : 2 = false(0)

  bool hungry = true;
  bool full = false;
  bool condition = hungry;
  // hungry ? std::cout << "im hungry" : std::cout << "im full";
  std::cout << (condition == hungry? "im hungry" : "im full");

  return 0;
}