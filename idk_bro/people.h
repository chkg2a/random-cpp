#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>

using namespace std;

class People{
  public:
    People(string n, string bday);
    int calculateAge();
    void printPerson();
  private:
    string birthday;
    string name;
};

#endif
