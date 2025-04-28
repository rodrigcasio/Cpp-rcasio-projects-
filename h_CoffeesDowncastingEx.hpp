#include "h_CoffeeDowncastingEx.hpp"
#include "h_ColdBrewDowncastingEx.hpp"
#include "h_EspressoDowncastingEx.hpp"
#include "h_SpecialBlendDowncastingEx.hpp"
#include <vector>

std::vector <Coffee*> createCoffeeCups(){ //normal function..
  std::vector <Coffee*> coffees;
    coffees.push_back(new Espresso(10, 5, true));
    coffees.push_back(new SpecialBlend(13, 9, "Ethiopia"));
    coffees.push_back(new ColdBrew(7, 3));
    coffees.push_back(new SpecialBlend(8, 4, "Brazil"));
    coffees.push_back(new Espresso(12, 7, false));
    coffees.push_back(new ColdBrew(15, 11));
    coffees.push_back(new Espresso(9, 6, true));
    coffees.push_back(new SpecialBlend(6, 2, "Kenya");
    coffees.push_back(new ColdBrew(14, 7));
    coffees.push_back(new SpecialBlend(11, 5, "Colombia"));
    coffees.push_back(new Espresso(8, 3, false));
    coffees.push_back(new ColdBrew(10, 6));
    coffees.push_back(new SpecialBlend(12, 10, "Morocco"));
    coffees.push_back(new Espresso(6, 6, true));
    coffees.push_back(new ColdBrew(10, 6));
    coffees.push_back(new Espresso(13, 8, false));
    coffees.push_back(new SpecialBlend(7, 2, "Guatemala"));
    coffees.push_back(new ColdBrew(5, 1));
    coffees.push_back(new Espresso(14, 9, true));
    coffees.push_back(new ColdBrew(8, 5));
    coffees.push_back(new SpecialBlend(10, 6, "Mexico!"));
    coffees.push_back(new Espresso(11, 4, false));
    coffees.push_back(new ColdBrew(12, 9));
    coffees.push_back(new SpecialBlend(9, 3, "Peru"));
    coffees.push_back(new ColdBrew(7, 2));

  return coffees;
}
