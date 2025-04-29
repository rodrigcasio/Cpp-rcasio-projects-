#include "h_AnimalPolyReviewEx.hpp"
#include <iostream>

class Dog : public Animal{
  public:
    void makeSound() override;
    ~Dog();
};
