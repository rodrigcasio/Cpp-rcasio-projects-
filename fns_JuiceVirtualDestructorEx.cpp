#include "h_JuiceVirtualDestructorEx.hpp"
#include <iostream>

Juice::Juice(std::string jType, int jSize): type(jType), size(jSize) {}

void Juice::setJuiceType(std::string newType){
  type = newType;
}
void Juice::setJuiceSize(int newSize){
  size = newSize;
}
std::string Juice::getJuiceType(){
  return type;
}
int Juice::getJuiceSize(){
  return size;
}
