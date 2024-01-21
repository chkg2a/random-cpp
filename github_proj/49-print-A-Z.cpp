#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int A_value = 65;
  int Z_value = 90;
  while(A_value <= Z_value){
    cout << char(A_value) << ", ";
    if (A_value == Z_value){
      cout << "\b\b ";
    }
    A_value++;
  }
  return 0;
}
