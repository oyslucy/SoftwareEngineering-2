#include "Logout.h"

/**
 * @brief 현재 로그인된 사용자를 로그아웃 상태로 변경하고 사용자 ID 반환
 * 
 * @param userCollection 현재 로그인된 사용자를 포함한 사용자 컬렉션
 * @return 로그아웃된 사용자 ID 반환 로그인된 사용자가 없을 경우 빈 문자열 반환
 */
string Logout::logout(UserCollection& userCollection) {
    User* user = userCollection.getCurrentUser();
    if(user){
        user->unsetLoginUser();
        return (get<0>(user->getUserDetail()));
    }
    return ("");
}