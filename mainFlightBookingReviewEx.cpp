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


  booking1.displayFlightDetails();
  booking2.displayFlightDetails();
  booking3.displayFlightDetails();
  booking4.displayFlightDetails();
  booking5.displayFlightDetails();
  booking6.displayFlightDetails();
  

  return 0;
}
