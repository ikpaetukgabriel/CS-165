/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
   int dollars;
   int cents;

public:
   Money();
   Money(int d);
   Money(int d, int c);

   void prompt();
   void display() const;

   int getDollars() const;
   int getCents() const;

   void setDollars(int d);
   void setCents(int c);
};

#endif
