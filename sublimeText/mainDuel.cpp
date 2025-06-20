#include "h_WarriorDuel.hpp"
#include "h_SorcererDuel.hpp"
#include "h_CharacterDuel.hpp"
#include <vector>

int main(){

	std::vector <Character*> characters;
	characters.push_back(new Warrior("Alexander The Great", 100, 68));
	characters.push_back(new Sorcerer("Harry Potter", 79, "Half- blood Wizzar"));
	characters.push_back(new Warrior("Aquilles", 100, 80));
	characters.push_back(new Sorcerer("Merlin", 98, "Mage"));

	for(int i = 0; i < characters.size(); i++){
		Character* characterPtr = characters[i]; 					//upcasting
		characterPtr->displayInfo(); 
		characterPtr->attack();  									// override in derived class methods

		//downcasting characterPtr to create 2 new ptrs for each derived class to access their speed attack! 
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

		delete characterPtr; 	//good practice of memory management.
		//deletes at the end of each iteration of the for() loop.

	}		

	return 0;
}

//is it because all of them are heap allocated pointers?

/*
	How to run: (depending on the names of each .cpp file)
	g++ mainDuel.cpp fns_CharacterDuel.cpp fns_WarriorDuel.cpp fns_SorcererDuel.cpp
	./a.out
*/