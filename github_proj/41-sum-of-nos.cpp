#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int sum=0, n, i, even_sum=0, odd_sum=0;
  cin >> n;
  for (i = 1; i<=n; i++){
    sum += i;
    if (i%2==0){
      even_sum+=i;
    }
    else{
      odd_sum+=i;
    }
  }
  cout << sum << endl;
  cout << even_sum << endl;
  cout << odd_sum << endl;
  return 0;
}
