#include "point.h"

#include <iostream>
using namespace std;

Point ::Point()
{
   setX(5);
   setY(5);
}

Point ::Point(int xInput, int yInput)
{
   setX(xInput);
   setY(yInput);
}

void Point ::setX(int xInput)
{
   if (xInput < 0)
   {
      x = 1;
   }
   else if (xInput > 10)
   {
      x = 10;
   }
   else
   {
      x = xInput;
   }
}

void Point ::setY(int yInput)
{
   if (yInput < 0)
   {
      y = 1;
   }
   else if (yInput > 10)
   {
      y = 10;
   }
   else
   {
      y = yInput;
   }
}

int Point ::getX() const
{
   return x;
}

int Point ::getY() const
{
   return y;
}
/******************************************
 * Function: display
 * Purpose: Displays the point
 ******************************************/
void Point ::display() const
{
   // Note: We could just use x and y here and not the getters
   // because it's a member function. But this will force you
   // to deal with const :-)...

   cout << "(" << getX() << ", " << getY() << ")";
}
