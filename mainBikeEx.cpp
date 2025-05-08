#include "h_BikeEx.hpp"
#include <iostream>

int main(){

  Bike myBike("Mqueen", 20, 80, 30);

  //display bike information:
  myBike.displayBikeInfo();

  //changing the cadence of myBike
  myBike.changeBikeCadence(90);

  //chaning the pace of myBike
  myBike.chaningBikePace(10);

  //diplaying the information with new changes
  myBike.displayBikeInfo();

  return 0;
}
