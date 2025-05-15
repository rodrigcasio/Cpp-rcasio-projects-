#ifndef DOG_ABSTRACTION_HPP
#define DOG_ABSTRACTION_HPP
#include "h_PetAbstraction.hpp"

class Dog : public Pet{
  public:
    void makeSound() override;

  private: 
};

#endif
