#pragma once
#include "QuitControl.h"
class QuitControl;
class QuitUI
{
    QuitControl *control;

public:
    QuitUI(QuitControl *control);
    void quit();
};
