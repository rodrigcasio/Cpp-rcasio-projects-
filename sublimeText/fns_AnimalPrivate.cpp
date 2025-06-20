#include "h_AnimalPrivateEx.hpp"

//setter:
void Animal::eat(){
	std::cout << "The animal is eating." << std::endl;
}
void Animal::sleep(){
	std::cout << "The animal is sleeping."<< std::endl;
}
void Animal::makeSound(){
	std::cout << "The animal makes a sound." << std::endl;
}
//getters:
std::string Animal::getName(){
	return name;
}
