#ifndef LOGIN_H
#define LOGIN_H

#include "../../entity/UserCollection/UserCollection.h"
#include <string>
#include <vector>
#include <utility>
using namespace std;

class Login {
public:
    pair<string, string> login(const string& id, const string& password, UserCollection& userCollection);
};

#endif