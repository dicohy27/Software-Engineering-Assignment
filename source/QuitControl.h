#pragma once
#include "QuitUI.h"
#include <cstdlib>
class QuitUI;
class QuitControl
{
    QuitUI *ui;

public:
    QuitControl();
    QuitUI *getUI();
    void quit();
};
