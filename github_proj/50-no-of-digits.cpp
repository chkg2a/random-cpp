#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int number = 151230123;
  int no_of_digits = 1;
  int multiples_of10s = 10;
  // cout << number / multiples_of10s << endl;
  while(number / multiples_of10s > 0){
    multiples_of10s *= 10;
    no_of_digits++;
  }
  cout << no_of_digits;
  return 0;
}
