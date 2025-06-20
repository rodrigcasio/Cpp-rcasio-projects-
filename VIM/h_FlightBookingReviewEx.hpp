#include <string>
#include <vector>
class FlightBooking{
    public:
        
        FlightBooking(std::string flightName,std::string personName, double costOfTicket = 366.89); //default value of priceTicket
        std::string getPassengerName() const;
        std::string getFlightName() const;
        double getFlightValue() const;

        void bookFlight();
        void cancelFlight() const;
        void displayFlightDetails() const;
        void demonstrateAuto() const;
        static void bookingHistory();       
        static void showTotalBookings();
        static void bookingStats();
    

    private:
        std::string flightName;
        std::string passengerName;

        //static members defined in fns_FlightBookingReviewEx.cpp
        static std::vector <std::string> bookings;       

        static int availableSeats;
        static int totalBookings;
        mutable int bookingID;

    //new variables for booking stats.
        static int totalCancellations;
        double ticketPrice;
        static double totalRevenue;
};
