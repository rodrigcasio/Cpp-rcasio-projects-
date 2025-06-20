#include "h_SpecialBlendDowncastingEx.hpp"

SpecialBlend::SpecialBlend(int cSize, int cAmount, std::string cLocation)
						   : Coffee(cSize, cAmount, false), location(cLocation) {}

std::string SpecialBlend::getLocation(){
	return location;
}
