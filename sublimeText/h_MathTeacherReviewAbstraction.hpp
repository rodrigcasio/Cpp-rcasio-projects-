#ifndef MATH_TEACHER_REVIEW_ABSTRACTION_HPP
#define MATH_TEACHER_REVIEW_ABSTRACTION_HPP

#include "h_TeacherReviewAbstraction.hpp"
#include <string>

class MathTeacher: public Teacher{
public:
	MathTeacher(std::string teacherName, int yearsExperience);
	int getYearsExperience();
	void chat() override; 

private:
	int yearsOfExperience;

};

#endif