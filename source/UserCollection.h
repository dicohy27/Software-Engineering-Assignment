#pragma once
#include "User.h"
class UserCollection
{
    User *users[100];
    int userCount = 0;

public:
    UserCollection();
    void addNewUser(User *newUser);
    User *getCorrespondUser(string id, string password);
};