#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
int main(){
  // function can have a same name but different parameters
  // we can isntead using one of these function
  bakePizza();
  bakePizza("pepperoni");
  bakePizza("pepperoni", "mushroom");
  return 0;
}

void bakePizza()
{
  std::cout << "Here is your pizza\n";
}
void bakePizza(std::string topping1)
{
  std::cout << "Here is your " << topping1 << " pizza\n";
}
void bakePizza(std::string topping1, std::string topping2)
{
  std::cout << "Here is your " << topping1 << " " << topping2 << " pizza\n";
}
