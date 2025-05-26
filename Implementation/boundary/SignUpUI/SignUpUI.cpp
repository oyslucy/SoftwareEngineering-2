#include "SignUpUI.h"

/**
 * @brief SignUpUI 클래스 생성자
 * 
 * @param signUp 회원가입 로직을 처리하는 SignUp 객체 참조
 */
SignUpUI::SignUpUI(SignUp& signUp) : _signup(signUp) {}

/**
 * @brief 회원가입 시작 인터페이스 메시지 출력
 * 
 * @param out_fp 회원가입 시작을 알리는 메시지를 출력할 스트림
 */
void SignUpUI::startInterface(ofstream& out_fp) {
    out_fp << "1.1. 회원가입\n";
}

/**
 * @brief 사용자 정보를 입력받아 회원가입 요청을 처리하고 결과 출력
 * 
 * @param in_fp 사용자 ID 비밀번호 전화번호를 입력받는 입력 스트림
 * @param out_fp 회원가입 결과 출력 스트림
 * @param userCollection 새 사용자 정보를 저장할 사용자 컬렉션
 */
void SignUpUI::inputInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection) {
    string id, password, phone_number;
    in_fp >> id >> password >> phone_number;

    tuple<string, string, string> signUpUserDetail =_signup.signup(id, password, phone_number, userCollection);
    
    out_fp << "> " << get<0>(signUpUserDetail) << " " << get<1>(signUpUserDetail) << " " << get<2>(signUpUserDetail) << "\n\n";
}