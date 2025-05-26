#include "LoginUI.h"

/**
 * @brief LoginUI 클래스 생성자
 * 
 * @param login 로그인 로직을 처리하는 Login 객체 참조
 */
LoginUI::LoginUI(Login& login) : _login(login) {}

/**
 * @brief 로그인 시작 인터페이스 메시지 출력
 * 
 * @param out_fp 로그인 시작을 알리는 메시지를 출력할 스트림
 */
void LoginUI::startInterface(ofstream& out_fp) {
    out_fp << "2.1. 로그인\n";
}

/**
 * @brief 로그인 정보를 입력받고 로그인 결과 출력
 * 
 * @param in_fp     사용자 입력 스트림 (로그인 ID, 비밀번호)
 * @param out_fp    로그인 결과를 출력할 스트림
 * @param userCollection 사용자 목록을 가진 컬렉션 객체
 */
void LoginUI::inputInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection) {
    string id, password;
    in_fp >> id >> password;

    pair<string, string> loginUserDetail = _login.login(id, password, userCollection);

    if(!loginUserDetail.first.empty() && !loginUserDetail.first.empty())
    out_fp << "> " << loginUserDetail.first << " " << loginUserDetail.second << "\n\n";
}