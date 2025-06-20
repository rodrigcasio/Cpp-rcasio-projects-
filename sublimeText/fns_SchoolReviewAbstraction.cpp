#include "h_SchoolReviewAbstraction.hpp"
#include <iostream>

School::School(std::string schoolName): name(schoolName){}

std::string School::getSchoolName(){
	return name;
}

//teachers----
void School::addTeacher(Teacher* newTeacher){
	teachers.push_back(newTeacher);
}

void School::displayTeachers(){
	std::cout << "Teachers in " << getSchoolName() << ":" << std::endl;

	for(Teacher* teacher : teachers){ //change to ptr
		std::cout << "Name: " << teacher->getName() << ", Subject: " << teacher->getSubject() << std::endl;
	}
}

//students---
void School::addStudent(Student* newStudent){
	students.push_back(newStudent);
}
void School::enrollStudent(Student* student, Teacher* teacher){
	student->enrollInClass(teacher); //uses method enrollClass() defined in Student class
}
void School::displayStudents(){
	std::cout << "Students in " << getSchoolName() << ":" << std::endl;
	if(students.empty()){
		std::cout << "No students enrolled" << std::endl;
	}else{
		for(Student* student : students){
		student->displayEnrollments(); //method in displayEnrollments() defined in Student class
		}
	}
}

//evaluation all evaluations list of the school:
void School::displayAllEvaluations(){
	std::cout << "--All Evaluations at " << getSchoolName() << "-- :" << std::endl;
	for(Teacher* teacher : teachers){
		std::cout << "Teacher: " << teacher->getName() << std::endl;
		teacher->displayTeacherEvaluations(false); 					//avoids header for each teacher.
		std::cout << std::endl;
	}
}

//destructor deletes ptrs of teachers and students.
School::~School(){					
	for(Teacher* teacher : teachers){
		delete teacher;
	}
	for(Student* student : students){
		delete student;
	}
}

