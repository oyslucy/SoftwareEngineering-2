#ifndef RENTED_BICYCLE_INFO_UI_H
# define RENTED_BICYCLE_INFO_UI_H

#include "../../control/ViewRentalInfo/ViewRentalInfo.h"
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

class ViewRentalInfoUI {
private:
    ViewRentalInfo& _viewRentalInfo;

public:
    ViewRentalInfoUI(ViewRentalInfo& viewRentalInfo);

    void startInterface(ofstream& out_fp);

    void requestViewRentalInfo(ofstream& out_fp, UserCollection& userCollection);
};

#endif