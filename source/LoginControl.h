#pragma once
#include "LoginUI.h"
#include "UserCollection.h"
#include "CurrentUser.h"
class LoginUI;
class LoginControl // LoginControl class that manages the login process
{
    LoginUI *ui;
    UserCollection *registeredUsers;
    CurrentUser *currentUser;

public:
    LoginControl(UserCollection *registeredUsers, CurrentUser *currentUser); // Constructor that initializes the control with a UserCollection and CurrentUser
    LoginUI *getUI();                                                        // Returns the UI associated with this control
    void login(string id, string password);                                  // Method to log in a user by checking their ID and password
};