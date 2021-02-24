/*******************
 * smartphone.cpp
 *******************/

#include "smartphone.h"

// TODO: Put your SmartPhone methods here
void SmartPhone::prompt()
{
    promptNumber();
    cout << "Email: ";
    cin >> email;
}

void SmartPhone::display()
{
    Phone::display();
    cout << email;
    cout << endl;
}