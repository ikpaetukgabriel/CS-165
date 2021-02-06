// File: address.cpp

#include "address.h"

// Put your method bodies for the address class here

Address ::Address()
{
    setStreet("unknown");
    setZip("00000");
    setCity("");
    setState("");
}

Address ::Address(string streetInput, string cityInput, string stateInput, string zipInput)
{
    setStreet(streetInput);
    setZip(zipInput);
    setCity(cityInput);
    setState(stateInput);
}

void Address ::setStreet(string streetInput)
{
    street = streetInput;
}

string Address ::getStreet() const
{
    return street;
}

void Address ::setCity(string cityInput)
{
    city = cityInput;
}

string Address ::getCity() const
{
    return city;
}

void Address ::setState(string stateInput)
{
    state = stateInput;
}
string Address ::getState() const
{
    return state;
}

void Address ::setZip(string zipInput)
{
    zip = zipInput;
}

string Address ::getZip() const
{
    return zip;
}

void Address ::display() const
{
    cout << getStreet() << endl;
    cout << getCity() << ", ";
    cout << getState() << " ";
    cout << getZip() << endl;
}