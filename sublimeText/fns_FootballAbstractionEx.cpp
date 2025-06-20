#include "h_FootballAbstractionEx.hpp"
#include <iostream>

Football::Football(std::string tName, int pCount): Team(tName, pCount), score(0) {}

void Football::play(){
	std::cout << "Team " << getTeamName() << " is playing football with " << getPlayerCount() << " players!" << std::endl;	
}
void Football::kick(){
	std::cout << getTeamName() << " kick the ball!" << std::endl;
}
void Football::pass(){
	std::cout << getTeamName() << " passes the ball!" << std::endl;
}

int Football::getScore(){
	return score;
}
void Football::addScore(int points){
	score += points;
}


