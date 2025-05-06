#include <iostream>
#include "h_CounterStorageClassesEx.hpp"

int main(){

  std::cout << "Demonstrating static counter:" << std::endl;
  incrementStaticCounter();
  incrementStaticCounter();

  std::cout << "Demonstratig auto counter:" << std::endl;
  incremenrAutoCounter();
  incrementAutoCounter();

  std::cout << "Demostrating extern value" << std::endl;
  externCounter = 100;

  std::cout << "Extern counter value: " << externCounter << std::endl;

  return 0;
}
