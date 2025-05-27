#include "ShowRentedBicyclesUI.h"
ShowRentedBicyclesUI::ShowRentedBicyclesUI(ShowRentedBicyclesControl *control) : control(control) {}
void ShowRentedBicyclesUI::showRentedBicycles()
{
    auto bicycles = control->getRentedBicycles();
    int count = control->getRentedBicycleCount();
    for (int i = 0; i < count; ++i)
    {
        if (bicycles[i] != nullptr)
        {
            auto bicycleInfo = bicycles[i]->getBicycleInfo();
            cout << bicycleInfo[0] << ' ' << bicycleInfo[1] << endl;
        }
    }
}