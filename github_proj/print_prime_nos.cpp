#include <iostream>

using namespace std;

bool check_prime(int n){
  if (n== 0 || n == 1){
    return false;
  }
  for (int i = 2; i <= n/2; ++i){
    if(n%i == 0){
      return false;
    }
  }
  return true; 
}

int main (int argc, char *argv[]) {
  int x;
  int y = 50;
  for (x = 0; x <= y; x++){
    if(check_prime(x)){
      cout << x << ", ";
    };
    if (x == y){
      cout << "\b\b  ";
    }
  }
  return 0;
}
