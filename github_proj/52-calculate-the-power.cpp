#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int x = 64;
  int y = 2;
  int power = 0;
  int result = 0;
  while (result != 1) {
    power++;
    result = x /y; 
    x = result;
  }
  cout << power;
  return 0;
}
