#ifndef STUDENT_REVIEW_ABSTRACTION_HPP
#define STUDENT_REVIEW_ABSTRACTION_HPP

#include <string>
#include <vector>
#include "h_TeacherReviewAbstraction.hpp"


class Student{
public:
	Student(std::string studentName);
	std::string getStudentName();
	void enrollInClass(Teacher* teacher); 
	void displayEnrollments();
	~Student();

private:
	std::string name;
	std::vector <Teacher*> enrolledTeachers;
};

#endif 