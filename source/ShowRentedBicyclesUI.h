#pragma once
#include <iostream>
using namespace std;
#include "ShowRentedBicyclesControl.h"
class ShowRentedBicyclesControl;
class ShowRentedBicyclesUI
{
    ShowRentedBicyclesControl *control;

public:
    ShowRentedBicyclesUI(ShowRentedBicyclesControl *control);
    void showRentedBicycles();
};
