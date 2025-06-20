#include <iostream>

class Computer{
public:
	Computer(std::string cName, double cSpeed, int cRam);
	void turnOn();
	virtual void addRam(int extraRam); //overriding method()
	void printSpecs();

protected:
	std::string name;
	int ram;
	double speed;
};