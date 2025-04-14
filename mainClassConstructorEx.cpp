#include <iostream>
#include "hClassConstructoEx.hpp"

int main(){

  Song back_to_black("Back to Black", "Amy Winehouse");

  std::cout << back_to_black.get_title() <<"\n" 
            << back_to_black.get_artist() <<"\n";
  
  return 0;
}
