#include <iostream>
#include "h_GameCharacterEnumsSwitchEx2.hpp"

int main(){
    
    CharacterType mageRod = CharacterType::MAGE;
    CharacterType thiefTuti = CharacterType::THIEF;

    performAction(mageRod);
    performAction(thiefTuti);

    return 0;
};