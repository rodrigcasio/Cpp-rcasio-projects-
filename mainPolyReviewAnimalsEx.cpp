#include "h_AnimalPolyReviewEx.hpp"
#include "h_DogPolyReviewEx.hpp"
#include "h_CarPolyReviewEx.hpp"
#include <iostream>

//decl and def functions:
void display(int number){
  std::cout << "Displaying integer: " << number << std::endl;
}
void dislay(std::string text){
  std::cout << "Displayin text: " << text << std::endl;
}

int main(){

  display(77);
  display("Hello! this is a review of the polymorphism");

  //upcasting
  Animal* animalPtr1 = new Dog();
  Animal* animalPtr2 = new Cat();

  animalPtr1->makeSound();
  animalPtr2->makeSound();

  delete animalPtr1;    //good practice of memory management...
  delete animalPtr2;

  //upcasting example: 
  Animal* animalPtr = new Cat();
  Cat* catPtr = dynamic_cast<Cat*>(animalPtr);

  if(catPtr != nullptr){
    catPtr->makeSound();
  }else{
    std::cout << "Downcasting failed!" << std::endl;
  }

  delete animalPtr; //good practice of memory management deleting the upcasted pointer ...
  
  return 0;
}

/* 
	HOW TO RUN Example depending on the names placed..
 
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
