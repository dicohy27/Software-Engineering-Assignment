#include "AddBicycleControl.h"
AddBicycleControl::AddBicycleControl(BicycleCollection *collection)
    : registeredCollection(collection)
{
    ui = new AddBicycleUI(this);
}
AddBicycleUI *AddBicycleControl::getUI()
{
    return ui;
}
void AddBicycleControl::createNewBicycle(string id, string productName)
{
    Bicycle *newBicycle = new Bicycle(id, productName);
    registeredCollection->addNewBicycle(newBicycle);
}
