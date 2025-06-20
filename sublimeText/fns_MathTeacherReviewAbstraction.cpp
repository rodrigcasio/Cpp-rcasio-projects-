#include "h_MathTeacherReviewAbstraction.hpp"
#include <iostream>

MathTeacher::MathTeacher(std::string teacherName, int yearsExperience): Teacher(teacherName, "Mathematics"), yearsOfExperience(yearsExperience){

}
int MathTeacher::getYearsExperience(){
	return yearsOfExperience;
}
void MathTeacher::chat(){
	std::cout << "Hello young fella, I'm " << getName() << ". and I've been teaching " << getSubject() << " for " << getYearsExperience() << " years. Time flies!" << std::endl << std::endl;
}