#ifndef RENTAL_BICYCLE_H
#define RENTAL_BICYCLE_H

#include "../../entity/UserCollection/UserCollection.h"
#include "../../entity/BicycleCollection/BicycleCollection.h"

class RentalBicycle {
public:
    pair<string, string> rentalBicycle(const string& id, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif