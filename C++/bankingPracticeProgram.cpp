#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
  double balance = 0;
  int choise = 1;

  do
  {
    std::cout << "************************\n";
    std::cout << "Enter Your Choise:\n";
    std::cout << "************************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cin >> choise;
    switch (choise)
    {
    case 1:
      showBalance(balance);
      std::cout << '\n';
      break;
    case 2:
      balance += deposit();
      showBalance(balance);
      std::cout << '\n';
      break;
    case 3:
      balance -= withdraw(balance);
      showBalance(balance);
      std::cout << '\n';
      break;
    case 4:
      std::cout << "Thanks For Visiting ;)\n";
      break;
    default:
      std::cout << "Invalid Choise\n";
    }
  } while (choise != 4);

  std::cout << std::endl;
  return 0;
}

void showBalance(double balance)
{
  std::cout << "Your Balance is $" << std::setprecision(2) << std::fixed << balance << '\n';
  // setprecision(2) = show decimal number until 0.12
}

double deposit()
{
  double amount = 0;
  std::cout << "Enter the Amount You Want to Deposit: ";
  std::cin >> amount;
  if (amount > 0)
  {
    return amount;
  }
  else
  {
    std::cout << "Please enter the right amount!'\n";
    return 0;
  }
}

double withdraw(double balance)
{
  double amount = 0;
  std::cout << "Enter the Amount You Want to Withdraw: ";
  std::cin >> amount;
  if (amount > balance)
  {
    std::cout << "Please Enter the right amount\n";
    return 0;
  }
  else if (amount < 0)
  {
    std::cout << "Please Enter the right amount\n";
    return 0;
  }
  else
  {
    return amount;
  }
}