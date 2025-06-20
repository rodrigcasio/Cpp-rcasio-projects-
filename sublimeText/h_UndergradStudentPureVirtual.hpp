#include "h_StudentPureVirtual.hpp"
#include <string>

class UndergraduateStudent : public Student{
public:

	UndergraduateStudent(std::string studentName, int studentYear);	
	void displayInfo(); //defined in this class..
	std::string getUndergradName();
	int getUndergradYear();

private:
	std::string name;
	int year;
};