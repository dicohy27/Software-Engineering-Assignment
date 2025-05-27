#include "User.h"

User::User(string id, string password, string phoneNumber)
    : id(id), password(password), phoneNumber(phoneNumber) {}
bool User::isEqual(string id, string password)
{
    return this->id == id && this->password == password;
}
void User::addRentedBicycle(Bicycle *newBicycle)
{
    rentedBicycles.addNewBicycle(newBicycle);
}
BicycleCollection User::getRentedBicycles()
{
    return rentedBicycles;
}
string User::getId()
{
    return id;
}