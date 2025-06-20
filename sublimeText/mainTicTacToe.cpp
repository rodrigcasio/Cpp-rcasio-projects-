#include <iostream>
#include <string>
#include <vector>
#include "hTicTacToe.hpp"

//rcasio code

int main(){	

	char playAgain; 
	do{
		//board 
		std::vector<std::vector<char>> board(3, std::vector<char>(3));
		board[0][0] = '1';	board [0][1] = '2';	board[0][2] = '3';
		board[1][0] = '4';	board [1][1] = '5';	board[1][2] = '6';
		board[2][0] = '7';	board [2][1] = '8';	board[2][2] = '9';

		//varibales:
		char currentPlayer = 'X';
		
		bool gameEnded = false;
		int answer;

		//start game:
		greet();
		while(!gameEnded){
			displayBoard(board);

			//get input
			std::cout <<"Player "<< currentPlayer <<", enter a number (1-9): ";
			std::cin >> answer;

			//validate and process move:
			if(answer >= 1 && answer <= 9){
				if(makeMove(board, answer, currentPlayer)){ //checks move
					if(checkWin(board, currentPlayer)){ //if win 
						displayBoard(board);
						std::cout <<"Player "<< currentPlayer <<" wins!"<<"\n";
						gameEnded = true;
					}
					else if(checkDraw(board)){ //if draw..
						displayBoard(board);
						std::cout <<"It's a draw!\n";
						gameEnded = true;
					}
					else{ //switches to the next player (after no win or no draw)
						currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
					}
				}
				else{ // if this shows, it goes back to input, gameEnded still false
					std::cout <<"Invalid move! Try again" <<"\n";
				}

			}
			else{ // if this shows, it goes back to input, gameEnded still false
				std::cout <<"Please enter a number between 1 and 9." <<"\n";
			}

		}

			//Replay option:
			std::cout <<"Play again? (y/n): ";
			std::cin >> playAgain;
	}
	while(playAgain == 'y' || playAgain == 'Y');

	std::cout<< "Thanks for playing my game!"<<"\n";
	return 0;
}
/*
	flow of the game:

	1. currentPlayer is 'X', player enters 5, makeMove() places 'X' in the center
	2. checkWin() is false (no three 'X's)
	3. checkDraw() is false (board isn't full)
	4. else runs: currentPlayer == 'X' is true, so currentPlayer becomes 'O'.
	5. Loop continues, now asking "Player O, enter a number (1-9):"
*/



