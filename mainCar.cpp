#include <iostream>
#include "h_Car.hpp"

int main(){
  
  Car car1;

  car1.name = "Altima";
  car1.model = "Nissan";

  car1.honk();
  car1.printModel();
  
  return 0;
}
