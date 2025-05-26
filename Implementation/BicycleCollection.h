#ifndef BICYCLE_COLLECTION_H
# define BICYCLE_COLLECTION_H

# include "Bicycle.h"
# include <string>
# include <vector>
using namespace std;

class BicycleCollection {
private:
    vector<Bicycle*> _bicycle_collection;

public:
    void addBicycle(const string& id, const string& productName);

    Bicycle* getBicycle(const string& id);
};

#endif