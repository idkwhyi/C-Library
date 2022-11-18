#include <iostream>

void swap(std::string &x, std::string &y);
int main() 
{
  std::string x = "Kool-Aid";
  std::string y = "Water";

  swap(x, y);

  std::cout << x << '\n';
  std::cout << y << '\n';

  return 0;
}

void swap(std::string &x, std::string &y){
  std::string temp;
  temp = x;
  x = y;
  y = temp;
}