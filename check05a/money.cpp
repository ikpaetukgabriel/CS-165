/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money ::prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: getDollars
 * Purpose: gets the value of the private variable dollars.
 ****************************************************************/
int Money ::getDollars() const
{
   return dollars;
}

/*****************************************************************
 * Function: getCents
 * Purpose: gets the value of the private variable cents.
 ****************************************************************/
int Money ::getCents() const
{
   return cents;
}

/*****************************************************************
 * Function: setDollars
 * Purpose: sets the value of the private variable dollars.
 ****************************************************************/
void Money ::setDollars(int d)
{
   if (d < 0)
   {
      dollars = d * -1;
   }
   else
   {
      dollars = d;
   }
}

/*****************************************************************
 * Function: setCents
 * Purpose: gets the value of the private variable cents.
 ****************************************************************/
void Money ::setCents(int c)
{
   if (c < 0)
   {
      cents = c * -1;
   }
   else
   {
      cents = c;
   }
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money ::display() const
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}
