#include <iostream>
#include "h_SchoolReviewAbstraction.hpp"
#include "h_TeacherReviewAbstraction.hpp"
#include "h_MathTeacherReviewAbstraction.hpp"
#include "h_ScienceTeacherReviewAbstraction.hpp"
#include "h_StudentReviewAbstraction.hpp"
//code by rcasio
int main(){

	School mySchool("University of Alberta");

	//using Teacher constructor with ptrs
	Teacher* teacher1 = new Teacher("Leonhard Euler", "Mathematics");
	Teacher* teacher2 = new Teacher("Max Planck", "Science");

	//TMath class constr
	MathTeacher* teacher3 = new MathTeacher("Carl Friedrich Gauss", 30);
	MathTeacher* teacher4 = new MathTeacher("Isaac Newton", 15);

	//TScience class constr
	ScienceTeacher* teacher5 = new ScienceTeacher("Albert Einstein","Energy");
	ScienceTeacher* teacher6 = new ScienceTeacher("Erwin Shrödinger", "Cats");

	//adding teachers: 
	mySchool.addTeacher(teacher1);
	mySchool.addTeacher(teacher2);
	mySchool.addTeacher(teacher3);
	mySchool.addTeacher(teacher4);
	mySchool.addTeacher(teacher5);
	mySchool.addTeacher(teacher6);

	std::cout << std::endl;
	std::cout << "---------- Setting classroom for teachers --------" << std::endl << std::endl;

	//assignning room:
	teacher1->setClassRoom(1002);
	teacher2->setClassRoom(1003);
	teacher3->setClassRoom(1004);
	teacher4->setClassRoom(1005);
	teacher5->setClassRoom(1006);
	teacher6->setClassRoom(1007);


	std::cout << "---------- Small talk  with teachers--------" << std::endl << std::endl;

	//chatting with teacher4
	teacher4->chat();
	teacher5->chat();

	//evaluation for teacher 5 and 6:
	teacher3->setEvaluationGrade(85);
	teacher3->setEvaluationComment("He calls himself the Prince of Mathematics!");
	teacher3->setEvaluationFeedback("He's an amazing professor! no feedback needed!");
	teacher3->addEvaluation();

	teacher4->setEvaluationGrade(100);
	teacher4->setEvaluationComment("He's wants to find the Philosopher's Stone apparently!");
	teacher4->setEvaluationFeedback("No feedback needed, he's a great professor");
	teacher4->addEvaluation(); 

	teacher5->setEvaluationGrade(100);
	teacher5->setEvaluationComment("Albert is an amazing professor!");
	teacher5->setEvaluationFeedback("He's a perfect teacher! no feedback needed!");
	teacher5->addEvaluation(); //adding eval

	teacher6->setEvaluationGrade(90);
	teacher6->setEvaluationComment("He realy likes cats!");
	teacher6->setEvaluationFeedback("Very egocentric but great teacher!");
	teacher6->addEvaluation(); 

	std::cout << "---------- Displaying Evaluations Individually --------" << std::endl << std::endl;

	//displayEvaluation for teacher 3, 4, 5 and 6:
	teacher3->displayTeacherEvaluations();
	teacher4->displayTeacherEvaluations();
	teacher5->displayTeacherEvaluations();
	teacher6->displayTeacherEvaluations();

	std::cout << std::endl;
	std::cout << "---------- Displaying All evaluations --------" << std::endl << std::endl;

	//display all evaluations:
	mySchool.displayAllEvaluations();


	std::cout << "---------- Displaying Teachers -------" << std::endl << std::endl;

	//displaying Teachers:
	mySchool.displayTeachers();

	//STUDENTS METHODS: 

	//creating new students 
	Student* student1 = new Student("Rodrigo Casio");
	Student* student2 = new Student("Rocio Garcia");
	Student* student3 = new Student("Finn Malone");
	Student* student4 = new Student("Jakob McClure");
	Student* student5 = new Student("Otis Benton");
	Student* student6 = new Student("Enrique Perry");
	Student* student7 = new Student("Priscilla Waters");
	Student* student8 = new Student("Luca Shaw");
	Student* student9 = new Student("Harmony Caldwell");
	Student* student10 = new Student("Francis Reynolds");
	Student* student11 = new Student("Maxine Wise");
	Student* student12 = new Student("Lauren Clayton");
	Student* student13 = new Student("Samson Wang");
	Student* student14 = new Student("Skyler Bond");
	Student* student15 = new Student("Lucia Trevino");
	Student* student16 = new Student("Aila Wolf");
	Student* student17 = new Student("Ray Wyaat");
	Student* student18 = new Student("Jesse McKee");
	Student* student19 = new Student("Donovan Tanner");
	Student* student20 = new Student("Tatum Ponce");

	//adding students into school
	mySchool.addStudent(student1);
	mySchool.addStudent(student2);
	mySchool.addStudent(student3);
	mySchool.addStudent(student4);
	mySchool.addStudent(student5);
	mySchool.addStudent(student6);
	mySchool.addStudent(student7);
	mySchool.addStudent(student8);
	mySchool.addStudent(student9);
	mySchool.addStudent(student10);
	mySchool.addStudent(student11);
	mySchool.addStudent(student12);
	mySchool.addStudent(student13);
	mySchool.addStudent(student14);
	mySchool.addStudent(student15);
	mySchool.addStudent(student16);
	mySchool.addStudent(student17);
	mySchool.addStudent(student18);
	mySchool.addStudent(student19);
	mySchool.addStudent(student20);

	std::cout << std::endl;
	std::cout << "---------- Students getting enrolled in their classes: --------" << std::endl << std::endl;

	//enrolling students to teachers
	mySchool.enrollStudent(student1, teacher1);
	mySchool.enrollStudent(student2, teacher2);
	mySchool.enrollStudent(student3, teacher3);
	mySchool.enrollStudent(student4, teacher4);
	mySchool.enrollStudent(student5, teacher5);
	mySchool.enrollStudent(student6, teacher6);
	mySchool.enrollStudent(student7, teacher1);
	mySchool.enrollStudent(student8, teacher2);
	mySchool.enrollStudent(student9, teacher3);
	mySchool.enrollStudent(student10, teacher4);
	mySchool.enrollStudent(student11, teacher5);
	mySchool.enrollStudent(student12, teacher6);
	mySchool.enrollStudent(student13, teacher1);
	mySchool.enrollStudent(student14, teacher2);
	mySchool.enrollStudent(student15, teacher3);
	mySchool.enrollStudent(student16, teacher4);
	mySchool.enrollStudent(student17, teacher5);
	mySchool.enrollStudent(student18, teacher6);
	mySchool.enrollStudent(student19, teacher2);
	mySchool.enrollStudent(student20, teacher2);
	
	std::cout << std::endl;
	std::cout << "---------- Displaying All Students enrollments with School method displayStudents() --------" << std::endl << std::endl;

	//display all Students
	mySchool.displayStudents();

	std::cout << std::endl;
	std::cout << "---------- Displaying 2 students enrollements with Student method displayEnrollments() --------" << std::endl << std::endl;

	student1->displayEnrollments();
	student17->displayEnrollments();


	return 0;
}



/*
g++ mainReviewAbstraction.cpp fns_SchoolReviewAbstraction.cpp fns_TeacherReviewAbstraction.cpp 
fns_MathTeacherReviewAbstraction.cpp fns_ScienceTeacherReviewAbstraction.cpp fns_StudentReviewAbstraction.cpp

*/