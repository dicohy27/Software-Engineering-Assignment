#pragma once
#include <string>
#include "BicycleCollection.h"
using namespace std;
class User
{
    string id;
    string password;
    string phoneNumber;
    BicycleCollection rentedBicycles;

public:
    User(string id, string password, string phoneNumber);
    bool isEqual(string id, string password);
    void addRentedBicycle(Bicycle *newBicycle);
    BicycleCollection getRentedBicycles();
    string getId();
};