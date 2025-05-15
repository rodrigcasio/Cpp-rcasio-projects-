#include "h_PetAbstraction.hpp"
#include "h_DogAbstraction.hpp"
#include "h_CatAbstraction.hpp"
#include "h_MagicPetAbstraction.hpp"
#include <vector>

int main(){

  Dog myDog;
  Cat myCat;

  //assign names of objects: (stack-allocated objects)
  myDog.setPetName("Kaira");
  myCat.setPetName("Garfield");

  //dynamically allocated using new: (heap-allocated objects)
  Dog* dogPtr1 = new Dog();
  dogPtr1->setPetName("Bonny");
  
  //setting vector to add objects Pet class
  std::vector<Pet*> pets;

  //using stack-allocated objets and storing their address (pointers)
  pets.push_back(&myDog); //pointers to stack-allocated objects 
  pets.push_back(&myCat);
  pets.push_back(dogPtr1); //pointer to heap-allocated object

  //look through the vector and call method makeSound() on each pet.
  for(Pet* pet : pets){
    pet->makeSound();
  }

  //creating object of class MagicPet
  pets.push_back(new MagicPet());            //or Pet* myMagicPetPtr = new MagicPet()

  for(Pet* pet : pets){
    MagicPet* magicPetPtr = dynamic_cast<MagicPet*>(pet); //downcasting
    if(magicPetPtr != nullptr){
      magicPetPtr->doTrick();
    }
  }

  delete dogPtr1;

  
  for(Pet* pet : pets){      //ensure all dynamic_allocated objects from MagicPet are deleted
    if(dynamic_cast<MagicPet*>(pet)){
      delete pet;
    }
  }
  
  return 0;
}

//HOW TO RUN
// g++ mainPetAbstraction.cpp fns_PetAbstraction.cpp fns_DogAbstraction.cpp fns_CatAbstraction.cpp fns_MagicPetAbstraction.cpp fns_DogAbstraction.cpp fns_CatAbstraction.cpp fns_MagicPetAbstraction.cpp
