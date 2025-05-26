#include "ShowRentedBicyclesControl.h"
ShowRentedBicyclesControl::ShowRentedBicyclesControl(CurrentUser *user)
    : currentUser(user)
{
    ui = new ShowRentedBicyclesUI(this);
}
ShowRentedBicyclesUI *ShowRentedBicyclesControl::getUI()
{
    return ui;
}
vector<array<string, 2>> ShowRentedBicyclesControl::getRentedBicycleInfos()
{
    User *user = currentUser->getCurrentUser();
    auto bicycles = user->getRentedBicycles();
    return bicycles.getAllBicycleInfos();
}