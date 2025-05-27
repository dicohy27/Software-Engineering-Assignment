#include "AddBicycleUI.h"
AddBicycleUI::AddBicycleUI(AddBicycleControl *control) : control(control) {}
void AddBicycleUI::createNewBicycle()
{
    string id, productName;
    cin >> id >> productName;
    control->createNewBicycle(id, productName);
    cout << id << productName << endl;
}