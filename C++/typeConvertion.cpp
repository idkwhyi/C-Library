#include <iostream> 

// type convertion = convertion a value of one data type to another
//                  Implicit = automacic
//                  Explicit = precede value with new data type (int) x
int main() {

  int correct = 9;
  int question = 10;
  double score = (double)correct/question * 100;

  std::cout << score << "%";

  return 0;
}