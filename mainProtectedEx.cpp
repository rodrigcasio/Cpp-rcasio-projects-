#include <iostream>
#inlcude "h_CarProtectedEx.hpp"

int main(){
  Car myCar1;

  myCar1.setType("Car");
  myCar1.setMake("BMW");
  myCar1.setModel("355i");
  myCar1.setYear(2008);

  myCar1.displayCarInfo();
  return 0;
}
