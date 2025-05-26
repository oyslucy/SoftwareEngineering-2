#include "ViewRentalInfo.h"

vector<pair<string, string>> ViewRentalInfo::viewRentalInfo(UserCollection& userCollection) {
    User* user = userCollection.getCurrentUser();
    vector<pair<string, string>> rentalInfo;

    if(get<2>(user->getUserDetail()) == Member){
        vector<Bicycle*> bicycles = user->getRentalBicycleList();
        for (Bicycle* bicycle : bicycles) {
            rentalInfo.push_back(make_pair(bicycle->getBicycleDetail().first, bicycle->getBicycleDetail().second));
        }
    }
    return (rentalInfo);
}