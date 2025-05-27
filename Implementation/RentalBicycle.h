#ifndef RENTAL_BICYCLE_H
#define RENTAL_BICYCLE_H

#include "UserCollection.h"
#include "BicycleCollection.h"

/**
 * @brief 자전거 대여 기능을 담당하는 클래스
 */
class RentalBicycle {
public:
    pair<string, string> rentalBicycle(const string& id, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif