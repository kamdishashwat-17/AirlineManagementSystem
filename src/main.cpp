#include <iostream>
#include "flight.h"
#include "passenger.h"
#include "booking.h"

int main() {
    // Create a flight
    Flight flight(1234, "New York", "09:00");

    // Create a passenger
    Passenger passenger("John Doe", "ABC123456");

    // Create a booking
    Booking booking(flight, passenger);

    // Display booking information
    std::cout << "Booking Details:" << std::endl;
    std::cout << "Flight Number: " << booking.getFlight().getFlightNumber() << std::endl;
    std::cout << "Destination: " << booking.getFlight().getDestination() << std::endl;
    std::cout << "Departure Time: " << booking.getFlight().getDepartureTime() << std::endl;
    std::cout << "Passenger Name: " << booking.getPassenger().getName() << std::endl;
    std::cout << "Passport Number: " << booking.getPassenger().getPassportNumber() << std::endl;

    return 0;
}
