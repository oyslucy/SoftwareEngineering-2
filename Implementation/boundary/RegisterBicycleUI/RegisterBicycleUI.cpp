#include "RegisterBicycleUI.h"

/**
 * @brief RegisterBicycleUI 클래스 생성자
 * 
 * @param registerBicycle 자전거 등록 로직을 처리하는 RegisterBicycle 객체 참조
 */
RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& registerBicycle) : _registerBicycle(registerBicycle) {}

/**
 * @brief 자전거 정보를 입력받아 등록을 요청하고 결과 출력
 * 
 * @param in_fp 자전거 ID 및 제품명을 입력받는 입력 스트림
 * @param out_fp 자전거 등록 결과를 출력할 스트림
 * @param userCollection 사용자 인증 및 권한 확인을 위한 사용자 컬렉션
 * @param bicycleCollection 등록할 자전거를 저장할 자전거 컬렉션
 */
void RegisterBicycleUI::inputBicycleInformation(ifstream& in_fp, ofstream& out_fp, UserCollection& userCollection, BicycleCollection& bicycleCollection) {
    string id, productName;
    in_fp >> id >> productName;

    pair<string, string> registeredBicycleInfo = _registerBicycle.registerBicycle(id, productName, userCollection, bicycleCollection);
    out_fp << "3.1. 자전거 등록\n";
    out_fp << "> " << registeredBicycleInfo.first << " " << registeredBicycleInfo.second << "\n\n";
}