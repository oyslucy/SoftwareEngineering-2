#include "UserCollection.h"

void UserCollection::addUser(const string& id, const string& password, const string& phoneNumber, Role role) {
    User* newUser = new User(id, password, phoneNumber);
    _user_collection.push_back(newUser);
}

void UserCollection::addUser(const string& id, const string& password) {
    User* newUser = new User(id, password);
    _user_collection.push_back(newUser);
}

vector<User*>& UserCollection::getUser() {
    return _user_collection;
}

User* UserCollection::getCurrentUser() {
    for (User* user : _user_collection) {
        if (user->getLoginStatus()) {
            return user;
        }
    }
    return nullptr;
}