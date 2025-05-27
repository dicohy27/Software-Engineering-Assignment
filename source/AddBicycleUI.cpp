#include "AddBicycleUI.h"
AddBicycleUI::AddBicycleUI(AddBicycleControl *control) : control(control) {}
void AddBicycleUI::createNewBicycle()
{
    string id, productName;
    cin >> id >> productName;
    control->createNewBicycle(id, productName);
    cout << "3.1. 자전거 등록" << endl
         << "> ";
    cout << id << ' ' << productName << endl;
    cout << endl;
}