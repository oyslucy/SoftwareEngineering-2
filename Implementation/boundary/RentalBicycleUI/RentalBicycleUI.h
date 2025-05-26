#ifndef RENTAL_BICYCLE_UI_H
#define RENTAL_BICYCLE_UI_H

#include "../../control/RentalBicycle/RentalBicycle.h"
#include <fstream>
#include <string>
#include <sstream>

class RentalBicycleUI {
private:
    RentalBicycle& _rentalBicycle;

public:
    RentalBicycleUI(RentalBicycle& rentalBicycle);
    void rentalRequest(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif