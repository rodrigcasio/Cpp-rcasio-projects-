#include <iostream>
#include "hStudentGetter.hpp"

//example of a getter method: 

int main(){

  Student student("Larry Downey", 29);

  std::cout <<"Student's name: " << student.getName() << std::endl;
  std::cout <<"Student's age: " << student.getAge() << std::endl;
  
  return 0;
}
