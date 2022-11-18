#include <iostream>

int main() {

  // foreach loop = loop that eases the travelsal over an iterable data set
  // foreach loop best used for showing the iterable data set only

  std::string students[] = {"Spongebob", "Patrick", "Squidward"};
  int grades[] = {65, 72, 81, 93};

  // for(std::string student : students) {
  //   std::cout << student << '\n';
  // }

  for(int grade : grades) {
    std::cout << grade << '\n';
  }

  return 0;
}