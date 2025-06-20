#include "h_OrangeJuiceVirtualDestructorEx.hpp"
#include <iostream>

OrangeJuice::OrangeJuice(int juiceSize, bool juicePulp): Juice("orange", juiceSize), pulp(juicePulp){
	if(juicePulp){
		std::cout << juiceSize << " mL orange juice with pulp!" << std::endl;
	}else{
		std::cout << juiceSize << " mL orange juice without pulp!" << std::endl;
	}
}

bool OrangeJuice::hasPulp(){
	return pulp;
}

OrangeJuice::~OrangeJuice(){
	std::cout << "Orange juice is finished!" << std::endl;
}