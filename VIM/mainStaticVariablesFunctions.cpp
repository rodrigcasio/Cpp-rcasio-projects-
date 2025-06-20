#include <iostream>

//example of function
void playerHealth(){
    static int health = 100;
                    //decreasing the value of health every fucntion calls
    health -= 10;    
    std::cout << "Current health: " << health << std::endl;
}

int main(){
    
    playerHealth();
    playerHealth();

    return 0;
}
