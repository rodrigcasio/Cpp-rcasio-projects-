#include <iostream>
#include "h_FlightBookingReviewEx.hpp"

int main(){
    
    //objects
    FlightBooking booking1("Flight001", "Rodrigo Casio", 180.45);
    FlightBooking booking2("Flight002", "John Mayer", 270.99);
    FlightBooking booking3("Flight003", "Margaret Wall", 189.99);
    FlightBooking booking4("Flight004", "LaMello Ball", 250.23);
    FlightBooking booking5("Flight005", "Marco Polo");          //with default value of flight ticket
    FlightBooking booking6("Flight006", "Kyrie Irving");

std::cout << "---------booking flights with method bookFlight()----------" << std::endl << std::endl;
    booking1.bookFlight();
    booking2.bookFlight(); 
    booking3.bookFlight();
    booking4.bookFlight();
    booking5.bookFlight();
    booking6.bookFlight();
    
std::cout << "--------Displaying booking information with displayFlightDetails()----" << std::endl << std::endl;
    booking1.displayFlightDetails();
    booking2.displayFlightDetails();
    booking3.displayFlightDetails();
    booking4.displayFlightDetails();
    booking5.displayFlightDetails();
    booking6.displayFlightDetails();

std::cout << "-------Cancelling flight with method cancelFlight()------" << std::endl << std::endl;
    booking1.cancelFlight();

std::cout << "------Displaying details of all bookings---------" << std::endl << std::endl;
   //should appear no bookings:
    booking1.displayFlightDetails();
    //displaying info for the rest of the available bookings:
    booking2.displayFlightDetails();
    booking3.displayFlightDetails();
    booking4.displayFlightDetails();
    booking5.displayFlightDetails();
    booking6.displayFlightDetails();

std::cout << "------Display the value of the static member variable totalBooking-----" << std::endl << std::endl;
    FlightBooking::showTotalBookings();

std::cout << "-----Using method that concatenates strings into an auto deduced variable-----" << std::endl << std::endl;
    booking2.demonstrateAuto();

std::cout << "------displaying history of all bookings with method bookingHistory()---" << std::endl;

    FlightBooking::bookingHistory();
    std::cout << std::endl;

std::cout << "-------- Displaying the booking statistics with method bookingStats ------" << std::endl;
    
    FlightBooking::bookingStats();

    return 0;
}
