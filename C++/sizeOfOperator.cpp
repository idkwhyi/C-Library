#include <iostream>

int main() {

  // sizeof() = determines the size in bytes of a:
  //            variable, data type, class, object, etc

  std::string name = "oooo";
  double gpa = 2.5;
  char grade = 'F';
  bool student = true;
  char grades[] = {'A', 'B', 'C', 'D'};
  std::string students[] = {"Spongebob", "Patrick", "Sandy", "Squidward"};

  std::cout << sizeof(gpa) << " bytes\n";
  std::cout << sizeof(name) << " bytes\n";
  std::cout << sizeof(grade) << " bytes\n";
  std::cout << sizeof(student) << " bytes\n";
  std::cout << sizeof(grades) << " bytes\n";
  std::cout << sizeof(grades) / sizeof(student) << " character\n"; // count the length of arrays
  std::cout << sizeof(students) / sizeof(std::string) << " character\n";
  
  return 0;
}