#include "LoginUI.h"

LoginUI::LoginUI(LoginControl *control) : control(control) {}
void LoginUI::login()
{
    string id, password;
    cin >> id >> password;
    control->login(id, password);
    cout << "2.1. 로그인" << endl
         << "> ";
    cout << id << ' ' << password << endl;
    cout << endl;
};