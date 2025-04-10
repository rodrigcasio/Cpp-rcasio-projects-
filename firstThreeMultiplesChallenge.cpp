#include <iostream>
#include <vector>

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
