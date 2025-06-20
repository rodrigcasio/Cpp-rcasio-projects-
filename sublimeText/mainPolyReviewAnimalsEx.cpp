#include "h_AnimalsPolyReviewEx.hpp"
#include "h_DogPolyReviewEx.hpp"
#include "h_CatPolyReviewEx.hpp"

#include <iostream>

//funcions decl and define:
void display(int number){
	std::cout << "Displaying integer: " << number << std::endl;
}
void display(std::string text){
	std::cout << "Displaying text: " << text << std::endl;
}

int main(){

	display(10);
	display("Hello!");

	//upcasting
	Animal* animalPtr1 = new Dog();
	Animal* animalPtr2 = new Cat();

	animalPtr1->makeSound();
	animalPtr2->makeSound();

	delete animalPtr1;
	delete animalPtr2;

	//downcasting
	Animal* animalPtr = new Dog(); //upcasting 
	Dog* dogPtr =  dynamic_cast<Dog*>(animalPtr); //downcasting

	if(dogPtr != nullptr){
		dogPtr->makeSound();
	}else{
		std::cout << "Downcasting failed!" << std::endl;
	}

	delete animalPtr;

	return 0;
}



/* 
	HOW TO RUN:
	g++ mainPolyReviewAnimalsEx.cpp fns_AnimalsPolyReviewEx.cpp 
	fns_DogPolyReviewEx.cpp fns_CatPolyReviewEx.cpp
	
	./a/out

	output:

	Displaying integer: 10
	Displaying text: Hello!
	Woof!
	Meow!
	Dog destructor called!.
	Animal destructor called.
	Cat destructor called.
	Animal destructor called.
	Woof!
	Dog destructor called!.
	Animal destructor called.

*/