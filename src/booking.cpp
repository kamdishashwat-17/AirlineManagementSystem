#include "booking.h"

Booking::Booking(const Flight& flight, const Passenger& passenger)
    : flight(flight), passenger(passenger) {
}

const Flight& Booking::getFlight() const {
    return flight;
}

const Passenger& Booking::getPassenger() const {
    return passenger;
}