#include <string>

//constructor def:
Student::Student(std::string studentName, int studentAge): name(studentName), age(studentAge) {}

//getter methods def:
std::string Student::getName(){
  return name;
}

int Student::getAge(){
  return age;
}
