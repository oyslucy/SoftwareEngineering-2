#ifndef USER_H
#define USER_H

# include "Bicycle.h"
#include <string>
#include <vector>
#include <tuple>
using namespace std;

/**
 * @brief 사용자 역할 정의 enum
 */
enum Role {
    Member,
    Admin
};

/**
 * @brief 사용자 정보를 저장하고 관련 기능을 제공하는 클래스
 */
class User {
private:
    string _id;                               ///< 사용자 ID
    string _password;                         ///< 사용자 비밀번호
    string _phoneNumber;                      ///< 사용자 전화번호
    Role _role;                               ///< 사용자 역할 (Member 또는 Admin)
    bool _loginStatus;                        ///< 로그인 상태 여부
    vector<Bicycle*> _rentalBicycleList;      ///< 대여한 자전거 목록
    
public:
    User(const string& id, const string& password, const string& phoneNumber); // member user

    User(const string& id, const string& password); // admin user

    tuple<string, string, Role> getUserDetail() const;

    bool getLoginStatus() const;

    void setLoginUser();

    void unsetLoginUser();

    vector<Bicycle*> getRentalBicycleList() const;

    void setRentalBicycleList(Bicycle* bicycle);
};

#endif