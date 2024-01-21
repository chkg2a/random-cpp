#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  float sum =0, factorial=1;
  for(float i=1; i<=7; i++){
    for (float j=i; j>0;j--){
      factorial *= j;
    }
    sum += i/factorial;
    cout << i << "/" << i << "!" << " + "; 
    if (i == 7){
      cout << "\b\b= " << sum;
    }
  }
  return 0;
}
