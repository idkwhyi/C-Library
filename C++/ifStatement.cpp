#include <iostream>

int main() {
  int age;

  std::cout << "input your age: "; 
  std::cin >> age;

  /*
    TIPS: 
      semakin kecil target cakupan letakkan semakin ke bawah 
      misal
      cakupan x >= 100 lebih besar dari, (letakkan di atas)
      cakupan x >= 18 lebih kecil (letakkan di bawah)
  */

  if(age >= 100) {
    std::cout << "ARE YOU GANYU!?";
  }
  else if( age >= 15) {
    std::cout << "a little bit better than younger...";
  } 
  else if (age == 18){
    std::cout << "you are perfect";
  } 
  else {
    std::cout << "you are to young...";
  }

  return 0;
}