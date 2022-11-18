#include <iostream>
#include <vector>
int main(){
  std::vector<int> v1 = {1, 2, 3, 4};

  for(int i = 0; i < v1.size(); i++){
    std::cout << v1[i] << std::endl;
  }
  
  v1.insert(v1.begin(), 10);

  // ++itr == itr++ || ++i == i++
  for(auto itr = v1.begin(); itr != v1.end(); ++itr){
    std::cout << *itr << '\n';
  }
}