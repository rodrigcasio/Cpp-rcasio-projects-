#include <iostream>
#include "h_StaticMemberInClassesEx.hpp"

int main(){
    
    Player player1("Rodrigo");
    Player player2("John");
    Player player3("Jasleen");
    
    //this method belongs to intances of Player class
    player1.displayPlayerInfo();

    //this static function belong to the class, not to a specific instance (Player::)
    Player::displayPlayerCount();

    return 0;
}
