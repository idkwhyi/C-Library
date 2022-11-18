#include <iostream>

int main() {
  //const keyword mirip di js
  //tell the compilers to prevent anything from modifying it
  //(read only)

  const double PI = 3.14159;
  const int LIGHT_SPEED = 299792458;
  const int width = 1920;
  const int height = 1080;
  
  double radius = 10;
  double circumference =  2 * PI * radius;

  std::cout << circumference << "cm";


  return 0;
}