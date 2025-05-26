#include "BicycleCollection.h"

/**
 * @brief 새로운 자전거 객체를 생성하여 자전거 컬렉션에 추가
 * 
 * @param id 자전거의 고유 ID
 * @param productName 자전거의 제품명
 */
void BicycleCollection::addBicycle(const string& id, const string& productName) {
    Bicycle* newBicycle = new Bicycle(id, productName);
    _bicycle_collection.push_back(newBicycle);
}


/**
 * @brief 주어진 ID에 해당하는 자전거 객체를 자전거 컬렉션에서 검색하여 반환
 * 
 * @param id 검색할 자전거의 ID
 * @return 해당 자전거 객체 포인터 반환 존재하지 않으면 nullptr 반환
 */
Bicycle* BicycleCollection::getBicycle(const string& id) {
    for(Bicycle* bicycle : _bicycle_collection) {
        if (bicycle->getBicycleDetail().first == id) {
            return (bicycle);
        }
    }
    return nullptr;
}