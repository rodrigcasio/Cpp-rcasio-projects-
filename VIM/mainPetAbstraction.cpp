#include <iostream>
#include "h_PetAbstraction.hpp"
#include "h_DogAbstracion.hpp"
#include "h_CatAbstraction.hpp"
#include "h_MagicPetAbstraction.hpp"
#include <vector>

int main(){
   
    Dog myDog;
    Cat myCat;
    
    //assign names of objects: (stack-allocated objects)
    myDog.setPetName("Kiara");
    myCat.setPetName("Garfiel");

    // dynamically allocated using new: (heap-allocated objects)   
    Pet* dogPtr1 = new Dog();
    dogPtr1->setPetName("Bonny");

    //setting vector to add objectsto Pet class
    std::vector <Pet*> pets;

    //using stack-allocated objects and storing their address (pointers)
    pets.push_back(&myDog);             //pointers to stack-allocated objects
    pets.push_back(&myCat);
    pets.push_back(dogPtr1);            //pointers to heap-allocated objects

    
    //loop through the vector and call method makeSound() on each pet.
    for(Pet* pet : pets){
        pet->makeSound();
    }

    //creating object of class MagicPet 
    pets.push_back(new MagicPet());         //or Pet* myMagicPetPtr = new MagicPet();
    
    for(Pet* pet : pets){
        MagicPet* magicPetPtr =dynamic_cast<MagicPet*>(pet);
        if(magicPetPtr != nullptr){
            magicPetPtr->doTrick();
        }
    }

    delete dogPtr1;

    //Ensure all dynamic_allocated objects from MagicPet are deleted 
    for(Pet* pet : pets){
        if(dynamic_cast<MagicPet*>(pet)){
            delete pet;
        }
    }


   return 0;
}

//HOW TO RUN 
// g++ mainPetAbstraction.cpp fns_PetAbstraction.cpp fns_DogAbstraction.cpp fns_CatAbstraction.cpp fns_MagicPetAbstraction.cpp fns_DogAbstraction.cpp fns_CatAbstraction.cpp fns_MagicPetAbstraction.cpp

/*
 *  Last loop approach:
 *  KEy points:
 *      this approach works for any number of heap-allocated Magic-Pet object.
 *      Only delete pointers created with new.
 *      never delete stack-allocated pointers.
 *
 *     This way, you can use all your MagicPet objects in the first loop, and safely 
 *     delete them at the end
 *
 * */
