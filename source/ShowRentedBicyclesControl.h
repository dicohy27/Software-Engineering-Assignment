#pragma once
#include "ShowRentedBicyclesUI.h"
#include "CurrentUser.h"
class ShowRentedBicyclesUI;
class ShowRentedBicyclesControl
{
    ShowRentedBicyclesUI *ui;
    CurrentUser *currentUser;

public:
    ShowRentedBicyclesControl(CurrentUser *user);
    ShowRentedBicyclesUI *getUI();
    vector<array<string, 2>> getRentedBicycleInfos();
};