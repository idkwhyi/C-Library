#include <iostream>

enum Day
{
  sunday = 0,
  monday = 1,
  tuesday = 2,
  wednesday = 3,
  thursday = 4,
  friday = 5,
  saturday = 6,
};

enum Flavor {vanilla, mint, chocolate, strawberry}; // if we not assign a integer it will automatic 0, 1, 2, 3,...

enum Color {red, orange, yellow, green, blue, purple};

int main()
{
  // enums =  a user-defined data type that consists
  //          of paired named-integer constants.
  //          GREAT if you ahve a set of potential options

  Day today = friday;

  switch (today)
  {
  case 0:
    std::cout << "this is sunday";
    break;
  case 1:
    std::cout << "this is monday";
    break;
  case 2:
    std::cout << "this is tuesday";
    break;
  case 3:
    std::cout << "this is wednesday";
    break;
  case 4:
    std::cout << "this is thursday";
    break;
  case 5:
    std::cout << "this is friday";
    break;
  case 6:
    std::cout << "this is saturday";
    break;
  }

  return 0;
}