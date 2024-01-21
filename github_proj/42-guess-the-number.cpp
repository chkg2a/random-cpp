#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main (int argc, char *argv[]) {
  srand(time(0));
  int guess_number, program_no= rand()%51, noOfAttempts = 0; 
  cout << "Guess the number between 0 to 50 ~ ";
  cin >> guess_number;
  cout << "\n Program no is " << program_no << endl;
  while ( guess_number != program_no){
    noOfAttempts++;
    if (guess_number < program_no){
      cout << "Your number is lower." << endl;
      cout << "Guess again!" << endl;
      cin >>  guess_number;
    }
    else if( guess_number > program_no){
      cout << "Your number is higher." << endl;
      cout << "Guess again!" << endl;
      cin >>  guess_number;
    }
    else{
      break;
    }
  }
  cout << "Congratz you correctly chose the right answer!";
  cout << noOfAttempts;
  return 0;
}
