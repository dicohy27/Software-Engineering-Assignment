#include "ShowRentedBicyclesControl.h"
ShowRentedBicyclesControl::ShowRentedBicyclesControl(CurrentUser *currentUser)
    : currentUser(currentUser)
{
    ui = new ShowRentedBicyclesUI(this);
}
ShowRentedBicyclesUI *ShowRentedBicyclesControl::getUI()
{
    return ui;
}
Bicycle **ShowRentedBicyclesControl::getRentedBicycles()
{
    User *user = currentUser->getCurrentUser();
    auto bicycleCollection = user->getRentedBicycles();
    return bicycleCollection.getBicycles();
}
int ShowRentedBicyclesControl::getRentedBicycleCount()
{
    User *user = currentUser->getCurrentUser();
    auto bicycles = user->getRentedBicycles();
    return bicycles.getBicycleCount();
}