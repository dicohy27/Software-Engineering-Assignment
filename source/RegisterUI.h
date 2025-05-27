#pragma once
#include <string>
#include <iostream>
#include "RegisterControl.h"
using namespace std;
class RegisterControl;

class RegisterUI // RegisterUI class that provides the user interface for user registration
{
    RegisterControl *control;

public:
    RegisterUI(RegisterControl *control); // Constructor that initializes the UI with a RegisterControl

    void createNewUser(); // Method to handle user registration by reading input and calling the control's createNewUser method
};