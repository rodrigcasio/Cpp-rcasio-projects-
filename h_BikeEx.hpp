#include <string>

class Bike{
  public:
    Bike(std::string bikeName, double bikeSpeed, int bikeCadence, int bikePace);
    void setBikeName(std::string bName);
    std::string getBikeName();
    void setBikeSpeed(double bSpeed);
    double getBikeSpeed();
    void setBikeCadence(int bCadence);
    int getBikeCadence();
    void setBikePace(int Pace);
    int getBikePace();
    void displayBikeInfo();

  pvivate:
    std::string name;
    double speed;
    int cadence;
    int pace;
};
