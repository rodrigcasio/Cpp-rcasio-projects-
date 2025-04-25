#include "h_GermanshepherdMultilevelInheEx.hpp"
#include <iostream>

int main(){

  GermanShepherd doggy1;

  doggy1.eat();
  doggy1.bark();
  doggy1.guard();

  doggy1.setAnimalType("Dog");
  doggy1.setDogName("Kiara");
  doggy1.pringInfo();
    
  
  return 0;
}
