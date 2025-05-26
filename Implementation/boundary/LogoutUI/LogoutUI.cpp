#include "LogoutUI.h"

/**
 * @brief LogoutUI 클래스 생성자
 * 
 * @param logout 로그아웃 로직을 처리하는 Logout 객체 참조
 */
LogoutUI::LogoutUI(Logout& logout) : _logout(logout) {}

/**
 * @brief 현재 로그인된 사용자를 로그아웃 처리하고 결과 출력
 * 
 * @param out_fp 로그아웃 결과를 출력할 스트림
 * @param userCollection 현재 로그인된 사용자를 포함한 전체 사용자 컬렉션
 */
void LogoutUI::logoutRequest(ofstream& out_fp, UserCollection& userCollection) {
    string logoutUserDetail = _logout.logout(userCollection);
    if (!logoutUserDetail.empty()) {
        out_fp << "2.2. 로그아웃\n";
        out_fp << "> " << logoutUserDetail << "\n\n"; 
    }
}