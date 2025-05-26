#include "RentalBicycle.h"

/**
 * @brief 현재 로그인된 사용자가 일반 사용자일 경우 자전거를 대여하고 대여 정보 반환
 * 
 * @param id 대여할 자전거의 ID
 * @param userCollection 현재 로그인된 사용자를 포함한 사용자 컬렉션
 * @param bicycleCollection 대여 대상 자전거가 포함된 자전거 컬렉션
 * @return 대여 성공 시 자전거 ID와 제품명 반환 대여 실패 시 빈 문자열 쌍 반환
 */
pair<string, string> RentalBicycle::rentalBicycle(const string& id, UserCollection& userCollection, BicycleCollection& bicycleCollection) {
    User* user = userCollection.getCurrentUser();

    if(get<2>(user->getUserDetail()) == Member){
        Bicycle* bicycle = bicycleCollection.getBicycle(id);
        user->setRentalBicycleList(bicycle);
        return make_pair(bicycle->getBicycleDetail().first, bicycle->getBicycleDetail().second);
    }
    return make_pair("", "");
}