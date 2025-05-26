#pragma once
#include <string>
#include "LogoutControl.h"
#include <iostream>
using namespace std;

using namespace std;
class LogoutControl;
class LogoutUI
{
    LogoutControl *control;

public:
    LogoutUI(LogoutControl *control);

    void logout();
};