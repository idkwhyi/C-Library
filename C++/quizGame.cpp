#include <iostream>

int main()
{
  std::string questions[] = {"1. What year was C++ created?: ",
                            "2. Who invented C++?: ",
                            "3. What is the predecessor of C++?: ",
                            "4. Is the earth flat?: "};

  std::string options[][4] = {{"A. 1969", "B. 1979", "C. 1985", "D. 1989"},
                              {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                              {"A. C", "B. C+", "C. C--", "D. B++"},
                              {"A. YES", "B. NO", "C. Sometimes", "D. What's EARTH?!"}};

  char answerKeys[] = {'C', 'B', 'A', 'B'};
  int size = sizeof(questions) / sizeof(questions[0]);
  char guess=0;
  int score=0;

  for (int i = 0; i < size; i++)
  {
    std::cout << "*************************" << '\n';
    std::cout << questions[i] << '\n';
    std::cout << "*************************" << '\n';

    for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
    {
      std::cout << options[i][j] << '\n';
    }

    std::cout << "Your guess: ";
    std::cin >> guess;
    guess = toupper(guess);

    if (guess == answerKeys[i])
    {
      std::cout << "CORRECT" << '\n';
      std::cout << '\n';
      score++;
    }
    else
    {
      std::cout << "WRONG!" << '\n';
      std::cout << "The correct answer is: " << answerKeys[i] << '\n';
      std::cout << '\n';
    }
  }
  int finalScore = ((double)score/size)*100; // DONT FORGET TO CHANGE THE INT TO DOUBLE !!!!!!!!
  std::cout << "________________________________________________________________________\n";
  std::cout << "You answered " << score << " question correctly from #" << size <<" total question.\n";
  std::cout << "your final score is: " << finalScore <<"%\n";
  std::cout << "________________________________________________________________________\n";
  return 0;
}