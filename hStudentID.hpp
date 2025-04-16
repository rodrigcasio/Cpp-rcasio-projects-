#include <string>
#include <vector>
#include <stdbool.h>

class StudentID{
  int ID;
  std::string nameStudent;
  std::string major;
  std::string universityName;
  int yearStart;
  bool status;
  std::string vector <std::string> hobbies;

public:
  //constructor:
  StudentID(int new_ID, std::string new_nameStudent, std::string new_major, std::string new_universityName,
            int new_yearStart, bool new_status = false);

  //method 1:
  void add_hobby(std::string new_hobby);

  //method 2: view ID:
  std::string view_ID();
};

