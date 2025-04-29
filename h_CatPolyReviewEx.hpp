#include "h_AnimalPolyReviewEx.hpp"
#include <iostream>

class Cat : public Animal{
  public:
    void makeSound() override;
    ~Cat();
};
