#include <iostream>
#include <cctype>

using namespace std;

int main (int argc, char *argv[]) {
  int x=0;
  int y=1;
  int sum = 0;
  int no_of_turns = 5;

  for (int i=0; i <= no_of_turns; i++){
    sum = x + y;
    x = y;
    y = sum;
    cout << x << ", ";
    if (i == no_of_turns){
      cout << "\b\b";
      cout << "  ";
    }
  }

  return 0;
}
