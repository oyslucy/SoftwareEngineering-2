#include "RentalBicycleUI.h"

/**
 * @brief RentalBicycleUI 클래스 생성자
 * 
 * @param rentalBicycle 자전거 대여 로직을 처리하는 RentalBicycle 객체 참조
 */
RentalBicycleUI::RentalBicycleUI(RentalBicycle& rentalBicycle): _rentalBicycle(rentalBicycle) {}

/**
 * @brief 자전거 대여 요청을 처리하고 결과 출력
 * 
 * @param in_fp 자전거 ID를 입력받는 입력 스트림
 * @param out_fp 대여 결과 출력 스트림
 * @param userCollection 현재 로그인된 사용자를 포함한 사용자 컬렉션
 * @param bicycleCollection 대여 대상 자전거가 포함된 자전거 컬렉션
 */
void RentalBicycleUI::rentalRequest(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection, BicycleCollection& bicycleCollection) {
    string id;
    in_fp >> id;

    pair<string, string> rentalBicycleInformation = _rentalBicycle.rentalBicycle(id, userCollection, bicycleCollection);

    if(!rentalBicycleInformation.first.empty() && !rentalBicycleInformation.first.empty()) {
        out_fp << "4.1. 자전거 대여\n";
        out_fp << "> " << rentalBicycleInformation.first << " " << rentalBicycleInformation.second << "\n\n";
    }
}