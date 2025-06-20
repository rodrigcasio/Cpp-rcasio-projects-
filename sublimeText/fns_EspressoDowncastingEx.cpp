#include "h_EspressoDowncastingEx.hpp"

Espresso::Espresso(int cSize, int cAmount, bool cDblShot)
				   : Coffee(cSize, cAmount, true), dblShot(cDblShot) {}

void Espresso::isDoubleShot(){
	if(dblShot){
		std::cout << "This is a double shot espresso." << std::endl;
	}else{
		std::cout << "This is a single shot espresso." << std::endl;
	}
}