#include "Bicycle.h"

Bicycle::Bicycle(const string& bicycle_id, const string& bicycle_name) {
    _id = bicycle_id;
    _productName = bicycle_name;
    _bicycleStatus = false;
}

Bicycle* Bicycle::setBicycleStatus(bool status) { 
    _bicycleStatus = status;
    return (this);
}

pair<string, string> Bicycle::getBicycleDetail() { return make_pair(_id, _productName);}