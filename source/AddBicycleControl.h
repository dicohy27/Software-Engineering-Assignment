#pragma once
#include <string>
#include "BicycleCollection.h"
#include "AddBicycleUI.h"
#include "Bicycle.h"
using namespace std;
class AddBicycleUI;
class AddBicycleControl // Control class for adding new bicycles
{
    AddBicycleUI *ui;
    BicycleCollection *registeredCollection;

public:
    AddBicycleControl(BicycleCollection *collection);     // Constructor that initializes the control with a BicycleCollection
    AddBicycleUI *getUI();                                // Returns the UI associated with this control
    void createNewBicycle(string id, string productName); // Method to create a new bicycle and add it to the collection
};