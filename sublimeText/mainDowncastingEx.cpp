#include "h_CoffeesDowncastingEx.hpp"
#include <vector>

int main(){

	std::vector <Coffee*> coffeeCups = createCoffeeCups();  
	for(int i = 0; i < coffeeCups.size(); i++){
		Coffee* cup = coffeeCups[i];
		SpecialBlend* specialCup = dynamic_cast<SpecialBlend*>(cup);
		if(specialCup != nullptr){
			std::cout << "Coffee " << i << " is a special blend from " << specialCup->getLocation() << std::endl;
		}else{
			std::cout << "Coffee " << i << " is not a special blend!" << std::endl;
		}
	}
	delete cup; //good practice of memory management.

	return 0;
}

//how to run: 
//g++ mainDowncastingEx.cpp fns_CoffeeDowncastingEx.cpp 
// fns_ColdBrewDowncasting.cpp fns_EspressoDowncastingEx.cpp fns_SpecialBlendDowncastingEx.cpp -coffee
// ./coffee

//the line std::vector<Coffee*> coffeeCups = createCoffeeCups(); coffeeCups now contains the list of Coffee* pointers (poiting to Espresso SpecialBlend and ColdBrew objects)

// Coffee* cup = coffeeCups[];

// declare cup = creates a pointers variable called cup of type Coffee*. This means cup
// can hold the address of a Coffee object ()or any derived class like Espresso, SpecialBlend or ColdBrew.

//Assigns coffee[i] to cup = takes Coffee* pointer stored in coffeeCups[i] and copies it into cup. Now, cup points in the same coffee object as coffeeCups[i].

/*

for(int i = 0; i < coffeeCups.size(); i++) {
    Coffee* cup = coffeeCups[i]; // Get pointer to i-th coffee
    SpecialBlend* specialCup = dynamic_cast<SpecialBlend*>(cup); // Try to downcast
    if(specialCup != nullptr) { // If it’s a SpecialBlend
        std::cout << "Coffee " << i << " is a special blend from " << specialCup->getLocation() << std::endl;
    } else { // If it’s Espresso or ColdBrew
        std::cout << "Coffee " << i << " is not a special blend!" << std::endl;
    }
}

Step by step explanation of the for loop:

    Coffee* cup = coffeeCups[i]: cup gets the Coffee* pointer from coffeeCups[i], pointing to the i-th coffee object (e.g., an Espresso or SpecialBlend).
    SpecialBlend* specialCup = dynamic_cast<SpecialBlend*>(cup): Uses dynamic_cast to check if cup points to a SpecialBlend. If it does, specialCup is a valid SpecialBlend* pointer; if not, specialCup is nullptr.
    The if checks specialCup != nullptr to decide what to print, accessing getLocation() only for SpecialBlend objects.

Why cup Helps: It’s a clear, named variable for the current coffee, making the dynamic_cast and subsequent checks easier to read and work with.



*/





/*
cup holds the address of the i-th coffee object in the vector. For example:

    If i = 0, coffeeCups[0] is a Coffee* pointing to an Espresso(10, 5, true). After cup = coffeeCups[0], cup points to that same Espresso object.
    If i = 1, coffeeCups[1] points to a SpecialBlend(13, 9, "Ethiopia"), and cup gets that address.

Each iteration of the loop updates cup to point to the next coffee object in coffeeCups.

cup is just a temporary pointer variable that holds a copy of the Coffee* from coffeeCups[i]. 
It doesn’t create a new object or copy the coffee object—it just points to the same object in memory that coffeeCups[i] points to.
*/