#include <iostream>

int main() {
  
// 1 year old dog is = 10.5 human years 

  
  int dog_age = 7;    // the first two years of a dog's life count as 21 human years.

  int early_years = 21;
  int later_years;
  int human_years; 

/*
  Each following year counts as 4 human years, so the equation looks like this: 
  later_years=(dog_age−2)∗4

  Give the variable later_years a value of dog_age minus 2, and then multiply by 4.
*/ 

  later_years = (dog_age - 2) * 4; 
  human_years = early_years + later_years; //here we are adding up the value of 21 + later_years. 

  std::cout <<"My name is Bonny! Ruf ruff, I am " << human_years <<" year old in human years"<<'\n';

  return 0;
}
