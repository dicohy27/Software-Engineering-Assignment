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
vector<array<string, 2>> BicycleCollection::getAllBicycleInfos()
{
    vector<array<string, 2>> ret;
    for (int i = 0; i < bicycleCount; i++)
    {
        auto item = bicycles[i]->getBicycleInfo();
        ret.push_back(item);
    }
    return ret;
}