#pragma once
#include "BicycleCollection.h"
#include "RentalBicycleUI.h"
#include "CurrentUser.h"
#include <array>
class RentalBicycleUI;
class RentalBicycleControl
{
    RentalBicycleUI *ui;
    BicycleCollection *registeredCollection;
    CurrentUser *currentUser;

public:
    RentalBicycleControl(BicycleCollection *collection, CurrentUser *user);
    RentalBicycleUI *getUI();
    array<string, 2> rentalBicycle(string bicycleId);
};