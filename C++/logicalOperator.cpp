#include <iostream>

// && = check if two condition are true
// || = check if at least one of two condition is true
// !  = reverse the logical state of its operant

int main(){
  int temp;
  bool sunny = false;
  
  std::cout << "enter the temperature -- ";
  std::cin >> temp;

  // &&
  // std::cout << (temp >= 16 && temp <= 38 ? "the temperature is good" : "the temperature is bad");

  // ||
  // if (temp >= 16 || temp <= 38) {
  //   std::cout << "the temperature is bad";
  // } else {
  //   std::cout << "the temperature is good";
  // }
  
  // !
  if (!sunny){
    std::cout << "it's cloudy outside";
  } else {
    std::cout << "it's sunny outside";
  }
  return 0;
}