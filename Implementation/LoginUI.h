#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include "Login.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

/**
 * @brief 로그인 UI 처리를 담당하는 클래스
 */
class LoginUI {
private:
    Login& _login;

public:
    LoginUI(Login& login);

    void startInterface(ofstream& out_fp);

    void inputInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection);
};

#endif