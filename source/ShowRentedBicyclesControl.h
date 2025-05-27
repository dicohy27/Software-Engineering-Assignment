#pragma once
#include "ShowRentedBicyclesUI.h"
#include "CurrentUser.h"
#include "Bicycle.h"
class ShowRentedBicyclesUI;
class ShowRentedBicyclesControl // Control class for showing rented bicycles
{
    ShowRentedBicyclesUI *ui;
    CurrentUser *currentUser;

public:
    ShowRentedBicyclesControl(CurrentUser *currentUser); // Constructor that initializes the control with a CurrentUser
    ShowRentedBicyclesUI *getUI();                       // Returns the UI associated with this control
    Bicycle **getRentedBicycles();                       // Retrieves the bicycles rented by the current user
    int getRentedBicycleCount();                         // Returns the count of bicycles rented by the current user
};