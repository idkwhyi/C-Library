#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {
  std::string fullName;
  int age;


  std::cout << "how old are you: ";
  std::cin >> age;

  std::cout << "type your full name: ";
  std::getline(std::cin >> std::ws, fullName);   //untuk kalimat + spasi

  std::cout << "Hello " << fullName << " nice to meet you" << '\n';
  std::cout << "you are " << age << " years old";

  return 0;
}