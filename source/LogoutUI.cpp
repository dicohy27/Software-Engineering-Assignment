#include "LogoutUI.h"
LogoutUI::LogoutUI(LogoutControl *control) : control(control) {}
void LogoutUI::logout()
{
    cout << control->logout() << endl;
}