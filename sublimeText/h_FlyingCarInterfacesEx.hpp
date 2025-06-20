#include "h_CarInterfacesEx.hpp"
#include "h_AircraftInterfacesEx.hpp"

class FlyingCar : public Aircraft, public Car{
	
public:
	void drive(int carSpeed) override;
	void stop() override;
	void fly(int aircraftHeight) override;
	void land() override;

	int getCarSpeed();
	int getCarHeight();

private:
	int speed;
	int height;
};