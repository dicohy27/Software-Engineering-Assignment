#include "QuitUI.h"
QuitUI::QuitUI(QuitControl *control) : control(control) {}

void QuitUI::quit()
{
    control->quit();
}