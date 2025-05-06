#include "h_StudentAutoKeyword.hpp"
#include <iostream>

Student::Student(std::string studentName): name(studentName){

}
void Student::displayDetails() const{
  std::cout << "Student name: " << name << std::endl;
}
