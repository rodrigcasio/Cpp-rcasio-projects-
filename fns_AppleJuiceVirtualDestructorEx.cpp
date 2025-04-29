#include "h_JuiceVirtualDestructorEx.hpp"
#include <iostream>

AppleJuice::AppleJuice(int jSize, std::string apple): Juice("apple", jSize), appleType(apple){
  std::cout << jSize << " mL of apple juice made from " << apple << " appples." << std::endl;
}

std::string AppleJuice::getAppleType(){
  return appleType;
}

AppleJuice::~AppleJuice(){
  std::cout << "Apple juice is finished!" << std::endl;
}
