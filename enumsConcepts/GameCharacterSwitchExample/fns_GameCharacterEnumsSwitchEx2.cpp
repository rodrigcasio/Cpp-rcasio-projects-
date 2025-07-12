#include "h_GameCharacterEnumsSwitchEx2.hpp"
#include <iostream>

void performAction(CharacterType action){
    switch(action){
        case CharacterType::WARRIOR:
            std::cout << "The Warrior swings their sword!" << std::endl;
            break;
        case CharacterType::MAGE:
            std::cout << "The Mage casts fireball!" << std::endl;
            break;
        case CharacterType::ROGUE:
            std::cout << "The Rogue stealthily betrays!" << std::endl;
            break;
        case CharacterType::DEMON:
            std::cout << "The Demon starts turning the crosses upside down!" << std::endl;
            break;
        case CharacterType::THIEF:
            std::cout << "The Thief steals all the gold!" << std::endl;
            break;
        default:
            std::cout << "Unknown Character!" << std::endl;
    }
}
