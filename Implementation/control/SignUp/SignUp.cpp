#include "../SignUp/SignUp.h"

/**
 * @brief 전달받은 정보를 바탕으로 새로운 일반 사용자 등록 후 등록 정보 반환
 * 
 * @param id 등록할 사용자 ID
 * @param password 등록할 사용자 비밀번호
 * @param phoneNumber 등록할 사용자 전화번호
 * @param userCollection 사용자 정보를 저장할 사용자 컬렉션
 * @return 등록된 사용자 ID 비밀번호 전화번호를 포함한 튜플 반환
 */
tuple<string, string, string> SignUp::signup(const string& id, const string& password, const string& phoneNumber, UserCollection& userCollection) {
    userCollection.addUser(id, password, phoneNumber, Member); // signup 하는 appUser는 member
    return make_tuple(id, password, phoneNumber);
}