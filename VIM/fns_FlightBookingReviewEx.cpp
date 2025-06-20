#include "h_FlightBookingReviewEx.hpp"
#include <iostream>
#include <iomanip>

std::vector<std::string> FlightBooking::bookings;        //define the static vector  
int FlightBooking::availableSeats = 100;
int FlightBooking::totalBookings = 0;
int FlightBooking::totalCancellations = 0;
double FlightBooking::totalRevenue = 0;

FlightBooking::FlightBooking(std::string flightName, std::string personName, double costOfTicket): flightName(flightName), passengerName(personName), ticketPrice(costOfTicket), bookingID(0){
    //added in the def BookingID value of (0)
}
std::string FlightBooking::getPassengerName() const{ 
    return passengerName;
}
std::string FlightBooking::getFlightName() const{ 
    return flightName;
}
double FlightBooking::getFlightValue() const{
    return ticketPrice;
} 

void FlightBooking::bookFlight(){
    if(availableSeats > 0){
        bookingID = ++totalBookings;         
        availableSeats--;                   //reduces the number of availableSeats
        totalRevenue += getFlightValue();   //Adding the value the cost of ticket to revenue
        std::cout << "Flight Booked for " << getPassengerName() << " on " << getFlightName() << std::endl;
        std::cout << "Booking ID: " << bookingID << std::endl;
        std::cout << "Total of flight ticket: $" << getFlightValue() << std::endl << std::endl;
        bookings.push_back("Booking ID: " + std::to_string(bookingID) + " | " + getFlightName() + " | " + getPassengerName());
    }else{
        std::cout << "No seats available!" << std::endl;    //if availableSeats = 0
    }
}
void FlightBooking::cancelFlight() const{
    if(bookingID != 0){
        std::cout << "Flight " << flightName << " for " << passengerName << " has been canceled successfully" << std::endl << std::endl;
        for(auto it = bookings.begin(); it != bookings.end(); ++it){                    //auto it deduces std::vector <std::string>::iterator. 
            if(it->find("Booking ID: " + std::to_string(bookingID)) != std::string::npos){              //std::string::npos indicates no match found..
                bookings.erase(it);                                                      //removes the element at it from bookings...
                break;
            }
        }
        bookingID = 0;
        totalRevenue -= getFlightValue();
        if(totalRevenue < 0) totalRevenue = 0;      //AVOIDS NEGATIVE REVENUE and sets the value to 0.
        totalBookings--;
        availableSeats++;
        totalCancellations++;
    }else{
        std::cout << "No booking available to cancel" << std::endl;
    }
}
void FlightBooking::displayFlightDetails() const{     //only showing info (read-only function)
    if(bookingID != 0){
        std::cout << "Passenger: " << passengerName << std::endl
                  << "Flight: " << flightName << std::endl
                  << "Booking ID: " << bookingID << std::endl << std::endl;
    }else{
        std::cout << "There are no flights booked" << std::endl << std::endl;
    }
}
void FlightBooking::demonstrateAuto() const{
    //concatenates flight and passenger info using auto
    auto flightInfo = "Flight: " + flightName + " for " + passengerName;
    std::cout << "Auto-deduced variable " << flightInfo << std::endl << std::endl;
}
void FlightBooking::bookingHistory(){
    if(bookings.empty()){
        std::cout << "There are no available bookings" << std::endl;
    }else{
        for(const std::string& books : bookings){       //using the reference to avoid making a copy of each std::string in bookings
            std::cout << "- " << books << std::endl;
        }
    }
}
void FlightBooking::showTotalBookings(){
    //displays totalBookings
    std::cout << "Total Bookings: " << totalBookings << std::endl << std::endl;
}

void FlightBooking::bookingStats(){     
    if(totalBookings + totalCancellations > 0){
        std::cout << "Bookings active: " << totalBookings << std::endl
                  << "Bookings canceled: " << totalCancellations << std::endl 
                  << "Total revenue: $" << totalRevenue << std::endl 
                  << "Average ticket price: $" << std::fixed << std::setprecision(2)        //setting decimals of 2 digits
                  << totalRevenue / (totalBookings + totalCancellations) << std::endl << std::endl; 
        
    }else{
        std::cout << "There are no booking statistics available" << std::endl << std::endl;
    }
}




/*    how to delete elements of a vector of strings
in the method cancelFlight() we create a iterator 
to iterate throught the elements of the vector booking with a for loop

    (std::vector<std::string>::iterator is the same as auto)

    for(auto it = bookings.begin(); it != bookings.end(); ++it){
        if(it->find("Booking ID: " + std::to_string(BookingID)) != std::string::npos){
            bookings.erase(it).
        }
    }     
        
        the find(must be the same as the occurance of the elements of the vector) 
        in order to for the function to find the BookingID and remove it from the vector..

        find() used to locate the first occurance aof a specific value within 
        a range of elements

*/
