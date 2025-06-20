#include <iostream>

//the extern keyword tells the compiler score and displayScore() 
//are defined in another file but will be used in mainExternLinkage.cpp 

extern int score;
extern void displayScore();


int main(){
    
    std::cout << "This is an example of using a variable and a function set to extern" << std::endl 
              << "This variables are defined in a different source file" << std::endl 
              << "but they are used inside the main() function and score variable is being modified" << std::endl << std::endl; 
    
    score = 200;
    displayScore();

    return 0;
}
