#ifndef COFFE_CONSTRUCTOR_INHE_EX_HPP
#define COFFE_CONSTRUCTOR_INHE_EX_HPP
#include <iostream>

class Coffee{
public:
	Coffee();
	Coffee(std::string type, std::string size);
	void isEmpty();
	void isFull();

private:
	std::string cType;
	std::string cSize;
};

#endif 