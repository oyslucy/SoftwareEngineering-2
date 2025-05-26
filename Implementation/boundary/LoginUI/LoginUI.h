#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include "../../control/Login/Login.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class LoginUI {
private:
    Login& _login;

public:
    LoginUI(Login& login);
    void inputInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection);
};

#endif