#include "hClassEx.hpp"
//def 1st methods:

void City::add_state(std::string new_state){
  state = new_state;
}

void City::add_population(int new_population){
  population = new_population;
}

//def 2nd methods:
std::string City::get_state(){
  return state;
}

int City::get_population(){
  return population;
}
