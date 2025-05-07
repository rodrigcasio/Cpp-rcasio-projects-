#include <iostream>
#include "h_StaticMemberInClassesEx.hpp"

int Player::playerCount = 0;                //def of static memeber variable

Player::Player(std::string playerName): name(playerName) {
  playerCount++;
}
void Player::setPlayerName(std::string newName){
  name = newName;
}
std::string Player::getPlayerName(){
  return name;
}

void Player::displayPlayerInfo(){
  std::cout << "Player name: " << getPlayerName() << std::endl;
}
void Player::displayPlayerCount(){
  std::cout << "Player count: " << playerCount << std::endl;
}
