#include "QuitUI.h"
QuitUI::QuitUI(QuitControl *control) : control(control) {}

void QuitUI::quit()
{
    cout << "6.1. 종료" << endl;
    control->quit();
}