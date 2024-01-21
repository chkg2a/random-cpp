#include <cmath>
#include <iostream>
#include <tuple>

using namespace std;

tuple<float,float> root_of_quad_eqn(float a, float b, float c){
  float cal, cal2;
  cal = ( (b * (-1)) + sqrt(pow(b,2) - 4 * a * c))/2 * a;
  cal2 = ( (b * (-1)) - sqrt(pow(b,2) - 4 * a * c))/2 * a;
  return {cal, cal2};
}

int main (int argc, char *argv[]) {
  int a = 1;
  int b = -7;
  int c = 10;
  auto [firstRoot, secondRoot] = root_of_quad_eqn(a,b,c);
  cout << firstRoot << " - "<<  secondRoot << endl;
  return 0;
}
