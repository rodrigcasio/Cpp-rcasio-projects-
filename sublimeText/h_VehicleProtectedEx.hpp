#ifndef VEHICLE_PROTECTED_EX_HPP
#define VEHICLE_PROTECTED_EX_HPP

#include <iostream>
#include <string>

class Vehicle{
public:
	void setVehicleType(std::string vehicleType);
	std::string getVehicleType();

private:
	std::string type;

protected:
	std::string make;
	int year;
	std::string model;

};

#endif