#include <iostream>
#include <vector>
#include <string>

int main(){
//by rodcasio 

    // whale whale whale,
    // what do we got here.

    std::string input ="turpentine and turtles";

    std::vector <char> vowels ={'a', 'e', 'i', 'o', 'u'};
    std::vector <char> result;

    for(int i = 0; i < input.size(); i++){
        for(int j = 0; j < vowels.size(); j++){
                if(input[i] == vowels[j]){
                   result.push_back(input[i]);
                    if(input[i] == 'e' || input [i] == 'u'){
                        result.push_back(input[i]);
                    }
                }
        }
    }

    for(int k = 0; k < result.size(); k++){
        std::cout << result[k];
    }


// by rodcasio

  //Whale, whale, whale..
  // What have we got here?
  
/*

  std::string input="Turpentine and turtles";

  std::vector <char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  std::vector <char> result; // where we store only the vowels 

  for(int i = 0; i < input.size(); i++){
    for(int j = 0; j < vowels.size(); j++){
      if(input[i] == vowels[j]){ //if the vowels match 
        result.push_back(input[i]); // we save the vowel inside the vector result.
        if(input[i] == 'e' || input[i] == 'u'){ 
          result.push_back(input[i]); //this allows to double the e's and u's.
        }
      }
    }
  }
  for(int k; k < result.size(); k++){
    std::cout << result[k];
  }
  */
}
