#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "Logout.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

/**
 * @brief 로그아웃 UI 처리를 담당하는 클래스
 */
class LogoutUI {
private:
    Logout& _logout;

public:
    LogoutUI(Logout& logout);

    void startInterface(ofstream& out_fp);

    void logoutRequest(ofstream& out_fp, UserCollection& userCollection);
};

#endif