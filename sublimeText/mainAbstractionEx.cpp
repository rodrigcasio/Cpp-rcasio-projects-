#include "h_FootballAbstractionEx.hpp"
#include <iostream>

int main(){

	Football myTeam("Greenbay", 49);
	myTeam.play();
	myTeam.kick();
	myTeam.pass();

	myTeam.addScore(1);

	std::cout << "Score for " << myTeam.getTeamName() << " scoring a total of " 
			  << myTeam.getScore() << " points!" << std::endl;
 

	return 0;
}