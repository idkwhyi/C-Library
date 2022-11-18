#include <iostream> 


// MORE INFO ABOUT THIS AT C++ STRING DOCS
int main() {
  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  
  // "stringname".length() used to count how long the character is
  // if(name.length() > 12) {
  //   std::cout << "Your name cannot be over 12 character";
  // } else {
  //   std::cout << "Welcome " << name;
  // }

  // "stringname".empty() used to return boolean value
  // if(name.empty()) {
  //   std::cout << "please enter a name";
  // } else {
  //   std::cout << "nice name";
  // }

  // "stringname".clear() used to clear the value of the string
  // name.clear();

  // "stringname".append("text....") used to add a new string to the end of the string
  // name.append("@gmail.com");

  // "stringname".at(x) used to return the character of x position (c++ character 0,1,2,3,4,5,...)
  // std::cout << name.at(0);
  // or we can use "stringname"[index] = this code will return the character at index

  // "stringname".insert(x,"y") used to insert a y string at x position
  // name.insert(0, "@s");

  // "stringname".find('x') used to find an x CHAR on the string
  // name.find('c');

  // "stringname".erase(x,y) used to erase from the begining index (x) until the end index (y);
  // name.erase(0,3); // this code line will erase all character from 0 to 2
  
  
  std::cout << name.find('c');

  return 0;
}