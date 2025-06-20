#include <iostream>
#include "hStudentID.hpp"

int main(){

	//1st object ("student ID") using constructor:
	StudentID rodrigo(10032,"Rodrigo Casio Garcia", "Computer Science", "University of Alberta", 2024, true);

	rodrigo.add_hobby("Practice C++");
	rodrigo.add_hobby("watching Veritasium videos on Youtube");
	rodrigo.add_hobby("play the piano and guitar");

	std::cout << rodrigo.view_ID() <<"\n";

	return 0;
}