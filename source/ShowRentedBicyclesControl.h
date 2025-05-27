#pragma once
#include "ShowRentedBicyclesUI.h"
#include "CurrentUser.h"
#include "Bicycle.h"
class ShowRentedBicyclesUI;
class ShowRentedBicyclesControl
{
    ShowRentedBicyclesUI *ui;
    CurrentUser *currentUser;

public:
    ShowRentedBicyclesControl(CurrentUser *currentUser);
    ShowRentedBicyclesUI *getUI();
    Bicycle **getRentedBicycles();
    int getRentedBicycleCount();
};