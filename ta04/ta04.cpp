#include <iostream>
#include <string>
#include "rational.h"
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
    Rational rational;

    int numerator;
    int denominator;

    cout << "Numerator: ";
    cin >> numerator;

    cout << "Denominator: ";
    cin >> denominator;

    cout << endl;

    rational.set(numerator, denominator);
    rational.display();
    cout << endl;
    rational.displayDecimal();
    cout << endl;
    rational.multiplyBy(10,10);
    rational.displayDecimal();

    return 0;
}