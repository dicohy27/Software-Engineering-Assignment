#pragma once
#include "User.h"
class UserCollection // UserCollection class that manages a collection of users
{
    User *users[100];
    int userCount = 0;

public:
    UserCollection();                                    // Constructor that initializes the user collection
    void addNewUser(User *newUser);                      // Adds a new user to the collection
    User *getCorrespondUser(string id, string password); // Retrieves a user by their ID and password
};