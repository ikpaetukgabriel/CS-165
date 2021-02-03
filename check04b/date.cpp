/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
 ********************************************************************/
#include "date.h"

// Put your method bodies here...
#include <iostream>
#include <iomanip>
using namespace std;

void Date ::set(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void Date ::displayAmerican()
{
    cout << month
         << "/"
         << day
         << "/"
         << year
         << endl;
}

void Date ::displayEuropean()
{
    cout << day
         << "/"
         << month
         << "/"
         << year
         << endl;
}

void Date ::displayISO()
{
    cout << year
         << "-"
         << month
         << "-"
         << day
         << endl;
}