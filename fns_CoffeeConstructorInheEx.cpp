#include "h_CoffeeConstructorInhe.hpp"
#include <iostream>

Coffee::Coffee(){
  std::cout <<"A delicios cup of Coffee" << std::endl;
}

Coffee::Coffee(std::string type, std::string size): cType(type), cSize(size) { //constructor def with body and patameters 
  std::cout << "A " << cSize <<" " << cType << std::endl;
}

void Coffee::isFull(){
  std::cout << "The cup is full!" << std::endl;
}
void Coffee::isEmpty(){
  std::cout <<"The cup is empty!" << std::endl;
}
