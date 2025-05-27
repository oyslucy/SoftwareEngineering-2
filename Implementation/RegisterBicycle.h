#ifndef REGISTER_BICYCLE_H
#define REGISTER_BICYCLE_H

#include "Bicycle.h"
#include "BicycleCollection.h"
#include "UserCollection.h"
#include <string>
using namespace std;

/**
 * @brief 자전거 등록 기능을 담당하는 클래스
 */
class RegisterBicycle {
public:
    pair<string, string> registerBicycle(const string& id, const string& productName, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif