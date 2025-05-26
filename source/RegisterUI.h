#pragma once
#include <string>
#include <iostream>
#include "RegisterControl.h"
using namespace std;
class RegisterControl;

class RegisterUI
{
    RegisterControl *control;

public:
    RegisterUI(RegisterControl *control);

    void createNewUser();
};