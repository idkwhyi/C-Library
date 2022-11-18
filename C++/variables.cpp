#include <iostream>

int main() {

  //integer (all number)
  int age = 18;
  int year = 2022;
  // int days = 7.5;  the output will be 7

  //double (number include decimal)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.3;

  //single character (if we put double character the output will be the last character)
  char grade = 'A';
  char initial = 'B';
  char dollar = '$';

  //boolean (true or false)
  bool student = true;
  bool power = true;
  bool forSale = false;

  //string (object that represent a sequence of text)
  std::string name = "bro";

  std::cout << "Hello " << name << '\n';
  // std::cout << "I am " << age << " years old" << '\n';

  return 0;
}