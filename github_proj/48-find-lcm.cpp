#include <iostream>

using namespace std;

int lcm(int x, int y){
  int result = max(x,y);
  while(true){
    if (result % x ==0 && result % y == 0){
      break;
    }
    result++;
  }
  return result;
}

int main (int argc, char *argv[]) {
  int x = 4012;
  int y = 10;
  cout << lcm(x,y);
  return 0;
}
