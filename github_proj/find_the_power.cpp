#include <iostream>

using namespace std;

int rec(int n, int g, int x, int y){
  while (x <= y){
    g = g * n;
    x++;
    rec(n,g,x,y);
  }
  return g;
}

int main (int argc, char *argv[]) {
  int number = 2;
  int power = 2;
  int result = 0;
  cout << rec(number,number,2,power);
}
