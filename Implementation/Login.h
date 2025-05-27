#ifndef LOGIN_H
#define LOGIN_H

#include "UserCollection.h"
#include <string>
#include <vector>
#include <utility>
using namespace std;

/**
 * @brief 사용자 로그인 기능을 담당하는 클래스
 */
class Login {
public:
    pair<string, string> login(const string& id, const string& password, UserCollection& userCollection);
};

#endif