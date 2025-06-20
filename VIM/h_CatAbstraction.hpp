#ifndef CAT_ABSTRACTION_HPP
#define CAT_ABSTRACTION_HPP
#include "h_PetAbstraction.hpp"

class Cat : public Pet{
    public:
        void makeSound() override;
};

#endif
