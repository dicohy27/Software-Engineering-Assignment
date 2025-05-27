#include "UserCollection.h"
UserCollection::UserCollection()
{
    // Initialize the user collection with a default admin user
    User *admin = new User("admin", "admin", "x");
    users[userCount++] = admin;
}
void UserCollection::addNewUser(User *newUser)
{
    if (userCount < 100)
    {
        users[userCount++] = newUser;
    }
}
User *UserCollection::getCorrespondUser(string id, string password)
{
    for (int i = 0; i < userCount; ++i)
    {
        if (users[i]->isEqual(id, password))
        {
            return users[i];
        }
    }
    return nullptr; // Return nullptr if no user found
}