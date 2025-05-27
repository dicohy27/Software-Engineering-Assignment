#pragma once
#include "QuitUI.h"
#include <cstdlib>
class QuitUI;
class QuitControl // QuitControl class that manages the quit operation of the application
{
    QuitUI *ui;

public:
    QuitControl();   // Constructor that initializes the QuitControl with a QuitUI
    QuitUI *getUI(); // Returns the UI associated with this control
    void quit();     // Method to handle the quit operation, which terminates the application
};
