#pragma once
#include <string>
#include <iostream>
#include "LoginControl.h"
using namespace std;
class LoginControl;
class LoginUI // LoginUI class that provides the user interface for logging in
{
    LoginControl *control;

public:
    LoginUI(LoginControl *control); // Constructor that initializes the UI with a LoginControl

    void login(); // Method to handle user login by reading input and calling the control's login method
};