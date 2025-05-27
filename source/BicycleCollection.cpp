#include "BicycleCollection.h"
void BicycleCollection::addNewBicycle(Bicycle *newBicycle)
{
    if (bicycleCount < 100)
    {
        bicycles[bicycleCount++] = newBicycle;
    }
}
Bicycle *BicycleCollection::getBicycleById(string id)
{
    for (int i = 0; i < bicycleCount; ++i)
    {
        if (bicycles[i]->isEqualId(id))
        {
            return bicycles[i];
        }
    }
    return nullptr; // Return nullptr if no bicycle with the given id is found
}
Bicycle **BicycleCollection::getBicycles()
{
    return bicycles;
}
int BicycleCollection::getBicycleCount()
{
    return bicycleCount;
}