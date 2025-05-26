#pragma once
#include <string>
#include <vector>
#include "Bicycle.h"
using namespace std;
class Bicycle;
class BicycleCollection
{
    Bicycle *bicycles[100];
    int bicycleCount = 0;

public:
    void addNewBicycle(Bicycle *newBicycle);
    Bicycle *getBicycleById(string id);
    vector<array<string, 2>> getAllBicycleInfos();
};