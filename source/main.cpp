// 헤더 선언
#include <iostream>
#include <fstream>
#include <string.h>
#include "RegisterControl.h"
#include "LoginControl.h"
#include "LogoutControl.h"
#include "AddBicycleControl.h"
#include "RentalBicycleControl.h"
#include "ShowRentedBicyclesControl.h"
#include "QuitControl.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void program_exit();

int main()
{
    freopen(INPUT_FILE_NAME, "r", stdin);
    freopen(OUTPUT_FILE_NAME, "w", stdout);
    doTask();

    return 0;
}

void doTask()
{
    CurrentUser currentUser;
    BicycleCollection registeredBicycles;
    UserCollection registeredUsers;

    // Control 및 Boundary 클래스 인스턴스 생성
    RegisterControl registerControl(&registeredUsers);
    LoginControl loginControl(&registeredUsers, &currentUser);
    LogoutControl logoutControl(&currentUser);
    AddBicycleControl addBicycleControl(&registeredBicycles);
    RentalBicycleControl rentalBicycleControl(&registeredBicycles, &currentUser);
    ShowRentedBicyclesControl showRentedBicyclesControl(&currentUser);
    QuitControl quitControl;

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        cin >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1: // "1.1. 회원가입“ 메뉴 부분
            {
                registerControl.getUI()->createNewUser();

                break;
            }
            }
            break;
        case 2:
        {
            switch (menu_level_2)
            {
            case 1: // "2.1. 종료“ 메뉴 부분
            {
                loginControl.getUI()->login();
                break;
                ;
            }
            case 2: // "2.2. 로그아웃“ 메뉴 부분
            {
                logoutControl.getUI()->logout();
                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. 자전거 등록“ 메뉴 부분
            {
                addBicycleControl.getUI()->createNewBicycle();
                break;
            }
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1: // "4.1. 자전거 대여“ 메뉴 부분
            {
                rentalBicycleControl.getUI()->rentalBicycle();
                break;
            }
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1: // "5.1. 대여중인 자전거 보기“ 메뉴 부분
            {
                showRentedBicyclesControl.getUI()->showRentedBicycles();
                break;
            }
            }
            break;
        }
        case 6:
            switch (menu_level_2)
            {
            case 1:
                quitControl.getUI()->quit();
            }
        }
        }
    }
}