#include <iostream>
#include <vector>

//typedef = reseved keyword used to create an additional name (alias) for
//          another data type. New identifier for an existing type, Helps with 
//          readability and reduce typos.
//          use when there is clear benefit.
//          Replaced with 'using' (work better w/templates)

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main() {
  text_t firstName = "matt";
  number_t age = 18;

  std::cout << firstName << '\n';
  std::cout << age << '\n';
  return 0;
}