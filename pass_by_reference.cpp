#include <iostream>

//fun decl:
int triple(int &i);

int main(){

  int num = 1;

  std::cout << triple(num) <<"\n";
  std::cout << triple(num) <<"\n";

}

//fun decl
int triple(int &i){
  i = i * 3;
  return i;
}

/*
  only int i in function (pass-by-value):
  Output: 3
          3

  with &i in function (pass-by-reference):
  output: 3
          9
*/
