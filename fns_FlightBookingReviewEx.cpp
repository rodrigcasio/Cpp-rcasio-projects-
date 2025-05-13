#include "h_FlightBookingReviewEx.hpp"
#include <iostream>
//static memebr variables
std::vector<std::string> FlightBookings::bookings;
int FlightBooking::availableSeats = 100;
int FlightBooking::totalBookings = 0;

FlightBoooking::FlightBooking(std::string FlightName, std::string personName): flightName(flightName), passengerName(personName), BookingID(0){
  
}
void FlightBooking::getPassengerName() const{
  return passengerName;
}
void FlightBooking::getFlightName() const{
  return flightName;
}

void FlightBooking::bookFlight(){
  if(availableSeats > 0){
    BookingID = ++totalBookings;
    availableSeats--;
    std::cout << "Flight booked for " << getPassengerName() << " on " << getFlightName() << std::endl;
    std::cout << "BookingID: " << bookingID << std::endl << std::endl;
    bookings.push_back("BookingID: " + std::to_string(bookingID) + " | " + getFlightName() + " | " + getPassengerName());  //saving this this string into a vector.
  }else{
    std::cout << "No seats available!" << std::endl;
  }
}

void FlightBooking::cancelFlight() const{
  if(bookingID != 0){
    std::cout << "Flight " << getFlightName() << " for " << getPassengerName() << std::endl << std::endl;
    for(auto it = bookings.begin(); it != bookings.end(); ++it){
      if(it->find("BookingID: " + std::to_string(bookingID)) != std::string::npos){
        bookings.erase(it);   //erase the string that matches the bookingID..
        break;
      }
    }
    bookingID = 0;
    totalBookings--;
    availableSeats++;
  }else{
    std::cout << "No bookings available" << std::endl;
  }
}

void FlightBooking::displayFlightDetails() const{ //only showing info (read-only function)
  if(bookingID != 0){
    std::cout << "Passenger: " << getPassengerName() << std::endl
              << "Flight: " << getFlightName() << std::endl
              << "BookingID: " << bookingID << std::endl << std::endl;
  }else{
    std::cout << "There are no flights booked" << std::endl < std::endl;
  }
}

void FlightBooking::demostrateAuto() const{    //example of using the auto keyword
  auto flightInfo = "Flight: " + getflightName() + " for " + getPassengerName();
  std::cout << "Auto-deduced variable " << flightInfo << std::endl << std::endl;
}

void FlightBooking::bookingHistory(){
  if(bookings.emtpy()){
    std::cout << "There are no available bookings" << std::endl << std::endl;
  }else{
    for(const std::string& books : bookings){
      std::cout << "- " << books << std::endl;
    }
  }
}

void FlightBooking::showTotalBookings(){
  std::cout << "Total Bookings: " << totalBookings << std::endl << std::endl;
}
