#include "ShowRentedBicyclesUI.h"
ShowRentedBicyclesUI::ShowRentedBicyclesUI(ShowRentedBicyclesControl *control) : control(control) {}
void ShowRentedBicyclesUI::showRentedBicycles()
{
    auto bicycleInfos = control->getRentedBicycleInfos();
    for (auto &item : bicycleInfos)
    {
        cout << item[0] << ' ' << item[1] << endl;
    }
}