#include "RentalBicycleUI.h"

RentalBicycleUI::RentalBicycleUI(RentalBicycle& rentalBicycle): _rentalBicycle(rentalBicycle) {}

void RentalBicycleUI::rentalRequest(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection, BicycleCollection& bicycleCollection) {
    string id;
    in_fp >> id;

    pair<string, string> rentalBicycleInformation = _rentalBicycle.rentalBicycle(id, userCollection, bicycleCollection);

    if(!rentalBicycleInformation.first.empty() && !rentalBicycleInformation.first.empty()) {
        out_fp << "4.1. 자전거 대여\n";
        out_fp << "> " << rentalBicycleInformation.first << " " << rentalBicycleInformation.second << "\n\n";
    }
}