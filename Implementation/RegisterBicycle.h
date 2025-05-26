#ifndef REGISTER_BICYCLE_H
#define REGISTER_BICYCLE_H

#include "Bicycle.h"
#include "BicycleCollection.h"
#include "UserCollection.h"
#include <string>
using namespace std;

class RegisterBicycle {
public:
    pair<string, string> registerBicycle(const string& id, const string& productName, UserCollection& userCollection, BicycleCollection& bicycleCollection);
};

#endif