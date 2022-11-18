#include <iostream>
#include <vector> // need to add this include command
// using namespace std;

int main(){
    // vercotr = an representation of an array that we dont need to declare 
    //           the LENGTH of an array
    //  to make an vector : std::vector<"data_type"> "vectorName";

    std::vector<int> v1 = {5, 9, 7, 4};

  // accesing the element in the vector
    // std::cout << v1[1] << std::endl; 

  // find the last element of the vector
    // std::cout << v1.back() << '\n';

  // find the first element of the vector
    // std::cout << v1.front() << '\n';

  // used to find the size of vector (size = the actual alement that vector have)
    // std::cout << v1.size() << '\n';

  // used to know the capacity of vector (not the actual size but more like storage left)
    // std::cout << v1.capacity() << '\n'; 
    // akan melakukan penambahan kapasitas dengan cara mengalikan 2
    // contoh: kapasitas awal = 4 bila size>4 maka akan menjadi 8, bila size>8 maka akan menjadi 16, dst...

  // used to add an element on the end of vector
    // v1.push_back(11); // adding 11 to the vector

  // used to remove the last element and return the value of the last element
    // v1.pop_back();
    
  // remove the capacity to fit the array (we dont want our array have tons of unused capacity)
    // v1.shrink_to_fit();

  // to insert an element in x index
    v1.insert(v1.begin(), 5); // this code will add 5 at index 0
    v1.insert(v1.begin() + 2, 11); // this code will add 11 at index 0+2

  // to erase an element at index x
    v1.erase(v1.begin()); // this code will erasing the element at index 0
    
  return 0;
}