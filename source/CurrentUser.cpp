#include "CurrentUser.h"
User *CurrentUser::getCurrentUser()
{
    return currentUser;
}
void CurrentUser::setCurrentUser(User *user)
{
    currentUser = user;
}
string CurrentUser::eraseCurrentUser()
{
    if (currentUser)
    {
        string id = currentUser->getId();
        currentUser = nullptr; // Clear the current user
        return id;             // Return the ID of the erased user
    }
    return ""; // Return an empty string if no user was set
}