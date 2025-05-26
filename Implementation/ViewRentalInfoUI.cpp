#include "ViewRentalInfoUI.h"

/**
 * @brief ViewRentalInfoUI 클래스 생성자
 * 
 * @param viewRentalInfo 자전거 대여 정보 조회 로직을 처리하는 ViewRentalInfo 객체 참조
 */
ViewRentalInfoUI::ViewRentalInfoUI(ViewRentalInfo& viewRentalInfo): _viewRentalInfo(viewRentalInfo) {}

/**
 * @brief 대여정보 조회 시작 인터페이스 메시지 출력
 * 
 * @param out_fp 대여정보 조회 시작을 알리는 메시지를 출력할 스트림
 */
void ViewRentalInfoUI::startInterface(ofstream& out_fp) {
    out_fp << "5.1. 자전거 대여 리스트\n";
}

/**
 * @brief 현재 로그인된 사용자의 자전거 대여 정보를 조회하고 결과 출력
 * 
 * @param out_fp 대여 정보 리스트 출력 스트림
 * @param userCollection 대여 정보를 포함한 사용자 컬렉션
 */
void ViewRentalInfoUI::requestViewRentalInfo(ofstream& out_fp, UserCollection& userCollection) {
    vector<pair<string, string>> rentalList = _viewRentalInfo.viewRentalInfo(userCollection);

    sort(rentalList.begin(), rentalList.end());
    for(int i = 0; i < rentalList.size(); i++) {
        out_fp << "> " << rentalList[i].first << " " << rentalList[i].second << "\n";
    } out_fp << "\n";
}