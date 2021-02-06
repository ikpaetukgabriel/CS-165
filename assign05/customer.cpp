/***************************************************************
 * File: customer.cpp
 * Author: Gabriel Ikpaetuk
 * Purpose: Contains the implementation of the Customer class
 ***************************************************************/

#include "customer.h"

// Put the method bodies for your customer class here

/***************************************************************
 * CUSTOMER CLASS DEFAULT CONSTRUCTOR
 ***************************************************************/
Customer ::Customer()
{
    setName("unspecified");
    setAddress(Address());
}

/***************************************************************
 * ADDRESS CLASS NON-DEFAULT CONSTRUCTOR
 ***************************************************************/
Customer ::Customer(string nameInput, Address addressInput)
{
    setName(nameInput);
    setAddress(addressInput);
}

/***************************************************************
 * SETNAME
 * Purpose: Sets, name, the private member variable 
 ***************************************************************/
void Customer ::setName(string nameInput)
{
    name = nameInput;
}

/***************************************************************
 * GETNAME
 * Purpose: Gets the value of name, the private member variable 
 ***************************************************************/
string Customer ::getName() const
{
    return name;
}

/***************************************************************
 * SETADDRESS
 * Purpose: Sets, Address, the private member class 
 ***************************************************************/
void Customer ::setAddress(Address addressInput)
{
    address = addressInput;
}

/***************************************************************
 * GETADDRESS
 * Purpose: Gets the value of Address, the private member class
 ***************************************************************/
Address Customer ::getAddress() const
{
    return address;
}

/***************************************************************
 * DISPLAY
 * Purpose: Displays the customer details and address details 
 ***************************************************************/
void Customer ::display() const
{
    cout << getName() << endl;
    address.display();
}