#include <string>

class Student{
public:

	virtual void displayInfo() = 0; //pure virtual function
	std::string getStudentId();
	void setStudentId(std::string newId);

protected:
	std::string id;

};