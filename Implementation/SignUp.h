#ifndef SIGNUP_H
#define SIGNUP_H

#include "User.h"
#include "UserCollection.h"
#include <string>
using namespace std;

/**
 * @brief 회원가입 기능을 담당하는 클래스
 */
class SignUp {
public:
    tuple<string, string, string> signup(const string& id, const string& password, const string& phonenumber, UserCollection& userCollection);
};

#endif