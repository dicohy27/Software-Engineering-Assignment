#include "AddBicycleControl.h"
AddBicycleControl::AddBicycleControl(BicycleCollection *collection)
    : registeredCollection(collection)
{
    ui = new AddBicycleUI(this);
}
void AddBicycleControl::createNewBicycle(string id, string productName)
{
    Bicycle *newBicycle = new Bicycle(id, productName);
    registeredCollection->addNewBicycle(newBicycle);
}
AddBicycleUI *AddBicycleControl::getUI()
{
    return ui;
}