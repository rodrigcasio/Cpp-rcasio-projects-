#include "h_PrivateDogEx.hpp"
#include <string>
//setter methods
void PrivateDog::setName(std::string dogName){
	name = dogName;
}
void PrivateDog::setSpecies(std::string dogSpecies){
	species = dogSpecies;
}
void PrivateDog::setAge(int dogAge){
	age = dogAge;
}
//getter methods
std::string PrivateDog::getName(){
	return name;
}
std::string PrivateDog::getSpecies(){
	return species;
}
int PrivateDog::getAge(){
	return age;
}