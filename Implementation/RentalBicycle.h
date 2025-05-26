#ifndef RENTAL_BICYCLE_H
#define RENTAL_BICYCLE_H

#include "UserCollection.h"
#include "BicycleCollection.h"

class RentalBicycle {
public:
    pair<string, string> rentalBicycle(const string& id, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif