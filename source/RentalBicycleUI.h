#pragma once
#include <iostream>
#include "RentalBicycleControl.h"
using namespace std;
class RentalBicycleControl;
class RentalBicycleUI // RentalBicycleUI class that provides the user interface for renting bicycles
{
    RentalBicycleControl *control;

public:
    RentalBicycleUI(RentalBicycleControl *control); // Constructor that initializes the UI with a RentalBicycleControl
    void rentalBicycle();                           // Method to handle bicycle rental by reading input and calling the control's rentalBicycle method
};