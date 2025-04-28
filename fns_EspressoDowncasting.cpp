#include "h_EspressoDowncastingEx.hpp"
#include <iostream>

Espresso:Espresso(int cSize, int cAmount, bool isDblShot): Coffee(cSize, cAmount, true), dblShot(isDblShot) {} // true because its a hot coffee

void Espresso::isDoubleShot(){
  if(dblShot){
    std::cout << "This is a double shot espresso" << std::endl;
  }else{
    std::cout << "this is a single shot espresso" << std::endl;
  }
}
