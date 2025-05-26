#include "RegisterBicycleUI.h"

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& registerBicycle) : _registerBicycle(registerBicycle) {}

void RegisterBicycleUI::inputBicycleInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection, BicycleCollection& bicycleCollection) {
    string id, productName;
    in_fp >> id >> productName;

    pair<string, string> registeredBicycleInfo = _registerBicycle.registerBicycle(id, productName, userCollection, bicycleCollection);
    out_fp << "3.1. 자전거 등록\n";
    out_fp << "> " << registeredBicycleInfo.first << " " << registeredBicycleInfo.second << "\n\n";
}