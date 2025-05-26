#include "Login.h"

pair<string, string> Login::login(const string& id, const string& password, UserCollection& userCollection) {
    vector<User*>& users = userCollection.getUser();
    pair<string, string> loginUserDetail = make_pair(id, password);
    
    for (User* user : users) { 
        if (get<0>(user->getUserDetail()) == loginUserDetail.first && get<1>(user->getUserDetail()) == loginUserDetail.second) {
            user->setLoginUser();
            return loginUserDetail;
        }
    }
    return make_pair("", "");
}