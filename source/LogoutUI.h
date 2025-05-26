#pragma once
#include <string>
using namespace std;
class LogoutControl;
class LogoutUI
{
    LogoutControl *control;

public:
    LogoutUI(LogoutControl *control);

    void logout();
};