#include <iostream>
#include <cmath>
using namespace std;

#define pi 3.141256

float c2f(float c){
  return (c * 9/5) + 32;
}

float f2c(float f){
  return (f - 32) * 5/9;
}

int main (int argc, char *argv[]) {
  float celsius, fahrenheit;
  int choice = 1;
  cout << "Celsius to Fahrenheit (1) or Fahrenheit to Celsius (2) [Default 1] = ";
  cin >> choice;

  switch(choice){
    case 1:
      cout << "\nValue of Celsius - ";
      cin >> celsius;
      cout << "Fahrenheit = " << c2f(celsius) << endl;
      cout << "Celsius = " << celsius << endl;
      break;
    case 2:
      cout << "\nValue of Fahrenheit - ";
      cin >> fahrenheit;
      cout << "Fahrenheit = " << fahrenheit << endl;
      cout << "Celsius = " << f2c(fahrenheit) << endl;
      break;
    default:
      cout << "Please enter a correct choice!" << endl;
  }
  
  
  return 0;
}
