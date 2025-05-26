#pragma once
#include <string>
#include <array>
using namespace std;
class Bicycle
{
    string id;
    string productName;

public:
    Bicycle(string id, string productName);
    bool isEqualId(string id);
    array<string, 2> getBicycleInfo();
};