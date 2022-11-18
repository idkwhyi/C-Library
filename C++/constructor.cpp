#include <iostream>

class Student{
  public:
    std::string name;
    int age;
    double gpa;

    // this code below is a constructor
    Student(std::string x, int y, double gpa){
      name = x;
      age = y;
      this->gpa  = gpa;
    }
};

class Car{
  public:
  std::string make;
  std::string model;
  int year;
  std::string color;

  Car(std::string make, std::string model, int year, std::string warna){
    this->make = make;
    this->model = model;
    this->year = year;
    color = warna;
  }
};

int main(){
  // constructor = special method that is automaticly called when an object is instantiated
  //               USEFUL for assigining value to attributes as an argument

  Student student1("Spongebob",21, 3.2);
  Car car1("Chevy", "Corvette", 2022, "red");
  Car car2("Ford", "Mustang", 2023, "blue");

  std::cout << car1.make << '\n';
  std::cout << car1.model << '\n';
  std::cout << car1.year << '\n';
  std::cout << car1.color << '\n';
  return 0;
}