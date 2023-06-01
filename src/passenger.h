#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
public:
    Passenger(const std::string& name, const std::string& passportNumber);
    std::string getName() const;
    std::string getPassportNumber() const;

private:
    std::string name;
    std::string passportNumber;
};

#endif // PASSENGER_H
