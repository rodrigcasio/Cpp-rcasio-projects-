#include <string>
#include <vector>

class FlightBooking {
  public:
    FlightBooking(std::string flightName, std::string personName);
    std::string getPassengerName() const;
    std::string getFlightName() const;

    void bookFlight();
    void cancelFlight() const;
    void displayFlightDetails() const;
    void demonstrateAuto() const; 
    static void bookingHistory();
    static void showTotalBookings();
    

  private:
    std::string passengerName;
    std::string flightName
    static std::vector<std::string> bookings;

    static int availableSeats;
    static int totalBookings;
    mutable int bookingID;
   
    
};
