#include <string>
#include <vector>

class FlightBook{
public:
	FlightBook(std::string flightName, std::string passangerName);
	std::string getFlightName();
	std::string getPassangerName();

	void bookFlight();
	void cancelFlight();

private:
	std::string flightName;
	std::string passengerName;
};