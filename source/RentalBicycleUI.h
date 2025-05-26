#pragma once
#include <iostream>
#include "RentalBicycleControl.h"
using namespace std;
class RentalBicycleControl;
class RentalBicycleUI
{
    RentalBicycleControl *control;

public:
    RentalBicycleUI(RentalBicycleControl *control);
    void rentalBicycle();
};