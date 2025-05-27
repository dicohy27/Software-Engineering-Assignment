#include "LoginControl.h"

LoginControl::LoginControl(UserCollection *registeredUsers, CurrentUser *currentUser) : registeredUsers(registeredUsers), currentUser(currentUser)
{
    ui = new LoginUI(this);
}
LoginUI *LoginControl::getUI()
{
    return ui;
}
void LoginControl::login(string id, string password)
{
    User *user = registeredUsers->getCorrespondUser(id, password);
    currentUser->setCurrentUser(user);
}