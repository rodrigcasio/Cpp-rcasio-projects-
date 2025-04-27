#include "h_CarSpecifierOverrideEx.hpp"
#include <iostream>

class FastCar : public Car {
  public:
    void setSpeed(int newSpeed) override;
};
