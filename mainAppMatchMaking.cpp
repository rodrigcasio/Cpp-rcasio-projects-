#include <iostream>
#include "hAppMatchMaking.hpp"

int main(){

  //1st object ("person profile") with constructor
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  //using method of adding hobbies into the vector string
  sam.add_hobby("listening to audiobook and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction nobel");
  sam.add_hobby("reading advice columns");

  //method 2: returning the profile attributes:
  std::cout << sam.view_profile() <<"\n";

  //2nd Object: ("person profile") 
  Profile rod("Rodrigo Casio", 25, "Jalisco", "Mexico", "he/him");
  rod.add_hobby("Listening music like: Skrillex, Avicii");
  rod.add_hobby("Practicing and creating C++ programs in Codecademy and LeetCode");
  rod.add_hobby("Playing basketball");
  rod.add_hobby("Hanging out with my friends and get drunk");
  std::cout << rod.view_profile() <<"\n";

  return 0;
}
