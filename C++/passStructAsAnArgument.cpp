#include <iostream>
// ERROR OCCURED (NOT FOUND THE SOLUTION YET)

void printCar(Car &car);
void paintCar (Car &car, std::string color);

struct Car {
  std::string model;
  int year;
  std::string color;
};

int main(){
  Car car1;
  Car car2;

  car1.model = "Mustang";
  car1.year = 2023;
  car1.color = "red";

  car2.model = "Corvette";
  car2.year = 2024;
  car2.color = "blue";

  // printCar(car1);
  paintCar(car1, "silver");
  paintCar(car1, "Gold");

  // printCar(car1);
  // printCar(car2);

  return 0;
}
// default = pass by value
// not default = pass by reference (address)
// for the default, function make an new copy ot the value of car1 and car2
// but if we want to not make a new copy of the value then we can add '&'(for the address)

// for function below => default (Car car), not default (Car &car)
void printCar(Car &car){
  std::cout << car.model << '\n';
  std::cout << car.year << '\n';
  std::cout << car.color << '\n';
}

// if we want to make a change from the original value then we must add a '&'
// if not then the output will not change the value, but the output will make a new value
void paintCar (Car &car, std::string color){
  car.color = color;
}
