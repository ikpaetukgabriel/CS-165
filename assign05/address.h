// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>  // class work
#include <string>    // input output
using namespace std; // standard use of libs

// Put your Address class here
class Address
{

    //Private member variables
private:
    string street;
    string city;
    string state;
    string zip;

public:
    // Address class Constructors
    Address();
    Address(string streetInput, string cityInput, string stateInput, string zipInput);

    void setStreet(string streetInput);
    string getStreet() const;

    void setCity(string cityInput);
    string getCity() const;

    void setState(string stateInput);
    string getState() const;

    void setZip(string zip);
    string getZip() const;

    void display() const;
};
#endif
