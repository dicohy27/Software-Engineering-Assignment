#pragma once
#include <string>
#include "UserCollection.h"
#include "RegisterUI.h"
#include "User.h"
using namespace std;
class RegisterUI;
class RegisterControl // Control class for user registration
{
    RegisterUI *ui;
    UserCollection *registeredUsers;

public:
    RegisterControl(UserCollection *registeredUsers);                   // Constructor that initializes the control with a UserCollection
    RegisterUI *getUI();                                                // Returns the UI associated with this control
    void createNewUser(string id, string password, string phoneNumber); // Method to create a new user and add them to the collection
};