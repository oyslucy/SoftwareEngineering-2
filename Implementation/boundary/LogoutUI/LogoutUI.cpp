#include "LogoutUI.h"

LogoutUI::LogoutUI(Logout& logout) : _logout(logout) {}

void LogoutUI::logoutRequest(ofstream& out_fp, UserCollection& userCollection) {
    string logoutUserDetail = _logout.logout(userCollection);
    if (!logoutUserDetail.empty()) {
        out_fp << "2.2. 로그아웃\n";
        out_fp << "> " << logoutUserDetail << "\n\n"; 
    }
}