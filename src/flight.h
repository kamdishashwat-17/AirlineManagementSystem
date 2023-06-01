#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

class Flight {
public:
    Flight(int flightNumber, const std::string& destination, const std::string& departureTime);
    int getFlightNumber() const;
    std::string getDestination() const;
    std::string getDepartureTime() const;

private:
    int flightNumber;
    std::string destination;
    std::string departureTime;
};

#endif // FLIGHT_H
