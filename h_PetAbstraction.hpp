#ifndef PET_ABSTRACTION_HPP
#define PET_ABSTRACTION_HPP
#include <string>

class Pet{
  public:
    void setPetName(std::string petName);
    std::string getPetName();
    void setPetAge();
    virtual void eat();
    virtual void makeSound() = 0; //pure virtual function

  private:
    std::string name;
    int age;
};

#endif
