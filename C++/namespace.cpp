#include <iostream>

  //namespace = provide a solution from preventing name conflicts in large project.
  //            Each entity needs a unique name. A namespace allows for identical 
  //            named entities as long as the namespace are different.

namespace first {
  int x = 1;
}

namespace second {
  int x = 2;
}

int main() {
  using std::cout;
  using std::string;
  using namespace first;

  string a = "hello";

  cout << x;
  cout << second::x;


  return 0;
}