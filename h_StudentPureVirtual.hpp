#include <string>
#include <iostream>

class Student{
  public:
    virtual void displayInfo() = 0; //pure virtual function
    void setStudentId(std::string newId);
    std::string getStudentId();

  protected:
    std::string id;
};
