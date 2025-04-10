#include <iostream>
#include "hCoffee.hpp"

//example of distributing functions on a different file and add the declaration on
// a header file.

//func dec are in hCoffee.hpp

int main(){
  
  std::cout << make_coffee();
  std::cout << make_coffee(true, true);

  std::cout << make_coffee(true);
  std::cout << make_coffee(false, true);
}

//func def are in funcCoffee.cpp
