#pragma once
#include "User.h"
class CurrentUser
{
    User *currentUser;

public:
    User *getCurrentUser();
    void setCurrentUser(User *user);
    string eraseCurrentUser();
};
