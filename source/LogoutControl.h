#pragma once
#include <string>
#include "CurrentUser.h"
#include "LogoutUI.h"
class LogoutUI;
class LogoutControl // LogoutControl class that manages the logout process
{
    LogoutUI *ui;
    CurrentUser *currentUser;

public:
    LogoutControl(CurrentUser *currentUser); // Constructor that initializes the control with a CurrentUser
    LogoutUI *getUI();                       // Returns the UI associated with this control
    string logout();                         // Method to log out the current user, erasing their session and returning their ID
};