#include "ViewRentalInfo.h"

/**
 * @brief 현재 로그인된 일반 사용자의 자전거 대여 목록을 조회하여 반환
 * 
 * @param userCollection 현재 로그인된 사용자를 포함한 사용자 컬렉션
 * @return 대여한 자전거들의 ID와 제품명을 담은 벡터 반환
 */
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