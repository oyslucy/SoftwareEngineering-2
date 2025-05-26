#ifndef EXIT_UI_H
#define EXIT_UI_H

#include "Exit.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

/**
 * @brief ExitUI 클래스
 * 이 클래스는 프로그램 종료 인터페이스를 제공
 */
class ExitUI {
private:
    Exit exit; /// Exit 객체를 사용하여 프로그램 종료 기능을 관리
public:
    ExitUI(); /// 생성자
    void exitProgram(ofstream& out_fp); /// 프로그램을 종료하는 함수
};

#endif