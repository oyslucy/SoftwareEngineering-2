#ifndef User_COLLECTION_H
#define User_COLLECTION_H

#include "User.h"
#include <string>
#include <vector>

using namespace std;

/**
 * @brief 사용자 객체들을 관리하는 컬렉션 클래스
 */
class UserCollection {
private:
    vector<User*> _user_collection; ///< 사용자 객체 포인터 리스트

public:
    void addUser(const string& id, const string& password, const string& phoneNumber, Role role); //member

    void addUser(const string& id, const string& password); // admin

    vector<User*>& getUser();

    User* getCurrentUser();
};

#endif