#include "h_StudentPureVirtual.hpp"
#include <string>

void Student::setStudentId(std::string newId){
  id = newId;
}
std::string Student::getStudentId(){
  return id;
}

