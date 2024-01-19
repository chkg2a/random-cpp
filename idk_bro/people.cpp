#include <iostream>
#include "people.h"
#include <string>
#include <format>
#include <chrono>

using namespace std;

People::People(string n, string bday)
: name(n), birthday(bday)
{
};

int People::calculateAge()
{
  const auto now = chrono::system_clock::now();
  auto today = stoi(format("{:%Y}", now));
  auto lastYear = stoi(birthday.substr(birthday.size() - 4));
  int age = today - lastYear;
  return age;
};

void People::printPerson()
{
  cout << "Name     - " << name << endl;
  cout << "Birthday - " << birthday << endl;
  cout << "Age      - " << calculateAge() << endl;
}

