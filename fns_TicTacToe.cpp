#include <iostream>
#include <string>
#include <vector>
#include "hTicTacToe.hpp"

//fun def
bool checkDraw(const std::vector<std::vector<char>>& board){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(board[i][j] != 'X' && board[i][j] != 'O'){
				return false; //found a number, not a draw.
			}
		}
	}
	return true; // all cells are X or O: means its a draw.
}

bool checkWin(const std::vector<std::vector<char>>& board, char symbol){
	//cheks rows all same:
	for(int i = 0; i < 3; i++){
		if(board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol){
			return true;
		}
	}

	//check columns all same:
	for(int j = 0; j < 3; j++){
		if(board[0][j] == symbol && board[1][j] == symbol && board[2][j] == symbol){
			return true;
		}
	}

	//checks for diagonal (topleft to bottomright)
	if(board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol){
		return true;
	} 
	//checks for diagonal (bottomleft to topright)
	if(board[2][0] == symbol && board[1][1] == symbol && board[0][2] == symbol){
		return true;
	}

	return false; //if any condition is met, no winner.
	
}

bool makeMove(std::vector<std::vector<char>>& board, int answer, char symbol){
	int row, col;
	//use & on board parameter to modify it.
	//map number to board position; 
	//here we are asignning the positions of the answer of the player
	//into the board number indexes.

	if(answer == 1){
		row = 0, col = 0;
	}
	else if(answer == 4){
		row = 1, col = 0;
	}
	else if(answer == 7){
		row = 2, col = 0;
	}
	else if(answer == 2){
		row = 0, col = 1;
	}
	else if(answer == 5){
		row = 1, col = 1;
	}
	else if(answer == 8){
		row = 2, col = 1;
	}
	else if(answer == 3){
		row = 0, col = 2;
	}
	else if(answer == 6){
		row = 1, col = 2;
	}
	else if(answer == 9){
		row = 2, col = 2;
	}
	else{
		return false;
	}

		//checking if cell is empty.
		if(board[row][col] != 'X' && board[row][col] != 'O'){
			board[row][col] = symbol;
			return true;
		}
	
	return false;
	
}

void greet(void){
	std::cout <<"\n\t==========="<<"\n";
  	std::cout <<"\tTic-Tac-Toe"<<"\n";
  	std::cout <<"\t==========="<<"\n";
  	std::cout <<"Instruction: the first one to make  a line or diagonal their respective"
  			  <<"\n"<<"symbol , wins!"<<"\n";
}

void displayBoard(const std::vector<std::vector<char>>& board){
	std::cout << "\n";
    std::cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    std::cout << "--+---+--\n";
    std::cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    std::cout << "--+---+--\n";
    std::cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n\n";
}
