#include <iostream>

// function = a block of reusable code
// code below is a function and function caller (in the main())

void happyBirthday(std::string name, int age);


int main(){

  std::string name = "matt";
  int age;
  std::cout << "your age: ";
  std::cin >> age;

  happyBirthday(name, age);

  return 0;
}

void happyBirthday(std::string name, int age) {
  std::cout << "Happy birthday to " << name << '\n';
  std::cout << "Happy birthday to " << name << '\n';
  std::cout << "Happy birthday dear " << name << '\n';
  std::cout << "Happy birthday to " << name << '\n';
  std::cout << "You are " << age << "years old!";
}