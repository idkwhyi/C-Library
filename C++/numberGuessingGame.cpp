#include <iostream>

int main() {
  int num;
  int guess;
  int tries = 0;

  srand(time(NULL));
  int x = 500;

  num = (rand() % x) + 1;
  std::cout << "************ GAME START ************\n";
  do
  {
    std::cout << "Enter a guess between "<< x <<"!!!";
    std::cin >> guess;
    tries++;
    if (guess > num){
      std::cout << "To high!\n";
    } else if(guess < num){
      std::cout << "To low!\n";
    } else {
      // std::cout << "YOU WIN!\n";
      // if(tries >= 20){
      //   std::cout << "UNLUCKY PLAYER!!! πππ";
      // } else if(tries > 5) {
      //   std::cout << "π You are MODERATE player π\n";
      // } else {
      //   std::cout << "π₯Άπ₯Άπ₯Ά LUCKY PLAYER!! π₯Άπ₯Άπ₯Ά\n";
      // }
      std::cout << "You guess " << tries <<" times to reach the end!\n";
    }
  } while (guess != num);
  std::cout << "************ GAME ENDED ************\n";
  return 0;
}