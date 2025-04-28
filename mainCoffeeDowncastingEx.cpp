#include "h_CoffeesDowncastingEx.hpp"
#include <iostream>
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

  delete cup;
  
  return 0;
}

/*
  How to run:
  g++ mainCoffeeDowncasting.cpp fns_ColdBrewDowncasting.cpp fns_EspressoDowncastingEx.cpp 
  fns_SpecialBlendDowncastingEx.cpp -o coffee
  ./coffee
*/

//explanation:
/*
//the line std::vector<Coffee*> coffeeCups = createCoffeeCups(); coffeeCups now contains the list of Coffee* pointers (poiting to Espresso SpecialBlend and ColdBrew objects)

// Coffee* cup = coffeeCups[];

// declare cup = creates a pointers variable called cup of type Coffee*. This means cup
// can hold the address of a Coffee object ()or any derived class like Espresso, SpecialBlend or ColdBrew.

//Assigns coffee[i] to cup = takes Coffee* pointer stored in coffeeCups[i] and copies it into cup. Now, cup points in the same coffee object as coffeeCups[i].

*/
