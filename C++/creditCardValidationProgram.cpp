#include <iostream>
/*
LUHN ALGORITHM
--------------
1. Double every second digit from right to left
  if doubled number is two digit, split them
2. add all singe digit from step one
3. add all odd number digits from right to left
4. sum result of step 2 and 3
5. if step 4 is divisible by 10, # is valid
*/

int getDigit(const int number);
int sumOddDigit(const std::string cardNumber);
int sumEvenDigit(const std::string cardNumber);

int main()
{
  std::string cardNumber;
  int result = 0;

  std::cout << "Enter a ccredit card number #: ";
  std::cin >> cardNumber;

  result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

  if(result % 10 == 0){
    std::cout << cardNumber << " is valid";

  }else{
    std::cout << cardNumber << " is not valid";
  }

  return 0;
}

int getDigit(const int number)
{
  return number % 10 + (number / 10 % 10);
}

int sumOddDigit(const std::string cardNumber)
{
  int sum = 0;
  for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
  {
    sum += cardNumber[i] - '0'; // '0' from decimal ascii table ('0' = 48)
  }
  return sum;
}

int sumEvenDigit(const std::string cardNumber)
{
  int sum = 0;
  for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
  {
    sum += getDigit((cardNumber[i] - '0') * 2); // '0' from decimal ascii table ('0' = 48)
  }
  return sum;
}