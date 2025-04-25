#ifndef ANIMAL_MULTILEVEL_INHE_EX_HPP
#define ANIMAL_MULTILEVEL_INHE_EX_HPP
#define <iostream>

class Animal{
public:
  void eat();
  void setAnimalType(std::string animalType);
  std::string getAnimalType();

private:
  std::string typeOfAnimal;
};

#endif
