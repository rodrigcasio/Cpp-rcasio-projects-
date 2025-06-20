#include <iostream>
#include <vector>
#include <string>

int main(){

  //by rodcasio

  //whale, whale, whale..
  //what have we got here...


  std::string input = "I love programming C++, I'm excited to learn more and master it";
  std::vector <char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  std::vector <char> result;  //where we store only the vowels of the input.

  for(int i = 0; i < input.size(); i++){
    for(int j = 0; j < vowels.size(); j++){
      if(input[i] == vowels[j]){
        result.push_back(input[i]);
        if(input[i] == 'e' || input[i] == 'u'){
          result.push_back(input[i]);
        }
      }
    }
  }
  for(int i = 0; i < result.size(); i++){
    std::cout << result[i];

  }




  return 0;
}