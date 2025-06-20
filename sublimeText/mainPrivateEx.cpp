#include "h_PrivateDogEx.hpp"
#include <iostream>

int main(){

	PrivateDog myDawg;

	myDawg.setName("Kiara");
	myDawg.setSpecies("Golden Retriever");
	myDawg.setAge(13);

	std::cout <<"My dog's name is: " << myDawg.getName() << std::endl
			  <<"Species: "<< myDawg.getSpecies() << std::endl
			  <<"Age: "<<myDawg.getAge() << std::endl
			  <<"I miss you so much Kiara, I hope you are well in heaven!" << std::endl
			  <<"Loves you forever," << std::endl
			  <<"rodrig" << std::endl;

	return 0;
}