#include "h_StudentReviewAbstraction.hpp"
#include <iostream>

Student::Student(std::string studentName): name(studentName) {

}
std::string Student::getStudentName(){
	return name;
}

void Student::enrollInClass(Teacher* teacher){  // linking student to teacher's class
	enrolledTeachers.push_back(teacher);
	std::cout << getStudentName() << " enrolled in " << teacher->getSubject() << " with " << teacher->getName(); //confirmation of teacher enrolled 
	if(teacher->getClassRoomNumber() != 0){
		std::cout << " (Room " << teacher->getClassRoomNumber() << ")";
	}
	std::cout << std::endl << std::endl; //if it is 0: still space...
}
void Student::displayEnrollments(){   	//display enrollment of 1 student
	if(enrolledTeachers.empty()){
		std::cout << "- " << getStudentName() << ": Not enrolled in any classes" << std::endl;
	}else{
		std::cout << "- " << getStudentName() << ": Enrolled in ";
		for(size_t i = 0; i < enrolledTeachers.size(); i++){
			std::cout << enrolledTeachers[i]->getSubject() << " (" << enrolledTeachers[i]->getName();
			if(enrolledTeachers[i]->getClassRoomNumber() != 0){
				std::cout << ", Room " << enrolledTeachers[i]->getClassRoomNumber();
			}
			std::cout << ")";
			if(i < enrolledTeachers.size() - 1){
				std::cout << ", ";
			}
		}
		std::cout << std::endl << std::endl;
	}
}


//destructor
Student::~Student(){
	//no need to delete anything, enrolledTeachers ptrs are owned by School class
}