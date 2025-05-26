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