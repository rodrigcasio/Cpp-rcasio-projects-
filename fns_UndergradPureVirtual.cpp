#include "h_UndergradStudentPureVirtual.hpp"
#include <string>
#include <iostream>

UndergraduateStudent::UndergraduateStudent(std::string studentName, int studentYear): name(studentName), year(studentYear){}

std::string UndergraduateStudent::getUndergradName(){
  return name;
}
int UndergraduateStudent::getUndergradYear(){
  return year;
}

void UndergraduateStudent::displayInfo(){
  std::cout << "Undergraduate Student: " << getUndergradName() << ", Year: " << getUndergradYear() << std::endl;
}
