#ifndef REGISTER_BICYCLE_UI_H
#define REGISTER_BICYCLE_UI_H

#include "../../control/RegisterBicycle/RegisterBicycle.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class RegisterBicycleUI {
private:
    RegisterBicycle& _registerBicycle;

public:
    RegisterBicycleUI(RegisterBicycle& registerBicycle);

    void startInterface(ofstream& out_fp);

    void inputBicycleInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif