#include "h_MutableKeyworEx2.hpp"
#include <iostream>

void Cache::isValid() const{
  std::cout << "Cache is " << (valid ? " valid!" : " invalid!") << std::endl;
  if(!valid){
    valid = true;
  }
}
