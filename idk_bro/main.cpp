#include <iostream>
#include <string>
#include "people.h"
#include "birthday.h"

using namespace std;

int main (int argc, char *argv[]) {
  Birthday bd(13,02,2004);

  string birthday_string = to_string(bd.getDay()) + "/" + to_string(bd.getMonth()) + "/" + to_string(bd.getYear());

  People Grace("Grace",birthday_string); 

  Grace.printPerson();

  return 0;
}
