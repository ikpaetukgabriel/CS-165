/*********************************************************************
 * File: check04b.cpp
 * Purpose: contains the main method to exercise the Date class.
 *********************************************************************/

#include <iostream>
#include <string>
#include "date.h"
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
    // create a Date object
    Date date;

    int inputMonth;
    int inputDay;
    int inputYear;

    // prompt for month, day, year
    cout << "Month: ";
    cin >> inputMonth;

    cout << "Day: ";
    cin >> inputDay;

    cout << "Year: ";
    cin >> inputYear;

    cout << endl;

    // set its values
    date.set(inputMonth, inputDay, inputYear);

    // call each display function
    date.displayAmerican();
    date.displayEuropean();
    date.displayISO();

    return 0;
}