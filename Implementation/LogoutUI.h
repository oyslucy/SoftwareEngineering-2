#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "Logout.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class LogoutUI {
private:
    Logout& _logout;

public:
    LogoutUI(Logout& logout);

    void startInterface(ofstream& out_fp);

    void logoutRequest(ofstream& out_fp, UserCollection& userCollection);
};

#endif