#include "Bicycle.h"

/**
 * @brief 자전거 객체 생성자 자전거 ID와 제품명을 설정하고 초기 상태를 미사용으로 설정
 * 
 * @param bicycle_id 자전거의 고유 ID
 * @param bicycle_name 자전거의 제품명
 */
Bicycle::Bicycle(const string& bicycle_id, const string& bicycle_name) {
    _id = bicycle_id;
    _productName = bicycle_name;
    _bicycleStatus = false;
}

/**
 * @brief 자전거의 사용 상태를 설정하고 해당 자전거 객체를 반환
 * 
 * @param status 자전거 사용 상태 (true는 사용 중 false는 미사용)
 * @return 상태가 설정된 자전거 객체 포인터
 */
Bicycle* Bicycle::setBicycleStatus(bool status) { 
    _bicycleStatus = status;
    return (this);
}

/**
 * @brief 자전거의 ID와 제품명을 반환
 * 
 * @return 자전거 ID와 제품명이 담긴 pair
 */
pair<string, string> Bicycle::getBicycleDetail() { return make_pair(_id, _productName);}