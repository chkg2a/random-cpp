#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  float x,y;
  int choice;
  cout << "\
1 - Addition\n\
2 - Subtraction\n\
3 - Multiplication\n\
4 - Division\n";
  cin >> choice;
  cout << "Enter the first number - ";
  cin >> x;
  cout << "\nEnter the second number - ";
  cin >> y;
  switch(choice){
    case 1:
      cout << "\nResults - " << x + y;
      break;
    case 2:
      cout << "\nResults - " << x - y;
      break;
    case 3:
      cout << "\nResults - " << x * y;
      break;
    case 4:
      if(y == 0 ){
        cout << y << " = 0, No numbers can be divided by 0";
        break;
      }
      cout << "\nResults - " << x / y;
      break;
    default:
      cout << "Enter a correct choice!";
  }
  return 0;

}
