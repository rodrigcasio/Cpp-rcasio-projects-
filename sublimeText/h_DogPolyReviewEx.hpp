#include "h_AnimalsPolyReviewEx.hpp"
#include <iostream>

class Dog : public Animal{
public:
	void makeSound() override;
	~Dog();
};