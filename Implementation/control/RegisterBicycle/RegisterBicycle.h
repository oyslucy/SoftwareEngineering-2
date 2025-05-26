#ifndef REGISTER_BICYCLE_H
#define REGISTER_BICYCLE_H

#include "../../entity/Bicycle/Bicycle.h"
#include "../../entity/BicycleCollection/BicycleCollection.h"
#include "../../entity/UserCollection/UserCollection.h"
#include <string>
using namespace std;

class RegisterBicycle {
public:
    pair<string, string> registerBicycle(const string& id, const string& productName, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif