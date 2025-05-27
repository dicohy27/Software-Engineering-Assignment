#include "RentalBicycleUI.h"
RentalBicycleUI::RentalBicycleUI(RentalBicycleControl *control) : control(control) {}
void RentalBicycleUI::rentalBicycle()
{
    string bicycleId;
    cin >> bicycleId;
    auto bicycleInfo = control->rentalBicycle(bicycleId);
    cout << bicycleInfo[0] << ' ' << bicycleInfo[1] << endl;
}