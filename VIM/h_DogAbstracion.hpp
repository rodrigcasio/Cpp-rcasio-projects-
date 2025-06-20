#ifndef DOG_ABSTRACION_HPP
#define DOG_ABSTRACION_HPP
#include "h_PetAbstraction.hpp"


class Dog: public Pet{
    public:
        void makeSound() override;
    private:
        
};

#endif
