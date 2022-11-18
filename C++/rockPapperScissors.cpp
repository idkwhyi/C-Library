#include <iostream>
#include <ctime>

char getUserChoise();
char getComputerChoise();
void showChoise(char choise);
void chooseWinner(char choise, char computer);
int main(){
  char player;
  char computer;

  player = getUserChoise();
  std::cout << "You Choise: ";
  showChoise(player);

  computer = getComputerChoise();
  std::cout << "Computer Choise: ";
  showChoise(computer);

  std::cout << std::endl;
  std::cout << "The Result Is....\n";
  chooseWinner(player, computer);

  return 0;
}

char getUserChoise(){
  char x;
  std::cout << "Rock-Paper-Scissors Game Start\n";
  std::cout << "******************************\n";
  do {
    std::cout << "Choose one of the following\n";
    std::cout << "'r' for Rock\n";
    std::cout << "'p' for Paper\n";
    std::cout << "'s' for Scissors\n";
    std::cin >> x;
  } while(x != 'r' && x != 's' && x != 'p');

  return x;
}

char getComputerChoise(){
  srand(time(0));
  int num = rand() % 3 + 1;
  char y;
  switch (num)
  {
  case 1:
    return 'r';
    break;
  case 2: 
    return 'p';
    break;
  case 3: 
    return 's';
    break;
  }

  return y;
}

void showChoise(char choise){
  switch(choise){
    case 'r': std::cout << "Rock\n";
      break;
    case 'p': std::cout << "Paper\n";
      break;
    case 's': std::cout << "Scissors\n";
      break;
  }
}

void chooseWinner(char choose, char computer){
  switch (choose)
  {
  case 'r':
    if(computer == 'r'){
      std::cout << "It's a tie!\n";
    }else if(computer == 'p'){
      std::cout << "You lose\n";
    }else {
      std::cout << "You win!\n";
    }
    break;
  case 'p':
    if(computer == 'r'){
      std::cout << "You win!\n";
    }else if(computer == 'p'){
      std::cout << "It's a tie!\n";
    }else {
      std::cout << "You lose\n";
    }
    break;
  case 's': 
    if(computer == 'r'){
      std::cout << "You lose";
    }else if(computer == 'p'){
      std::cout << "You win!\n";
    }else {
      std::cout << "It's a tie!\n";
    }
  }
}
