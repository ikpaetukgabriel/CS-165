#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
private:
    int top;
    int bottom;

public:
    void set(int n, int d);

    void display();

    void displayDecimal();

    void multiplyBy( int n2, int d2);

    void reduce( int rn, int rd);
};

#endif