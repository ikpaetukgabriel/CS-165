// File: customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

// put your Customer class here

#include <iostream>  // class work
#include <string>    // input output
using namespace std; // standard use of libs

// Put your Address class here
class Customer
{
private:
    string name;
    Address address;

public:
    // Customer class Constructors
    Customer();
    Customer(string nameInput, Address addressInput);

    void setName(string nameInput);
    string getName() const;

    void setAddress(Address addressInput);
    Address getAddress() const;

    void display() const;
};
#endif
