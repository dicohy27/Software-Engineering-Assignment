#pragma once
#include "User.h"
class CurrentUser // CurrentUser class that manages the currently logged-in user
{
    User *currentUser;

public:
    User *getCurrentUser();          // Returns the currently logged-in user
    void setCurrentUser(User *user); // Sets the currently logged-in user
    string eraseCurrentUser();       // Erases the currently logged-in user and returns their ID
};
