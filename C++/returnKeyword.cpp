#include <iostream>

// double square(double length);
std::string concatString(std::string string1, std::string string2);

int main() {
  // return = return a value back to the spot
  //          where you called the encompassing 
  // void pada function mengikuti data type dari hasil

  // double length = 5.0;
  // double area = square(length);
  // std::cout << area;

  std::string firstName = "Matthew";
  std::string lastName = "Christian";
  std::string fullName = concatString(firstName, lastName);

  std::cout << "My name is " << fullName;


  return 0;
}

// double square(double length){
//   return length * length;
// }

std::string concatString(std::string string1, std::string string2) {
  return string1 + " " + string2;
}