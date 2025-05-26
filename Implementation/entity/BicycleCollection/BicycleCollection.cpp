#include "BicycleCollection.h"

void BicycleCollection::addBicycle(const string& id, const string& productName) {
    Bicycle* newBicycle = new Bicycle(id, productName);
    _bicycle_collection.push_back(newBicycle);
}

Bicycle* BicycleCollection::getBicycle(const string& id) {
    for(Bicycle* bicycle : _bicycle_collection) {
        if (bicycle->getBicycleDetail().first == id) {
            return (bicycle);
        }
    }
    return nullptr;
}