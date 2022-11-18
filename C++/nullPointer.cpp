#include <iostream> 

int main() {
  // Null value = a special value that means something has no vallue
  //              when a pointer is holding null value,
  //              that pointer is not pointing at anything (null pointer)

  // nullptr = keyword represents a null pointer literal

  // nullptr is helpful when determining if an address was successfully assigned to a pointer

  // when using pointers, be careful that your code isn't dereferencing nullptr or pointing ti
  // free memory this will cause undefined behavior


  int *pointer = nullptr;
  int x = 123;

  pointer = &x;

  //code to check the pointer addresses
  if(pointer == nullptr){
    std::cout << "address was not assigned" << '\n';
  } else {
    std::cout << "address was assigned" << '\n';
    std::cout << *pointer;
  }

  return 0;
}