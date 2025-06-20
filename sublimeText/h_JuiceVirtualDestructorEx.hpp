#ifndef JUICE_VIRTUAL_DESTRUCTOR_EX_HPP
#define JUICE_VIRTUAL_DESTRUCTOR_EX_HPP
#include <iostream>
#include <string>

class Juice{
public:
	Juice(std::string juiceType, int juiceSize);
	void setJuiceSize(int newSize);
	void setJuiceType(std::string newType);
	int getJuiceSize();
	std::string getJuiceType();
	
	virtual ~Juice();

protected:
	std::string type;
	int size;
};

#endif