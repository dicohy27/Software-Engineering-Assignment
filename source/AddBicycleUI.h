#pragma once
#include <string>
#include <iostream>
#include "AddBicycleControl.h"
using namespace std;
class AddBicycleControl;
class AddBicycleUI
{
    AddBicycleControl *control;

public:
    AddBicycleUI(AddBicycleControl *control);

    void createNewBicycle();
};