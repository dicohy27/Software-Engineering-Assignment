#include "LogoutUI.h"
LogoutUI::LogoutUI(LogoutControl *control) : control(control) {}
void LogoutUI::logout()
{
    cout << "2.2. 로그아웃" << endl
         << "> ";
    cout << control->logout() << endl;
    cout << endl;
}