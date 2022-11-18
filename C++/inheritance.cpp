#include <iostream> 

// class Animal{
//   public:
//   bool alive = true;
//   void eat(){
//     std::cout << "This animal is eating\n";
//   }
// };

// class Dog : public Animal{
//   public:

//   void bark(){
//     std::cout << "the dog goes woof\n";
//   }
// };

// class Cat : public Animal{
//   public:
//   void meow(){
//     std::cout << "the dog goes meow\n";
//   }
// };

class Shape{
  public:
  double area;
  double volume;
};

class Cube : public Shape{
  public:
  double side;
  Cube(double side){
    this->side = side;
    this->area = side * side * 6;
    this->volume = side * side * side;
  }
};

class Sphere : public Shape{
  public:
  double radius;
  Sphere(double radius){
    this->radius = radius;
    this->area = 4 * 3.14159 * radius * radius;
    this->volume = (4/3.0) * 3.14159 * radius * radius * radius;
  }
};


int main(){

  // inheritance = A class can recieve attributes and methods from another class
  //               Children classes inherit from a parent class
  //               helps to reuse similar code found within multiple classes

  // Dog dog;
  // Cat cat;

  // dog.eat();
  // dog.bark();

  Cube cube(10);
  std::cout << cube.area << '\n';
  std::cout << cube.volume << '\n';

  Sphere sphere(10);
  std::cout << sphere.area << '\n';
  std::cout << sphere.volume << '\n';
  return 0;
}