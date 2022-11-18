#include <iostream>

// this code below used for outputing struct to a function

struct Garrage{
  std::string name;
  std::string color;
};

void out(Garrage *car1);

int main() {
  Garrage car1;

  out(&car1);

  return 0;
}

void out(Garrage *car1){
  car1 -> name = "Mustang";
  car1 -> color = "silver";

  std::cout << car1 -> name << '\n';
  std::cout << car1 -> color << '\n';
}