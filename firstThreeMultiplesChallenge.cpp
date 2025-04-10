#include <iostream>
#include <vector>

/*
Write a function named first_three_multiples() that has:

    An int parameter named num.

The function should return an std::vector of the first three multiples of num in ascending order.

For example, first_three_multiples(7) should return a vector with 7, 14, and 21.

*/

//fun dec
std::vector <int> first_three_multiples(int num);

int main(){
  
}

std::vector <int> first_three_multiples(int num){
  std::vector <int> first3multiples;
  for(int i = 0; i <= 3; i++){
    first3multiples.push_back(num * i);
  }
  return first3Multiples;
}
