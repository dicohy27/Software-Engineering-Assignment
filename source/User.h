#pragma once
#include <string>
#include "BicycleCollection.h"
using namespace std;
class User // User class representing a user with an ID, password, phone number, and a collection of rented bicycles
{
    string id;
    string password;
    string phoneNumber;
    BicycleCollection rentedBicycles;

public:
    User(string id, string password, string phoneNumber); // Constructor that initializes the user with an ID, password, and phone number
    bool isEqual(string id, string password);             // Checks if the user's ID and password match the given values
    void addRentedBicycle(Bicycle *newBicycle);           // Adds a new bicycle to the user's rented bicycles collection
    BicycleCollection getRentedBicycles();                // Returns the collection of bicycles rented by the user
    string getId();                                       // Returns the user's ID
};