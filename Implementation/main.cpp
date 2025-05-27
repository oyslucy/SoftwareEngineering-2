#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <string>

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "SignUpUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "RegisterBicycleUI.h"
#include "RentalBicycleUI.h"
#include "ViewRentalInfoUI.h"
#include "ExitUI.h"

#include "SignUp.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterBicycle.h"
#include "RentalBicycle.h"
#include "ViewRentalInfo.h"
#include "Exit.h"

#include "Bicycle.h"
#include "BicycleCollection.h"
#include "User.h"
#include "UserCollection.h"

using namespace std;

void doTask(ifstream& in_fp, ofstream& out_fp);

/**
 * @brief 공유 자전거 시스템의 메인 함수
 * 
 * 입력 파일(input.txt)로부터 명령어를 읽고, 명령어에 따라 사용자 등록, 로그인, 자전거 등록 및 대여 등을 수행한 후
 * 결과를 출력 파일(output.txt)에 기록한다
 */
int main() {
    ifstream in_fp;
    ofstream out_fp;
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask(in_fp, out_fp);

    out_fp.close();
    in_fp.close();
    return (0);
}

/**
 * @brief 입력 파일을 기반으로 명령어를 파싱하고 해당 기능을 수행하는 메인 로직
 * 
 * @param in_fp 명령어를 읽어올 입력 스트림
 * @param out_fp 처리 결과를 기록할 출력 스트림
 */
void doTask(ifstream& in_fp, ofstream& out_fp) {
    // properties
    int menu_level_1 = 0, menu_level_2 = 0, is_program_exit = 0;

    // control
    SignUp signup;
    Login login;
    Logout logout;
    RegisterBicycle registerBicycle;
    RentalBicycle rentalBicycle;
    ViewRentalInfo ViewRentalInfo;

    // entity
    UserCollection userCollection;
    BicycleCollection bicycleCollection;

    // boundary
    SignUpUI signupUI(signup);
    LoginUI loginUI(login);
    LogoutUI logoutUI(logout);
    RegisterBicycleUI registerBicycleUI(registerBicycle);
    RentalBicycleUI rentalBicycleUI(rentalBicycle);
    ViewRentalInfoUI viewRentalInfoUI(ViewRentalInfo);
    ExitUI exitUI;

    // init
    userCollection.addUser("admin", "admin");

    while (!is_program_exit) {
        in_fp >> menu_level_1 >> menu_level_2;

        switch(menu_level_1) {
            case 1:
                switch(menu_level_2) {
                    case 1: // 1.1. 회원가입 > [ID] [PW] [PN]
                        signupUI.startInterface(out_fp);
                        signupUI.inputInformation(in_fp, out_fp, userCollection);
                        break;
                } break;

            case 2:
                switch(menu_level_2) {
                    case 1: // 2.1. 로그인 > [ID] [PW]
                        loginUI.startInterface(out_fp);
                        loginUI.inputInformation(in_fp, out_fp, userCollection);
                        break ;
                    case 2: // 2.2. 로그아웃 > [ID]
                        logoutUI.startInterface(out_fp);
                        logoutUI.logoutRequest(out_fp, userCollection);
                        break;
                } break;

            case 3:
                switch(menu_level_2) {
                    case 1:  // 3.1. 자전거 등록 > [ID] [name]
                        registerBicycleUI.startInterface(out_fp);
                        registerBicycleUI.inputBicycleInformation(in_fp, out_fp, userCollection, bicycleCollection);
                        break;
                } break;
            
            case 4:
                switch(menu_level_2) {
                    case 1: // 4.1. 자전거 대여 > [ID]
                        rentalBicycleUI.startInterface(out_fp);
                        rentalBicycleUI.rentalRequest(in_fp, out_fp, userCollection, bicycleCollection);
                        break;
                } break;

            case 5:
                switch(menu_level_2) {
                    case 1: // 5.1. 자전거 대여 리스트 {> [ID] [name]}*
                        viewRentalInfoUI.startInterface(out_fp);
                        viewRentalInfoUI.requestViewRentalInfo(out_fp, userCollection);
                        break;
                } break;

            case 6:
                switch(menu_level_2) {
                    case 1: // 6.1. 종료
                        exitUI.exitProgram(out_fp);                  
                        is_program_exit = 1;
                        break; 
                }
        }
    }
}