#pragma once
#include <string>
#include "UserCollection.h"
#include "RegisterUI.h"
#include "User.h"
using namespace std;
class RegisterUI;
class RegisterControl
{
    RegisterUI *ui;
    UserCollection *registeredUsers;

public:
    RegisterControl(UserCollection *registeredUsers);
    RegisterUI *getUI();
    void createNewUser(string id, string password, string phoneNumber);
};