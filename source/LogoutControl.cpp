#include "LogoutControl.h"
LogoutControl::LogoutControl(CurrentUser *currentUser) : currentUser(currentUser)
{
    ui = new LogoutUI(this);
}
LogoutUI *LogoutControl::getUI()
{
    return ui;
}
string LogoutControl::logout()
{
    string userId = currentUser->eraseCurrentUser();
    return userId;
}