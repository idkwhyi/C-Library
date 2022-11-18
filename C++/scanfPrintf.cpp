#include <iostream>
// #include <cstdio>
using namespace std;

int main()
{
  /*
    FORMAT SPECIFIER:
    int    = %d    [32 bit]
    long   = %ld   (long integer data type) [64 bit]
    Char   = %c    [character]
    Float  = %f    (short decimal value) [32 bit]
    Double = %lf   (long decimal value) [64 bit]
    String = %s
  */
  // scanf = cin => scanf("%formatSpecifier", &var);
  // printf = cout => printf("%formatSpecifier", var);

  printf("Hello world!");

  int a;
  scanf("%d", &a); // cin
  printf("%d", a); // cout

  int d;
  long ld;
  char c;
  float f;
  double lf;

  scanf("%d %ld %c %f %lf", &d, &ld, &c, &f, &lf);
  printf("%d %ld %c %f %lf", d, ld, c, f, lf);
  // printf("%d\n%ld\n%c\n%f\n%lf", d, ld, c, f, d); // use this if want to add new line
  return 0;
}