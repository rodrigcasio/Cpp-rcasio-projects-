#ifndef PET_ABSTRACTION_HPP
#define PET_ABSTRACTION_HPP
#include <string>

class Pet{
    public:
        void setPetName(std::string petName);
        std::string getPetName();
        void setPetAge(int petAge);
        int getPetAge();
        virtual void eat();
        virtual void makeSound() = 0;
    
    private:
        std::string name;
        int age;
};

#endif
