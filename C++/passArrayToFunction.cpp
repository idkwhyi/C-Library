#include <iostream>

double getTotal(double prices[], int size);
int main() {
/*
  NOTE:
    When we pass an array we dont need to add '[]' but on the function we need to add'[]

    however if we want to pass the size of an arrays we need to make an variables that 
    show the length of an array and then  we can pass that length variables of an array 
    to the function 
    (example below)

    because when we dont count the length first, the function doesnt know the length
    because the function decrease it to pointer

*/

  double prices[] = {49.99, 15.05, 75, 9.99};
  int size = sizeof(prices)/sizeof(prices[0]);
  double total = getTotal(prices, size);

  std::cout << "$" << total;
  return 0;
}

double getTotal(double prices[], int size) {
  double total = 0;

  for(int i = 0; i < size; i++){
    total += prices[i];
  }

  return total;
};