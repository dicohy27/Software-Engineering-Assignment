#pragma once
#include <string>
#include "CurrentUser.h"
#include "LogoutUI.h"
class LogoutUI;
class LogoutControl
{
    LogoutUI *ui;
    CurrentUser *currentUser;

public:
    LogoutControl(CurrentUser *currentUser);
    LogoutUI *getUI();
    string logout();
};