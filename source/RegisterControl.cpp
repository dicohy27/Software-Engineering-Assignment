#include "RegisterControl.h"

RegisterControl::RegisterControl(UserCollection *registeredUsers)
    : registeredUsers(registeredUsers)
{
    ui = new RegisterUI(this);
}
RegisterUI *RegisterControl::getUI()
{
    return ui;
}
void RegisterControl::createNewUser(string id, string password, string phoneNumber)
{
    User *newUser = new User(id, password, phoneNumber);
    registeredUsers->addNewUser(newUser);
};