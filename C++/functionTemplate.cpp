#include <iostream>

template <typename T, typename U> // template to make a template function

auto max(T x, U y){ // VS CODE ERROR HERE
  return (x > y) ? x : y;
}

int main(){
  // function template = describe waht a function looks like.
  //                     Can be used to generate as many overlaoaded function
  //                     as needed, each using different data type
  // function template is a function that can accept any function data type

  // std::cout << max(1, 2) << '\n'; // int
  // std::cout << max(1.5, 2.6) << '\n'; // double
  // std::cout << max('1', '2') << '\n'; // char 
  std::cout << max(1, 2.9) << '\n'; // int and double

  return 0;
}