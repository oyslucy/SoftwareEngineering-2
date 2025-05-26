#include "Login.h"

/**
 * @brief 입력된 ID와 비밀번호로 사용자 인증을 수행하고 로그인 상태로 설정
 * 
 * @param id 사용자 ID
 * @param password 사용자 비밀번호
 * @param userCollection 사용자 목록을 포함하는 컬렉션 객체
 * @return 로그인 성공 시 ID와 비밀번호 쌍 반환 실패 시 빈 문자열 쌍 반환
 */
pair<string, string> Login::login(const string& id, const string& password, UserCollection& userCollection) {
    vector<User*>& users = userCollection.getUser();
    pair<string, string> loginUserDetail = make_pair(id, password);
    
    for (User* user : users) { 
        if (get<0>(user->getUserDetail()) == loginUserDetail.first && get<1>(user->getUserDetail()) == loginUserDetail.second) {
            user->setLoginUser();
        
            return loginUserDetail;
        }
    }
    return make_pair("", "");
}