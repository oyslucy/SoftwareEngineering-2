#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include "../../entity/UserCollection/UserCollection.h"
#include "../../entity/Bicycle/Bicycle.h"
#include <string>
using namespace std;

class ViewRentalInfo {
public:
    vector<pair<string, string>> viewRentalInfo(UserCollection& userCollection);
};

#endif