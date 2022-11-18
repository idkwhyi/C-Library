#include <iostream>

// break = break out of the loop
// continue = skip current iteration

int main() {
  for (int i = 1; i <= 10; i++)
  {
    if (i == 7) {
      // continue; // menghilangkan angka 7
      // break; // saat menyentuh angka 7 maka kode selanjutnya tidak di eksekusi
    }
    std::cout << i << '\n';
  }
  
  return 0;
}