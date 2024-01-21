// Cheated
#include <iostream>

using namespace std;

int gcd(int x, int y){
  int result = min(x,y);
  while (result > 0){
    if (x % result == 0 && y % result == 0){
      break;
    }
    result--;
  }
  return result;
};

int main (int argc, char *argv[]) {
  int x = 39;
  int y = 15;

  cout << gcd(x,y);
  // cout << result;

  return 0;
}
