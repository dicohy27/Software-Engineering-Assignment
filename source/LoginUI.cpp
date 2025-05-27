#include "LoginUI.h"

LoginUI::LoginUI(LoginControl *control) : control(control) {}
void LoginUI::login()
{
    string id, password;
    cin >> id >> password;
    control->login(id, password);
    cout << id << ' ' << password << endl;
};