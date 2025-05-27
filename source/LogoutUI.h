#pragma once
#include <string>
#include "LogoutControl.h"
#include <iostream>
using namespace std;
class LogoutControl;
class LogoutUI // LogoutUI class that provides the user interface for logging out
{
    LogoutControl *control;

public:
    LogoutUI(LogoutControl *control); // Constructor that initializes the UI with a LogoutControl

    void logout(); // Method to handle user logout by reading input and calling the control's logout method
};