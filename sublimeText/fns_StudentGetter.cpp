#include "hStudentGetter.hpp"
#include <string>

//costructor def:
Student::Student(std::string studentName, int studentAge): name(studentName), age(studentAge) {}

//getter methods:
std::string Student::getName(){
	return name;
}

int Student::getAge(){
	return age;
}