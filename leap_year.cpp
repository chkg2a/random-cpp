#include <cmath>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  float year;
  bool leapYear;
  cout << "Enter an year! ";
  cin >> year;

  if (ceil(year/4) == floor(year/4) && ceil(year/100) != floor(year/100)){
    cout << year << " is a leap year!" << endl;
  }
  else{
    cout << year << " is not a leap year!" << endl;
  }


  return 0;
}
