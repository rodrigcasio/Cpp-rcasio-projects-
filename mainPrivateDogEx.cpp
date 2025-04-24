#include "h_PrivateDogEx.hpp"
#include <iostream>

int main(){

  PrivateDog myDawg;

  myDawg.setName("Kiara");
  myDawg.setSpecies("Golden Retriver");
  myDawg.setAge(12);

  std::cout <<"My dog's name is: "<< myDawg.getName() << std::endl
            <<"Species: "<< myDawg.getSpecies() << std::endl;
            <<"Age: " <<myDawg.getAge() << std::endl;
            <<"I miss you so much Kiara, I hop you are well in heaven!" << std::endl
            <<"Loves you forever," << std::endl
            <<"rodrig" <<std::endl;
  return 0;
}
