#include "h_TeamAbstractionEx.hpp"
#include <iostream>

class Football: public Team{
public:
	Football(std::string tName, int pCount);

	void play() override;

	void kick();
	void pass();
	void addScore(int points);

	int getScore();

private:
	int score;

};