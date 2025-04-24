#Include "h_PrivateDogEx.hpp"
#include <string>
//setters:
void PrivateDog::setName(std::string dogName){
  name = dogName;
}
void PrivateDog::setSpecies(std::string dogSpecies){
  species = dogSpecies;
}
void PrivateDog::setAge(int dogAge){
  age = dogAge;
}
//getters:
std::string PrivateDog::getName(){
  return name;
}
std::string PrivateDog::getSpecies(){
  return species;
}
std::string PrivateDog::getAge(){
  return age;
}
