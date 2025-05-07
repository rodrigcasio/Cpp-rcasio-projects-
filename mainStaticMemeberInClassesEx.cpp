#include <iostream>
#include "h_StaticMemberInClassesEx.hpp"

int main(){

  Player player1("Rodrigo");
  Player player2("John");
  Player player3("Jasleen");

  //method that belongs to intances of Player class
  player1.displayPlayerInfo();

  //this function belong to the class, not to a specific instance.
  Player::displayPlayerCount(); 
  
  
  return 0;
}
