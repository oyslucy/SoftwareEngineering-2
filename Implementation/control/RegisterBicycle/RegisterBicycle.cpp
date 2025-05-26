#include "RegisterBicycle.h"
#include "../../entity/UserCollection/UserCollection.h"

pair<string, string> RegisterBicycle::registerBicycle(const string& id, const string& productName, UserCollection& userCollection, BicycleCollection& bicycleCollection) {
    User* user = userCollection.getCurrentUser();
    if(get<2>(user->getUserDetail()) == Admin){
        bicycleCollection.addBicycle(id, productName);
        return make_pair(id, productName);
    }
    return make_pair("", "");
}