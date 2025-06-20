#include <iostream>

class Student{
    public:
        Student(std::string studentName);
        void displayDetails() const;

    private:
        std::string name;
        
};
