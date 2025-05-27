#include "QuitControl.h"
QuitControl::QuitControl()
{
    ui = new QuitUI(this);
}
QuitUI *QuitControl::getUI()
{
    return ui;
}
void QuitControl::quit()
{
    exit(0);
}