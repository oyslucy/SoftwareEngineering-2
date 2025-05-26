#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "../../control/Logout/Logout.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class LogoutUI {
private:
    Logout& _logout;

public:
    LogoutUI(Logout& logout);
    void logoutRequest(ofstream& out_fp, UserCollection& userCollection);
};

#endif