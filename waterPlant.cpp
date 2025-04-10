#include <iostream>
/*
Define a function is_palindrome() that takes:

    An std::string parameter text.

The function should return:

    true if text is a palindrome.
    false if text is not a palindrome.

(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.)

We will not test for edge cases such as capitalization or spaces.

*/

//fun dec
std::string needs_water(int days, bool is_succulent);

int main(){
  std::cout << needs_water(13, true) << "\n";
}
//fun def
std::string needs_water(int days, bool is_succulent){
  if(is_succulent ==false && days > 3){
    return "Time to water the plant.";
  }
  else if(is_succulent && days <= 12){
    return "Don't water the plant";
  }
  else if(is_succulent && days >= 13){
    return "Go ahead and give the plant a little water.";
  }
  else{
    return "Don't water the plant";
  }
}

