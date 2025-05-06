#include <iostream>

void playerHealth(){
  static int health = 100
                      //decreasing the value of health each function call
  health -= 10;
  std::cout << "Current health: " << health << std::endl;
}

int main(){

  playerHealth();
  playerHealth();

  return 0;
}
