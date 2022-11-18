#include <iostream>

// for loop is a loop that will be executed for specified amount of time
int main()
{
  int count=5;
  for (int i = 0; i <= count; i++)
  {
    std::cout << i << '\n';
  }
  std::cout << "DONE";

  return 0;
}