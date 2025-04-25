#include "h_CarDiamondMultiInheEx.hpp"
#include "h_TruckDiamondMultiInheEx.hpp"

class HybridCar : public Car, public Truck{
public:
  HybridCar();
};
