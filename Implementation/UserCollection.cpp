#include "UserCollection.h"

/**
 * @brief 일반 사용자 정보를 생성하여 사용자 컬렉션에 추가
 * 
 * @param id 사용자 ID
 * @param password 사용자 비밀번호
 * @param phoneNumber 사용자 전화번호
 * @param role 사용자 역할 (현재는 항상 Member)
 */
void UserCollection::addUser(const string& id, const string& password, const string& phoneNumber, Role role) {
    User* newUser = new User(id, password, phoneNumber);
    _user_collection.push_back(newUser);
}

/**
 * @brief 관리자 사용자 정보를 생성하여 사용자 컬렉션에 추가
 * 
 * @param id 관리자 ID
 * @param password 관리자 비밀번호
 */
void UserCollection::addUser(const string& id, const string& password) {
    User* newUser = new User(id, password);
    _user_collection.push_back(newUser);
}


/**
 * @brief 모든 사용자 객체 리스트를 반환
 * 
 * @return 사용자 포인터 벡터 참조
 */
vector<User*>& UserCollection::getUser() {
    return _user_collection;
}

/**
 * @brief 현재 로그인된 사용자 객체를 반환
 * 
 * @return 로그인된 사용자 포인터 반환 없으면 nullptr 반환
 */
User* UserCollection::getCurrentUser() {
    for (User* user : _user_collection) {
        if (user->getLoginStatus()) {
            return user;
        }
    }
    return nullptr;
}