#include "User.h"

/**
 * @brief 일반 사용자용 생성자 ID 비밀번호 전화번호를 설정하고 기본 역할을 Member로 지정
 * 
 * @param id 사용자 ID
 * @param password 사용자 비밀번호
 * @param phoneNumber 사용자 전화번호
 */
User::User(const string& id, const string& password, const string& phoneNumber)
    :_id(id), 
    _password(password), 
    _phoneNumber(phoneNumber), 
    _role(Member),
    _loginStatus(false) {}

/**
 * @brief 관리자 사용자용 생성자 ID와 비밀번호만 설정하고 역할을 Admin으로 지정
 * 
 * @param id 사용자 ID
 * @param password 사용자 비밀번호
 */
User::User(const string& id, const string& password)
    :_id(id), 
    _password(password), 
    _phoneNumber(""),
    _role(Admin),
    _loginStatus(false) {}

/**
 * @brief 사용자 ID 비밀번호 역할 정보를 반환
 * 
 * @return 사용자 정보를 담은 튜플 (ID 비밀번호 역할)
 */
tuple<string, string, Role> User::getUserDetail() const { return make_tuple(_id, _password, _role);}

/**
 * @brief 현재 로그인 상태 반환
 * 
 * @return 로그인 상태 true 또는 false
 */
bool User::getLoginStatus() const { return _loginStatus; }

/**
 * @brief 로그인 상태를 true로 설정
 */
void User::setLoginUser() { _loginStatus = true; }

/**
 * @brief 로그인 상태를 false로 설정
 */
void User::unsetLoginUser() { _loginStatus = false; }

/**
 * @brief 사용자가 대여한 자전거 목록 반환
 * 
 * @return 자전거 객체 포인터들의 벡터
 */
vector<Bicycle*> User::getRentalBicycleList() const { return _rentalBicycleList; }

/**
 * @brief 대여한 자전거를 사용자 자전거 목록에 추가
 * 
 * @param bicycle 대여한 자전거 객체 포인터
 */
void User::setRentalBicycleList(Bicycle* bicycle) { _rentalBicycleList.push_back(bicycle); }