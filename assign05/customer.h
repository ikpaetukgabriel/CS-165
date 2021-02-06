/***************************************************************
 * File: customer.h
 * Author: Gabriel Ikpaetuk
 * Purpose: Contains the definition of the Customer class
 ***************************************************************/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

// put your Customer class here

#include <iostream>  // class work
#include <string>    // input output
using namespace std; // standard use of libs

/***************************************************************
 * CUSTOMER CLASS
 * Purpose: Contains the necessary customer details
 ***************************************************************/
class Customer
{
private:
    string name;
    Address address;

public:
    // Customer class Constructors
    Customer();
    Customer(string nameInput, Address addressInput);

    //Gets and sets the value of class member
    void setName(string nameInput);
    string getName() const;

    void setAddress(Address addressInput);
    Address getAddress() const;

    //Handles Customer details display
    void display() const;
};
#endif
