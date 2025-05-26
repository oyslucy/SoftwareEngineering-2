#include "SignUpUI.h"

SignUpUI::SignUpUI(SignUp& signUp) : _signup(signUp) {}

void SignUpUI::inputInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection) {
    string id, password, phone_number;
    in_fp >> id >> password >> phone_number;

    tuple<string, string, string> signUpUserDetail =_signup.signup(id, password, phone_number, userCollection);
    
    out_fp << "1.1. 회원가입\n";
    out_fp << "> " << get<0>(signUpUserDetail) << " " << get<1>(signUpUserDetail) << " " << get<2>(signUpUserDetail) << "\n\n";
}