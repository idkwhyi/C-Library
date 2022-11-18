#include <iostream>


class Pizza{
  public:
    std::string topping1;
    std::string topping2;

    Pizza(){

    }

    Pizza(std::string topping1){
      this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
      this->topping1 = topping1;
      this->topping2 = topping2;
    }
};

int main(){
  // overloaded constructor = multiple constructor w/ same name but different parameters
  //                          allows for varying argument when instantiating an obeject

  Pizza pizza1("pepperoni");
  Pizza pizza2("mushroom", "peppers");
  Pizza pizza3;

  std::cout << pizza2.topping1 << '\n';

  return 0;
}