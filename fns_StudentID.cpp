#include "hStudent.hpp"
#include <vector>
#include <string>

//constructor def:
StudentID::StudentID(int new_ID, std::string new_nameStudent, std::string new_major, std::string new_universityName,
                     int new_yearStart, bool new_status): 
                     ID(new_ID), nameStudent(new_nameStudent), nameUniversity(new_nameUniversity),
                     yearStart(new_yearStart), status(new_status){}

//1st method def:
void StundentID::add_hobby(std::string new_hobby){
  if(!new_hobby.empty()){
    hobbies.push_back(new_hobby);
  }
}

//2nd method def:
std::string StudentID::view_ID(){
  std::string studentID = "ID: " + std::to_string(ID);
  studentID += "\nName: " + nameStudent;
  studentID += "\nMajor: " + major;
  studentID += "\nUniversity Name: " universityName;
  studentID += "\nYear Started: " + std::to_string(yearStart);
  std::strng status_string = "Inactive"
  if(status != false){        //checks status of student.
    status_string = "Active";
  }
  studentID += "\nStatus: " + status_string;

  std::string hobby_string = "\nHobbies: \n"; //adding hobbies.
  for(std::string hobby : hobbies){          //loop to add hobbies into string hobby.
    hobby_string += " * " hobby "\n";  
  }

  return studentID + hobby_string;
}

                                                          
