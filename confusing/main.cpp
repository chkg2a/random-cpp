#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "print_array.h"

using namespace std;

class BomB
{
  public:
    void setName(int x){
      name = x;
    }
    int getName(){
      return name;
    }

  private:
    int name;

};

int main (int argc, char *argv[]) {
  srand(time(0));
  int szForAr = rand() % 6;
  BomB xd;
  xd.setName(szForAr);
  int anArray[xd.getName()];
  
  for (int x = 0; x < xd.getName(); x++){
    anArray[x] = 1+ (rand() % 24);
  };

  print_arrays(anArray, xd.getName());

  return 0;
}
