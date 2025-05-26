#include "Logout.h"

string Logout::logout(UserCollection& userCollection) {
    User* user = userCollection.getCurrentUser();
    if(user){
        user->unsetLoginUser();
        return (get<0>(user->getUserDetail()));
    }
    return ("");
}