#include <iostream>

//using extern:
extern int score;    
extern void displayScore();   

int main(){

  std::cout << "This is an example of using a variable and a function set to extern" << std::endl
            << "This variable and function is defined in a different source file" << std::endl
            << "but they are used inside the main() function and score variable is being modified" << std::endl << std::endl;
  
  //now we make use of the variable and function:
  score = 200;                    //setting a different value of score
  displayScore();
  return 0;
}
