#include <iostream>
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
  int x = 1251235;
  string bruh = to_string(x);
  string new_num = "";
  for (int i = bruh.length();i >= 0; i--){
    new_num += bruh[i];
  }
  cout << new_num;
  // int y = stoi(new_num);
  // cout << y;

  return 0;
}

//CHeated one

// #include <iostream>
// using namespace std;
//
// int main() {
//
//   int n, reversed_number = 0, remainder;
//
//   cout << "Enter an integer: ";
//   cin >> n;
//
//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }
//
//   cout << "Reversed Number = " << reversed_number;
//
//   return 0;
// }
