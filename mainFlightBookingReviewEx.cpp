#include <iostream>
#include "h_FlightBookingEx.hpp"

int main(){
  //setting objects
  FlightBooking booking1("Flight1001", "Rodrigo Casio");
  FlightBooking booking2("Flight1002", "Chris Martin");
  FlightBooking booking3("Flight1003", "John Jackson");
  FlightBooking booking4("Flight1004", "Britney Park");
  FlightBooking booking5("FLight1005", "LeMickey James");
  FlightBooking booking6("Flight1006", "Kyrie Irving");

std::cout << "--------------booking flights with method bookFlight()---------" << std::endl;
  booking1.bookFlight();
  booking2.bookFlight();
  booking3.bookFlight();
  booking4.bookFlight();
  booking5.bookFlight();
  booking6.bookFlight();

std::cout << "----------- Displaying booking information with displayFlightDetails() method -----" << std::endl;

  booking1.displayFlightDetails();
  booking2.displayFlightDetails();
  booking3.displayFlightDetails();
  booking4.displayFlightDetails();
  booking5.displayFlightDetails();
  booking6.displayFlightDetails();

std::cout << "--------- Cancelling flight with method cancelFlight()------------" << std::endl;
  booking1.cancelFlight(); //canceling booking1
  booking3.cancelFlight();

std::cout << "---------- Displaying booking informations again -------- " << std::endl;

  booking1.displayFlightDetails(); //show 'there are no flights booked"
  booking2.displayFlightDetails(); //show 'there are no flights booked"
  booking3.displayFlightDetails();
  booking4.displayFlightDetails();
  booking5.displayFlightDetails();
  booking6.displayFlightDetails();

std::cout << "--------- Display the value of the static member variable totalBooking ---- " << std::endl;

  FlightBooking::totalBookings();

std::cout << "-------- Using method that concatenates strings into an auto deduced variable ----- " std::endl;
  
  booking3.demosntrateAuto();

std::cout << "--------- displaying history of all bookings with method bookingHistory() ------- " std::endl;

  FlightBooking::bookingHistory()
  std::cout << std::endl;

  return 0;
}
