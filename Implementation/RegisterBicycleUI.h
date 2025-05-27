#ifndef REGISTER_BICYCLE_UI_H
#define REGISTER_BICYCLE_UI_H

#include "RegisterBicycle.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

/**
 * @brief 자전거 등록 UI를 담당하는 클래스
 */
class RegisterBicycleUI {
private:
    RegisterBicycle& _registerBicycle;

public:
    RegisterBicycleUI(RegisterBicycle& registerBicycle);

    void startInterface(ofstream& out_fp);

    void inputBicycleInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif