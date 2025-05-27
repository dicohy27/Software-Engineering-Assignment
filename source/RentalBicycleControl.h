#pragma once
#include "BicycleCollection.h"
#include "RentalBicycleUI.h"
#include "CurrentUser.h"
#include <array>
class RentalBicycleUI;
class RentalBicycleControl // Control class for managing the rental of bicycles
{
    RentalBicycleUI *ui;
    BicycleCollection *registeredCollection;
    CurrentUser *currentUser;

public:
    RentalBicycleControl(BicycleCollection *collection, CurrentUser *user); // Constructor that initializes the control with a BicycleCollection and CurrentUser
    RentalBicycleUI *getUI();                                               // Returns the UI associated with this control
    array<string, 2> rentalBicycle(string bicycleId);                       // Method to rent a bicycle by its ID, returning an array containing the bicycle's ID and product name if successful, or an empty array if not found
};