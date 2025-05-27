#ifndef BICYCLE_COLLECTION_H
# define BICYCLE_COLLECTION_H

# include "Bicycle.h"
# include <string>
# include <vector>
using namespace std;

/**
 * @brief 자전거 객체들을 관리하는 컬렉션 클래스
 */
class BicycleCollection {
private:
    vector<Bicycle*> _bicycle_collection;

public:
    void addBicycle(const string& id, const string& productName);

    Bicycle* getBicycle(const string& id);
};

#endif