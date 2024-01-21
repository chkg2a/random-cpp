#include <future>
#include <iostream>
#include <string>

using namespace std;

void swap_two_n(int &x, int &y){
  int z;
  z = x;
  x = y;
  y = z;
};

int main (int argc, char *argv[]) {
  int x = 4;
  int y = 10;
  int *x_ptr = &x;
  int *y_ptr = &y;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  swap_two_n(*x_ptr, *y_ptr);
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}
