#ifndef RENTED_BICYCLE_INFO_UI_H
# define RENTED_BICYCLE_INFO_UI_H

#include "ViewRentalInfo.h"
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

/**
 * @brief 자전거 정보조회 UI을 담당하는 클래스
 */
class ViewRentalInfoUI {
private:
    ViewRentalInfo& _viewRentalInfo;

public:
    ViewRentalInfoUI(ViewRentalInfo& viewRentalInfo);

    void startInterface(ofstream& out_fp);

    void requestViewRentalInfo(ofstream& out_fp, UserCollection& userCollection);
};

#endif