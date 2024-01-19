#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday {
public:
  Birthday(int d, int m, int y);
  int getYear() { return year; }
  int getMonth() { return month; }
  int getDay() { return day; }

private:
  int year, month, day;
};

#endif
