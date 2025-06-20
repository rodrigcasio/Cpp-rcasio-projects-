#include <iostream>
#include <vector>

/*
Write a function named first_three_multiples() that has:

    An int parameter named num.

The function should return an std::vector of the first three multiples of num in ascending order.

For example, first_three_multiples(7) should return a vector with 7, 14, and 21.

*/


// decl:
std::vector <int> first_three_multiples(int  num);

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}

std::vector <int> first_three_multiples(int num){
  std::vector <int> first3Multiples;
  for(int i = 1; i <= 3; i++){
    first3Multiples.push_back(num * i);
  }
  return first3Multiples;
}