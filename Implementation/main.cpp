#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <string>

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "./boundary/SignUpUI/SignUpUI.h"
#include "./boundary/LoginUI/LoginUI.h"
#include "./boundary/LogoutUI/LogoutUI.h"
#include "./boundary/RegisterBicycleUI/RegisterBicycleUI.h"
#include "./boundary/RentalBicycleUI/RentalBicycleUI.h"
#include "./boundary/ViewRentalInfoUI/ViewRentalInfoUI.h"

#include "./control/SignUp/SignUp.h"
#include "./control/Login/Login.h"
#include "./control/Logout/Logout.h"
#include "./control/RegisterBicycle/RegisterBicycle.h"
#include "./control/RentalBicycle/RentalBicycle.h"
#include "./control/ViewRentalInfo/ViewRentalInfo.h"

#include "./entity/Bicycle/Bicycle.h"
#include "./entity/BicycleCollection/BicycleCollection.h"
#include "./entity/User/User.h"
#include "./entity/UserCollection/UserCollection.h"

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

    // init
    userCollection.addUser("admin", "admin");

    while (!is_program_exit) {
        in_fp >> menu_level_1 >> menu_level_2;

        switch(menu_level_1) {
            case 1:
                switch(menu_level_2) {
                    case 1: // 1.1. 회원가입 > [ID] [PW] [PN]
                        signupUI.inputInformation(in_fp, out_fp, userCollection);
                        break;
                } break;

            case 2:
                switch(menu_level_2) {
                    case 1: // 2.1. 로그인 > [ID] [PW]
                        loginUI.inputInformation(in_fp, out_fp, userCollection);
                        break ;
                    case 2: // 2.2. 로그아웃 > [ID]
                        logoutUI.logoutRequest(out_fp, userCollection);
                        break;
                } break;

            case 3:
                switch(menu_level_2) {
                    case 1:  // 3.1. 자전거 등록 > [ID] [name]
                        registerBicycleUI.inputBicycleInformation(in_fp, out_fp, userCollection, bicycleCollection);
                        break;
                } break;
            
            case 4:
                switch(menu_level_2) {
                    case 1: // 4.1. 자전거 대여 > [ID]
                        rentalBicycleUI.rentalRequest(in_fp, out_fp, userCollection, bicycleCollection);
                        break;
                } break;

            case 5:
                switch(menu_level_2) {
                    case 1: // 5.1. 자전거 대여 리스트 {> [ID] [name]}*
                        viewRentalInfoUI.requestViewRentalInfo(out_fp, userCollection);
                        break;
                } break;

            case 6:
                switch(menu_level_2) {
                    case 1: // 6.1. 종료
                        out_fp << "6.1. 종료";
                        is_program_exit = 1;
                        break; 
                }
        }
    }
}