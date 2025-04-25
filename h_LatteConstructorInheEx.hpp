#ifndef LATTE_CONSTRUCTOR_INHE_EX_HPP
#define LATTE_CONSTRUCTOR_INHE_EX_HPP
#include <iostream>
#include "h_CoffeeConstructorInheEx.hpp"

class Latte : public Coffee{
  public:
    using Coffee::Coffee; //inherit the 2 constructors of coffee
    Latte(); //own constructor of latte...
  
};

#endif
