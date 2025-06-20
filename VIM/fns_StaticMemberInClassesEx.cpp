#include <iostream>
#include "h_StaticMemberInClassesEx.hpp"

//definition of static memeber variable:
int Player::playerCount = 0;

Player::Player(std::string playerName): name(playerName){
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

void Player::displayPlayerCount(){             //definition of static function
    std::cout << "Player Count: " << playerCount << std::endl;
}
