#include "h_VehicleProtectedEx.hpp"

//def methods of Vehicle class:
void Vehicle::setVehicleType(std::string vehicleType){
	type = vehicleType;
}

std::string Vehicle::getVehicleType(){
	return type;
}