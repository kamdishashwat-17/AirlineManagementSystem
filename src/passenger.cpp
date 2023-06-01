#include "passenger.h"

Passenger::Passenger(const std::string& name, const std::string& passportNumber)
    : name(name), passportNumber(passportNumber) {
}

std::string Passenger::getName() const {
    return name;
}

std::string Passenger::getPassportNumber() const {
    return passportNumber;
}