#include <iostream>
#include <string>
#include "hUfoGame.hpp"
#include <vector>


int main(){

	std::string codeword = "codecademy";
	std::string answer = "----------";
	int misses = 0;

	std::vector <char> incorrect;
	bool guess = false; // tracker

	char letter;

//--- Game start:
	greet();

	while(answer != codeword && misses < 7){ //opportunities for player.
		display_misses(misses); // starts turn shows alien spaceship.
		display_status(incorrect, answer);
		std::cout <<"\nPlease enter your guess: ";
		std::cin >> letter;
		for(int i = 0; i < codeword.length(); i++){ //loops through codeword..
			if(letter == codeword[i]){ //if guess == one letter of codeword ..
				answer[i] = letter;
				guess = true;
			}
		}

		//condition if guess right or not... 
		if(guess){ //if guess is true.
			std::cout <<"\n\t=== Correct!===" <<"\n";
		}
		else{
			std::cout <<"\n\t==== Incorrect! The tractor beam pulls the person in further ====" <<"\n";
			misses++; // if the player misses..
		}
		guess = false; //reset for each try, changes true if player guesses right.
	}

	end_game(answer, codeword); //end game 

	return 0;
}
