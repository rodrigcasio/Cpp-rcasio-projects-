#include <string>
#include "hBleep.hpp"

//fun def:
void asterisks(std::string word, std::string &text, int i){
	for(int n = 0; n < word.length(); n++){
		if(i + n < text.length()){ // making sure we dont go over the amount of characters of text
			text[i+n] = '*'; //same starting point of text i from the outer loop of bleep + the amount of characters of the word.
		}
	}
}


void bleep(std::string word, std::string &text){ 	
	for(int i = 0; i <= text.length() - word.length(); i++){ //loops through the text
		int matchCounter = 0; //create a math counter

		for(int j = 0; j < word.length(); j++){ 
			if(i + j >= text.length() || text[i+j] != word[j]){ //check if the addition of i + j is greater than total amount, then compares the characters.
				break; //if condtions are true, break;
			}
			matchCounter++; 
		}
		if(matchCounter == word.length()){ //if match == to 8 characters, (8  charaters = broccoli)..
			asterisks(word, text, i);
		}
	}

}