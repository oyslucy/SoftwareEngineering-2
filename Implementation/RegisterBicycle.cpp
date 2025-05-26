#include "RegisterBicycle.h"
#include "UserCollection.h"

/**
 * @brief 현재 로그인된 사용자가 관리자일 경우 자전거 정보를 등록하고 등록 결과 반환
 * 
 * @param id 등록할 자전거의 ID
 * @param productName 자전거 제품명
 * @param userCollection 현재 로그인된 사용자를 포함한 사용자 컬렉션
 * @param bicycleCollection 자전거 정보를 저장할 자전거 컬렉션
 * @return 등록 성공 시 자전거 ID와 제품명 반환 등록 실패 시 빈 문자열 쌍 반환
 */
pair<string, string> RegisterBicycle::registerBicycle(const string& id, const string& productName, UserCollection& userCollection, BicycleCollection& bicycleCollection) {
    User* user = userCollection.getCurrentUser();
    if(get<2>(user->getUserDetail()) == Admin){
        bicycleCollection.addBicycle(id, productName);
        return make_pair(id, productName);
    }
    return make_pair("", "");
}