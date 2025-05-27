#pragma once
#include <string>
#include <array>
using namespace std;
class Bicycle // Bicycle class representing a bicycle with an ID and product name
{
    string id;
    string productName;

public:
    Bicycle(string id, string productName); // Constructor that initializes the bicycle with an ID and product name
    bool isEqualId(string id);              // Checks if the bicycle's ID matches the given ID
    array<string, 2> getBicycleInfo();      // Returns an array containing the bicycle's ID and product name
};