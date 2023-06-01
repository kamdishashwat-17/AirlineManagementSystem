#include "flight.h"

Flight::Flight(int flightNumber, const std::string& destination, const std::string& departureTime)
    : flightNumber(flightNumber), destination(destination), departureTime(departureTime) {
}

int Flight::getFlightNumber() const {
    return flightNumber;
}

std::string Flight::getDestination() const {
    return destination;
}

std::string Flight::getDepartureTime() const {
    return departureTime;
}