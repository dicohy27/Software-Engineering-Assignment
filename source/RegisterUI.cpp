#include "RegisterUI.h"

RegisterUI::RegisterUI(RegisterControl *control) : control(control) {}
void RegisterUI::createNewUser()
{
    string id, password, phoneNumber;
    cin >> id >> password >> phoneNumber;
    control->createNewUser(id, password, phoneNumber);
    cout << "1.1. 회원가입" << endl
         << "\> ";
    cout << id << ' ' << password << ' ' << phoneNumber << endl;
    cout << endl;
}