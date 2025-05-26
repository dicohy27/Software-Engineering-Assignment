#pragma once
#include "LoginUI.h"
#include "UserCollection.h"
#include "CurrentUser.h"
class LoginUI;
class LoginControl
{
    LoginUI *ui;
    UserCollection *registeredUsers;
    CurrentUser *currentUser;

public:
    LoginControl(UserCollection *registeredUsers, CurrentUser *currentUser);
    LoginUI *getUI();
    void login(string id, string password);
};