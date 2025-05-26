#include "LoginUI.h"

LoginUI::LoginUI(Login& login) : _login(login) {}

void LoginUI::inputInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection) {
    string id, password;
    in_fp >> id >> password;

    pair<string, string> loginUserDetail = _login.login(id, password, userCollection);

    if(!loginUserDetail.first.empty() && !loginUserDetail.first.empty())
    out_fp << "2.1. 로그인\n";
    out_fp << "> " << loginUserDetail.first << " " << loginUserDetail.second << "\n\n";
}