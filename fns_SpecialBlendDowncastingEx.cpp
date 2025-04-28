#include "h_SpecialBlendDowncastingEx.hpp"

SpecialBlend::SpecialBlend(int cSize, int cAmount, std::string cLocation): Coffee(cSize, cAmount, false), location(cLocation) {}

void SpecialBlend::getLocation(){
  return location;
}
