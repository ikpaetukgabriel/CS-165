#include <iostream>
#include <iomanip>
#include "rational.h"
using namespace std;

void Rational ::set(int n, int d)
{
    top = n;
    bottom = d;
}

void Rational ::display()
{
    cout << top
         << "/"
         << bottom
         << endl;
}

void Rational ::displayDecimal()
{
    if (top>bottom){
        int wholeNumber = top / bottom;
        int remainder = top % bottom;
        
        cout << wholeNumber
            << " "
            << remainder
            << "/"
            << bottom;
    }
    else{
        cout << (float)top / bottom;
        }
}


void Rational :: multiplyBy( int n2, int d2){
    top = top * n2;
    bottom = bottom * d2;
}

void Rational :: reduce( int rn, int rd){
    
}