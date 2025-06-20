#include <string>

class Bike{
    public:
        Bike(std::string bikeName, double bikeSpeed, int bikeCadence, int bikePace);
        void setBikeName(std::string bName);
        std::string getBikeName();
        void setBikeSpeed(double bSpeed);
        double getBikeSpeed();
        void changeBikeCadence(int newCadence);
        int getBikeCadence();
        void changeBikePace(int newPace);
        int getBikePace();
        void displayBikeInfo();
        void stopBike();
        

    private:
        std::string name;
        double speed;
        int cadence;
        int pace;

};
