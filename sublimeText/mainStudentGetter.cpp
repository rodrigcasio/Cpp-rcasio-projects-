#include <iostream>
#include "hStudentGetter.hpp"

int main(){

	Student student("Larry Downey", 25);

	std::cout <<"Student's name: "<< student.getName() << std::endl;
	std::cout <<"Student's age: "<< student.getAge() << std::endl;

	return 0;
}