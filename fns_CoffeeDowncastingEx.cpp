#include "h_CoffeeDowncastingEx.hpp"
#include <iostream>

Coffee::Coffe(int cSize, int cAmount, bool cIsHot): size(cSize), amountLeft(cAmount), isHot(cIsHot) {}

void Coffee::addAmount(int amount){
  if(amount > 0 && amount + amountLeft <= size){
    amountLeft += amount;
  }else{
    std::cout << "Invalid amount to fill!" << std::endl;
  }
}
int Coffee::getAmount(){
  return amountLeft;
}
void Coffee::getTemperature(){
  if(isHot){
    std::cout << "This coffee is hot!" << std::endl;
  }else{
    std::cout << "This coffee is cold!" << std::endl;
  }
}
