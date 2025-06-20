#ifndef LAND_ANIMAL_MULTIPLE_INHE_EX_HPP
#define LAND_ANIMAL_MULTIPLE_INHE_EX_HPP

#include <string>

class landAnimal{
public:
	void run();
	void stop();
	void setMaxSpeed(int animalSpeed);

private:
	int maxSpeed;
};

#endif 