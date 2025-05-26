#include "../SignUp/SignUp.h"

tuple<string, string, string> SignUp::signup(const string& id, const string& password, const string& phoneNumber, UserCollection& userCollection) {
    userCollection.addUser(id, password, phoneNumber, Member); // signup 하는 appUser는 member
    return make_tuple(id, password, phoneNumber);
}