#include "ExitUI.h"

/**
 * @brief ExitUI 클래스 생성자
 * 이 클래스는 Exit 객체를 초기화
 */
ExitUI::ExitUI(): exit() {}

/**
 * @brief 프로그램을 종료하는 함수
 * 사용자에게 프로그램 종료 메시지를 출력하고, 프로그램을 종료
 */
void ExitUI::exitProgram(ofstream& out_fp) {
    if(exit.exit() == true) {
        out_fp << "6.1. 종료\n";    
    }
}