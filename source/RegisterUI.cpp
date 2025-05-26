#include "RegisterUI.h"

RegisterUI::RegisterUI(RegisterControl *control) : control(control) {}
void RegisterUI::createNewUser()
{
    string id, password, phoneNumber;
    cin >> id >> password >> phoneNumber;
    control->createNewUser(id, password, phoneNumber);
    cout << id << ' ' << password << ' ' << phoneNumber << endl;
}