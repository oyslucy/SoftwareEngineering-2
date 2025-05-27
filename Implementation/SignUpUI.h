#ifndef SIGNUP_UI_H
#define SIGNUP_UI_H

#include "SignUp.h"
#include <tuple>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

/**
 * @brief 회원가입 UI을 담당하는 클래스
 */
class SignUpUI {
private:
    SignUp& _signup;

public:
    SignUpUI(SignUp& SignUp);

    void startInterface(ofstream& out_fp);

    void inputInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection);
};

#endif