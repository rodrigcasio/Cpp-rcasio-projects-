#include <iostream>

// Inserting elements into an array.
// Example inserting the vlaue of 30 in the index position 4

int main(){
    
    std::vector <int> intArray = {12, 24, 8, 7, 10, 13, 27};
    
    for(int i = 6; i >= 4; i--){                    // 4 is the position where we want to add 30
        intArray[i + 1] = intArray[i];
    }

    // adding the 30 to the index position 4
   intArray[4] = 30;
    
    for(const int& num : intArray){
        std::cout << "- " << num << std::endl;
    }
    
    std::cout << "Size: " << intArray.size() << std::endl;
}

// [12, 24, 8, 7, 10, 13, 27] original vector
// adding the number 30 to position 4 of the vector. 

// [12, 24, 8, 7, 30, 10, 13]

