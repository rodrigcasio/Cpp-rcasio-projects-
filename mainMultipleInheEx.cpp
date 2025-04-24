#include "h_DuckMultipleInheEx.hpp"
#include <iostream>

int main(){
  
  Duck ducky;

  ducky.setMaxHeight(200);
  ducky.setMaxSpeed(20);

  ducky.fly();
  ducky.land();
  ducky.run();
  ducky.stop();
  ducky.speak();
  return 0;
}
