#pragma once
#include <string>
#include <iostream>
#include "AddBicycleControl.h"
using namespace std;
class AddBicycleControl;
class AddBicycleUI // User Interface class for adding new bicycles
{
    AddBicycleControl *control;

public:
    AddBicycleUI(AddBicycleControl *control); // Constructor that initializes the UI with a control object

    void createNewBicycle(); // Method to create a new bicycle by reading input from the user
};