#ifndef MAGIC_PET_ABSTRACTION_HPP
#define MAGIC_PET_ABSTRACTION_HPP
#include "h_PetAbstraction.hpp"
#include "h_SpecialAbiAbstraction.hpp"

class MagicPet: public SpecialAbility, public Pet{
  public:
    void makeSound() override;
    void doTrick() override;      //overriding the pure virtual function of the interface
};

#endif
