// File: customer.cpp

#include "customer.h"

// Put the method bodies for your customer class here
Customer ::Customer()
{
    setName("unspecified");
    setAddress(Address());
}
Customer ::Customer(string nameInput, Address addressInput)
{
    setName(nameInput);
    setAddress(addressInput);
}

void Customer ::setName(string nameInput)
{
    name = nameInput;
}
string Customer ::getName() const
{
    return name;
}

void Customer ::setAddress(Address addressInput)
{
    address = addressInput;
}
Address Customer ::getAddress() const
{
    return address;
}

void Customer ::display() const
{
    cout << getName() << endl;
    address.display();
}