#ifndef ANIMAL_PRIVATE_EX_HPP
#define ANIMAL_PRIVATE_EX_HPP

#include <iostream>
#include <string>

class Animal{
public:
	std::string species;
	std::string name;

	void eat();
	std::string getName();

protected:
	int age;
	void sleep();

private:
	void makeSound();

};

#endif 