#ifndef BIRD_BULTIPLE_INHE_EX_HPP
#define BIRD_BULTIPLE_INHE_EX_HPP
#include <string>

class Bird{
public:
	void fly();
	void land();
	void setMaxHeight(int animalHeight);

private:
	int maxHeight;
};

#endif 