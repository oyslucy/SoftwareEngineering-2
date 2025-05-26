#ifndef User_COLLECTION_H
#define User_COLLECTION_H

#include "../User/User.h"
#include <string>
#include <vector>

using namespace std;

class UserCollection {
private:
    vector<User*> _user_collection;

public:
    void addUser(const string& id, const string& password, const string& phoneNumber, Role role); //member

    void addUser(const string& id, const string& password); // admin

    vector<User*>& getUser();

    User* getCurrentUser();
};

#endif