#ifndef LOGOUT_H
#define LOGOUT_H

#include "UserCollection.h"

/**
 * @brief 로그아웃 기능을 담당하는 클래스
 */
class Logout {
public:
    string logout(UserCollection& userCollection);
};

#endif