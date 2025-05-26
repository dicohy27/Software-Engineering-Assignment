#include "UserCollection.h"
UserCollection::UserCollection()
{
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
User *UserCollection::getCorrespondUser(string id)
{
    for (int i = 0; i < userCount; ++i)
    {
        if (users[i]->getId() == id)
        {
            return users[i];
        }
    }
    return nullptr; // Return nullptr if no user found
}