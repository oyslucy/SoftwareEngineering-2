#ifndef RENTAL_BICYCLE_UI_H
#define RENTAL_BICYCLE_UI_H

#include "RentalBicycle.h"
#include <fstream>
#include <string>
#include <sstream>

/**
 * @brief 자전거 대여 UI을 담당하는 클래스
 */
class RentalBicycleUI {
private:
    RentalBicycle& _rentalBicycle;

public:
    RentalBicycleUI(RentalBicycle& rentalBicycle);

    void startInterface(ofstream& out_fp);

    void rentalRequest(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif