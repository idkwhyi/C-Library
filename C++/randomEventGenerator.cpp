#include <iostream>
#include <ctime>

int main() {
  srand(time(0));

  int randNumber = (rand() % 5) + 1;
  switch (randNumber)
  {
  case 1: std::cout << "You win a dollar!\n" ;
    break;
  case 2: std::cout << "You win a t-shirt!\n" ;
    break;
  case 3: std::cout << "You win a 10 dollars!\n" ;
    break;
  case 4: std::cout << "You win a free lunch!\n" ;
    break;
  case 5: std::cout << "You win a discount coupon!\n" ;
    break;
  }
  
  return 0;
}