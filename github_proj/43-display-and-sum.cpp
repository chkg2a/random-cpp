#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int n, sum=0;
  cin >> n;
  for (int i=1; i <= n; i++){
    if (i%2 != 0){
      sum += i;
      cout << i << " + ";
    }
    if (i==n){
      cout << "\b\b= " << sum << endl;
    }
  }
  return 0;
}
