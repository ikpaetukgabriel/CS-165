/*****************************************************
 * File: pair.h
 *
 * Purpose: Defines a Pair template class that can hold
 *   two items of arbitrary data types.
 ******************************************************/

#ifndef PAIR_H
#define PAIR_H

#include <iostream>
using namespace std;

// TODO: Fill in this class
// Put all of your method bodies right in this file

template <typename T1, typename T2>
class Pair
{
private:
    T1 first;
    T2 second;

public:
    //Getters
    T1 getFirst() { return first; }
    T2 getSecond() { return second; }

    //Setters
    void setFirst(T1 value) { this->first = value; }
    void setSecond(T2 value) { this->second = value; }

    void display() { cout << first << " - " << second; }
};
#endif // PAIR_H
