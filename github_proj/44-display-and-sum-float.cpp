#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int n;
  float sum =0; 
  cin >> n;
  for (float i=1; i<=n; i++){
    if (i == 1){
      sum += i;
      cout << "1" << " + ";
    }
    else{
      sum += 1/i;
      cout << "1/" << i << " + ";
      if (i == n){
        cout << "\b\b= " << sum << endl;
      }
    }
  }
  return 0;
}
