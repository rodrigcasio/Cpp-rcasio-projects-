
#include <vector>

void greet(void);
void displayBoard(const std::vector<std::vector<char>>& board);
bool makeMove(std::vector<std::vector<char>>& board, int answer, char symbol);
bool checkWin(const std::vector<std::vector<char>>& board, char symbol);
bool checkDraw(const std::vector<std::vector<char>>& board);
