#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include "UserCollection.h"
#include "Bicycle.h"
#include <string>
using namespace std;

class ViewRentalInfo {
public:
    vector<pair<string, string>> viewRentalInfo(UserCollection& userCollection);
};

#endif