#include "RentalBicycle.h"

pair<string, string> RentalBicycle::rentalBicycle(const string& id, UserCollection& userCollection, BicycleCollection& bicycleCollection) {
    User* user = userCollection.getCurrentUser();

    if(get<2>(user->getUserDetail()) == Member){
        Bicycle* bicycle = bicycleCollection.getBicycle(id);
        user->setRentalBicycleList(bicycle);
        return make_pair(bicycle->getBicycleDetail().first, bicycle->getBicycleDetail().second);
    }
    return make_pair("", "");
}