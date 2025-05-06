#include <iostream>

int main(){
  //example of a block scope

  int stotalScore = 20;
{
  std::cout << "Total score: " << totalScore << std::endl
  
  int totalScore = 10;
  std::cout << "Total Score: " << totalScore << std::endl;
}
  
  return 0;
}
