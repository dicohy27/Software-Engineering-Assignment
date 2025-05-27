#include "ShowRentedBicyclesUI.h"
ShowRentedBicyclesUI::ShowRentedBicyclesUI(ShowRentedBicyclesControl *control) : control(control) {}
void ShowRentedBicyclesUI::showRentedBicycles()
{
    auto bicycles = control->getRentedBicycles();
    int count = control->getRentedBicycleCount();
    cout << "5.1. 자전거 대여 리스트" << endl;
    for (int i = 0; i < count; ++i)
    {
        if (bicycles[i] != nullptr)
        {
            auto bicycleInfo = bicycles[i]->getBicycleInfo();
            cout << "\> " << bicycleInfo[0] << ' ' << bicycleInfo[1] << endl;
        }
    }
    cout << endl;
}