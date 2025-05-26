#include <iostream>
using namespace std;
#include "LogoutUI.h"
#include "LogoutControl.h"
LogoutUI::LogoutUI(LogoutControl *control) : control(control) {}
void LogoutUI::logout()
{
    cout << control->logout() << endl;
}