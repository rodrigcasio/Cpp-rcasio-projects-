#include "h_CharacterDuel.hpp"
#include "h_WarriorDuel.hpp"
#include "h_SorcererDuel.hpp"
#include <vector>
#include <iosstream>

int main(){

  //create a vector to save the characters ptrs
  std::vector <Character*> characters;
  characters.push_back(new Warrior("Alexander The Great", 100, 68));
  characters.push_back(new Sorcerer("Harry Potter", 79, "Half-blood Wizzard"));
  characters.push_back(new Warrior("Aquilles", 100, 80));
  characters.push_back(new Sorcerer("Merlin", 98, "Mage"));

  for(int i = 0; i < characters.size(); i++){
    Character* characterPtr = characters[i];                 //upcasting 
    characterPtr->displayInfo(); 
    characterPtr->attack();                                 //override in derived class methods

    Warrior* warriorPtr = dynamic_cast<Warrior*>(characterPtr);
    Sorcerer* sorcererPtr = dynamic_cast<Sorcerer*>(characterPtr);
    if(warriorPtr != nullptr){
      warriorPtr->specialAttack();
    }
    else if(sorcererPtr != nullptr){
      sorcererPtr->specialAttack();
    }else{
      std::cout << "Downcasting failed!" << std::endl;
    }
                                  //good practice of memory management
    delete characterPtr;         //deleting this pointer at the end of each iteration of the for() loop
  }                              

  return 0;
}

/*
    How to run: (depending on the name of each .cpp file)
    g++ mainDuel.cpp fns_CharacterDuel.cpp fns_WarriorDuel.cpp fns_SorcererDuel.cpp
	  ./a.out
*/
