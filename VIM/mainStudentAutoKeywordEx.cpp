#include <iostream>
#include <vector>
#include "h_StudentAutoKeywordEx.hpp"

int main(){
    
    auto student1 = Student("Rodrigo Casio");
    student1.displayDetails();
    
    std::vector <int> marks = {89, 90, 50, 79, 99};
    for(auto mark : marks){
        std::cout << mark << std::endl;
    }

    return 0;
}
