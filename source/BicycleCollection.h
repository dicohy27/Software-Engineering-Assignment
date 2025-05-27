#pragma once
#include <string>
#include <vector>
#include "Bicycle.h"
using namespace std;
class Bicycle;
class BicycleCollection // BicycleCollection class that manages a collection of bicycles
{
    Bicycle *bicycles[100];
    int bicycleCount = 0;

public:
    void addNewBicycle(Bicycle *newBicycle); // Adds a new bicycle to the collection
    Bicycle *getBicycleById(string id);      // Retrieves a bicycle by its ID
    Bicycle **getBicycles();                 // Returns an array of pointers to all bicycles in the collection
    int getBicycleCount();                   // Returns the count of bicycles in the collection
};