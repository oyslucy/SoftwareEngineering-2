#ifndef USER_H
#define USER_H

# include "../Bicycle/Bicycle.h"
#include <string>
#include <vector>
#include <tuple>
using namespace std;

enum Role {
    Member,
    Admin
};

class User {
private:
    string _id;
    string _password;
    string _phoneNumber;
    Role _role;
    bool _loginStatus;
    vector<Bicycle*> _rentalBicycleList;
    
public:
    User(const string& id, const string& password, const string& phoneNumber); // member user

    User(const string& id, const string& password); // admin user

    tuple<string, string, Role> getUserDetail() const;

    bool getLoginStatus() const;

    void setLoginUser();

    void unsetLoginUser();

    vector<Bicycle*> getRentalBicycleList() const;

    void setRentalBicycleList(Bicycle* bicycle);
};

#endif