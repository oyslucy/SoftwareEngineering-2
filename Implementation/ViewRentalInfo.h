#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include "UserCollection.h"
#include "Bicycle.h"
#include <string>
using namespace std;

/**
 * @brief 자전거정보조회 기능을 담당하는 클래스
 */
class ViewRentalInfo {
public:
    vector<pair<string, string>> viewRentalInfo(UserCollection& userCollection);
};

#endif