#ifndef BOOKING_H
#define BOOKING_H

#include "flight.h"
#include "passenger.h"

class Booking {
public:
    Booking(const Flight& flight, const Passenger& passenger);
    const Flight& getFlight() const;
    const Passenger& getPassenger() const;

private:
    const Flight& flight;
    const Passenger& passenger;
};

#endif // BOOKING_H
