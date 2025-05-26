#pragma once
#include <string>
#include "BicycleCollection.h"
#include "AddBicycleUI.h"
#include "Bicycle.h"
using namespace std;
class AddBicycleUI;
class AddBicycleControl
{
    AddBicycleUI *ui;
    BicycleCollection *registeredCollection;

public:
    AddBicycleControl(BicycleCollection *collection);
    AddBicycleUI *getUI();
    void createNewBicycle(string id, string productName);
};