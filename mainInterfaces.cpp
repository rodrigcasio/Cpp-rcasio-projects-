#include "h_FlyingCarInterfacesEx.hpp"
#include <iostream>

int main(){

  /*
    To show that a FlyingCar is both a Car and an Aircraft, 
    in main.cpp create a pointer to an Aircraft named firstFlyingCar that points to a FlyingCar instance, 
    and another pointer to a Car called secondFlyingCar that also points to a FlyingCar instance.
  */
  Aircraft* firstFlyingCar = new FlyingCar();
  Car* secondFlyingCar = new FlyingCar();

  firstFlyingCar->fly(200);
  secondFlyingCar->drive(50);

  delete firstFlyingCar;
  delete secondFlyingCar;

  return 0;
}
