#include "h_AnimalsPolyReviewEx.hpp"
#include <iostream>

class Cat : public Animal{
public:
	void makeSound() override;
	~Cat();
};