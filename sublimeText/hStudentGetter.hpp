#include <string>


class Student{

	std::string name;
	int age;

public:
	//constructor 
	Student(std::string studentName, int studentAge);

	//getter methods:
	std::string getName();
	int getAge();
};
