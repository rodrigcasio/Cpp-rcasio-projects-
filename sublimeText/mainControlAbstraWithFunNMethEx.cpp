#include "iostream"
#include "h_GradestatsControlAbstraEx.hpp"

int main(){

	std::vector <int> grades = {100, 87, 45, 75, 68, 94, 90};

	GradeStats studentGrades(grades);

	double avg = studentGrades.average();
	double stdDev = studentGrades.standardDeviation();
	double midPoint = studentGrades.median();

	std::cout << "The average grade is: " << avg << std::endl;
	std::cout << "The standard deviation is: " << stdDev << std::endl;
	std::cout << "The mid median is: " << midPoint << std::endl;

	return 0;
}