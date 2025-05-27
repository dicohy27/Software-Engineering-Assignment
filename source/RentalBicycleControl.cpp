#include "RentalBicycleControl.h"
RentalBicycleControl::RentalBicycleControl(BicycleCollection *collection, CurrentUser *user)
    : registeredCollection(collection), currentUser(user)
{
    ui = new RentalBicycleUI(this);
}
RentalBicycleUI *RentalBicycleControl::getUI()
{
    return ui;
}
array<string, 2> RentalBicycleControl::rentalBicycle(string bicycleId)
{
    Bicycle *bicycle = registeredCollection->getBicycleById(bicycleId);
    User *user = currentUser->getCurrentUser();
    user->addRentedBicycle(bicycle);
    return bicycle->getBicycleInfo();
}