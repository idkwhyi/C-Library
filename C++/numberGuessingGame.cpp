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
      //   std::cout << "UNLUCKY PLAYER!!! 🙃🙃🙃";
      // } else if(tries > 5) {
      //   std::cout << "😉 You are MODERATE player 😉\n";
      // } else {
      //   std::cout << "🥶🥶🥶 LUCKY PLAYER!! 🥶🥶🥶\n";
      // }
      std::cout << "You guess " << tries <<" times to reach the end!\n";
    }
  } while (guess != num);
  std::cout << "************ GAME ENDED ************\n";
  return 0;
}