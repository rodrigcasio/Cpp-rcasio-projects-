#include <string>

class Player{
    public:
        static int playerCount;         //static memeber variable.
        Player(std::string playerName);
        void setPlayerName(std::string newName);
        std::string getPlayerName();
        void displayPlayerInfo();
        static void displayPlayerCount();         //static function

    private:
        std::string name;
};
