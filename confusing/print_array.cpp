#include "print_array.h"
#include <iostream>

using namespace std;

void print_arrays(int array[], int sizeOfArray){
  cout << "E ---- V" << endl;
  for (int x = 0; x < sizeOfArray; x++){
    cout << x << " ---- " << array[x] << endl;
  }
};
