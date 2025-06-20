#include <iostream>

int main(){
    
    //example of a block scope.
    
    int totalScore = 20;
    {
        std::cout << "Total Score: " << totalScore << std::endl;

        int totalScore = 10;
        std::cout << "Total Score: " << totalScore << std::endl;
    }

    return 0;
}

