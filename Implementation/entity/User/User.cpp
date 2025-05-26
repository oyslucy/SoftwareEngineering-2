#include "./User.h"

User::User(const string& id, const string& password, const string& phoneNumber)
    :_id(id), 
    _password(password), 
    _phoneNumber(phoneNumber), 
    _role(Member),
    _loginStatus(false) {}

User::User(const string& id, const string& password)
    :_id(id), 
    _password(password), 
    _phoneNumber(""),
    _role(Admin),
    _loginStatus(false) {}

tuple<string, string, Role> User::getUserDetail() const { return make_tuple(_id, _password, _role);}

bool User::getLoginStatus() const { return _loginStatus; }

void User::setLoginUser() { _loginStatus = true; }

void User::unsetLoginUser() { _loginStatus = false; }

vector<Bicycle*> User::getRentalBicycleList() const { return _rentalBicycleList; }

void User::setRentalBicycleList(Bicycle* bicycle) { _rentalBicycleList.push_back(bicycle); }