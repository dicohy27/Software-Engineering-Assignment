#include "Bicycle.h"
Bicycle::Bicycle(string id, string productName) : id(id), productName(productName) {}
bool Bicycle::isEqualId(string id)
{
    return this->id == id;
}
array<string, 2> Bicycle::getBicycleInfo()
{
    return {id, productName};
}