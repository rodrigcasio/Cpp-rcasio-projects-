#include <string>
#include <vector>
#include "h_TeacherReviewAbstraction.hpp"
#include "h_StudentReviewAbstraction.hpp"

class School{
public:
	School(std::string schoolName);
	std::string getSchoolName();

	void addTeacher(Teacher* newTeacher); 					
	void displayTeachers();

	void addStudent(Student* student);	
  	void displayStudents();
  	void enrollStudent(Student* student, Teacher* teacher);

	void displayAllEvaluations();

	~School(); //destructor for clean up
	

private:
	std::string name;
	std::vector<Teacher*> teachers; 
	std::vector<Student*> students;
};

/*
note
	Using <Teacher> creates a copy of the object as Teacher slicing off derived class data 
	(yearsOfExperience for MathTeacher, favTopic for ScienceTeacher) 
	[this is object slicing].
	better to use <Teacher*>
*/