#pragma once
#include <string>
#include <iostream>
#include "LoginControl.h"
using namespace std;
class LoginControl;
class LoginUI
{
    LoginControl *control;

public:
    LoginUI(LoginControl *control);

    void login();
};