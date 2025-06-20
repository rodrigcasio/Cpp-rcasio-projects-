#include <iostream>
#include "h_GermanshepherdMultilevelInheEx.hpp"

int main(){

	GermanShepherd doggy1;

	doggy1.eat();
	doggy1.bark();
	doggy1.guard();

	doggy1.setAnimalType("Dog");
	doggy1.setDogName("Kiara");
	doggy1.printInfo();


	return 0;
}