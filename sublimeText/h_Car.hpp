#include "h_Vehicle.hpp"
#include <string>

class Car : public Vehicle{
	public:
		std::string model;

		void honk();
		void printModel();
};