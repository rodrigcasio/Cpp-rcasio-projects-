#include <iostream>
#include "hStudentID.hpp"

int main(){

  //1st object ("student ID"):
  StudentID rodrigo(10023, "Rodrigo Casio Garcia", "Computer Science", "University Of Alberta", 2024, true);

  //using method to add hobbies:
  rodrigo.add_hobby("Practice C++");
  rodrigo.add_hobby("watching Veritasium videos on Youtube");
  rodrigo.add_hobby("play the piano and guitar");

  //using 2nd method to view student ID:
  std::cout << rodrigo.view_ID() <<"\n";
  
  return 0;
}
