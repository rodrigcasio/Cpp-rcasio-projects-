#include "h_JuiceVirtualDestructorEx.hpp"
#include <iostream>

OrangeJuice::OrangeJuice(int jSize, bool juicePulp): Juice("orange", jSize), pulp(juicePulp){
  if(juicePulp){
    std::cout << jSize << " mL orange juice with pulp!" << std::endl;
  }else {
    std::cout << jSize << " mL orange juice without pulp!" << std::endl;
  }
}

bool OrangeJuice::hasPulp(){
  return pulp;
}

OrangeJuice::~OrangeJuice(){
  std::cout << "Orange juice finished!" << std:endl;
}
