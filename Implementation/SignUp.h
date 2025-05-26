#ifndef SIGNUP_H
#define SIGNUP_H

#include "User.h"
#include "UserCollection.h"
#include <string>
using namespace std;

class SignUp {
public:
    tuple<string, string, string> signup(const string& id, const string& password, const string& phonenumber, UserCollection& userCollection);
};

#endif