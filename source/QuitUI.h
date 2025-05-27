#pragma once
#include "QuitControl.h"
class QuitControl;
class QuitUI // QuitUI class that provides the user interface for quitting the application
{
    QuitControl *control;

public:
    QuitUI(QuitControl *control); // Constructor that initializes the UI with a QuitControl
    void quit();                  // Method to handle quitting the application by reading input and calling the control's quit method
};
