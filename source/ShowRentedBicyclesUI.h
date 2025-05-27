#pragma once
#include <iostream>
using namespace std;
#include "ShowRentedBicyclesControl.h"
class ShowRentedBicyclesControl;
class ShowRentedBicyclesUI // ShowRentedBicyclesUI class that provides the user interface for showing rented bicycles
{
    ShowRentedBicyclesControl *control;

public:
    ShowRentedBicyclesUI(ShowRentedBicyclesControl *control); // Constructor that initializes the UI with a ShowRentedBicyclesControl
    void showRentedBicycles();                                // Method to display the rented bicycles by retrieving them from the control and printing their information
};
