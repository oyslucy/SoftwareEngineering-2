#include "ViewRentalInfoUI.h"

ViewRentalInfoUI::ViewRentalInfoUI(ViewRentalInfo& viewRentalInfo): _viewRentalInfo(viewRentalInfo) {}

void ViewRentalInfoUI::requestViewRentalInfo(ofstream& out_fp, UserCollection& userCollection) {
    out_fp << "5.1. 자전거 대여 리스트\n";

    vector<pair<string, string>> rentalList = _viewRentalInfo.viewRentalInfo(userCollection);

    sort(rentalList.begin(), rentalList.end());
    for(int i = 0; i < rentalList.size(); i++) {
        out_fp << "> " << rentalList[i].first << " " << rentalList[i].second << "\n";
    } out_fp << "\n";
}