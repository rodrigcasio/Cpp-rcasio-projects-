//interface class called Team:
#include <string>

class Team{

public:
	Team(std::string tName, int pCount): teamName(tName), playerCount(pCount){}
	virtual void play() = 0;

	std::string getTeamName(){ return teamName;}
	int getPlayerCount(){return playerCount;}

protected:
	std::string teamName;
	int playerCount;
};