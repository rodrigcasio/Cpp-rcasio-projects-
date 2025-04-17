#include <string>

class Student{
private: 

  std::string name;
  int age;

public:
  //constructor
  Student(std::string studentName, int studentAge);

  //getter mehtods
  std::string getName();
  int getAge();
};
