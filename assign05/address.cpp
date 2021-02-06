/***************************************************************
 * File: address.cpp
 * Author: Gabriel Ikpaetuk
 * Purpose: Contains the implementation of the Address class
 ***************************************************************/

#include "address.h"

// Put your method bodies for the address class here

/***************************************************************
 * ADDRESS CLASS DEFAULT CONSTRUCTOR
 ***************************************************************/
Address ::Address()
{
    setStreet("unknown");
    setZip("00000");
    setCity("");
    setState("");
}

/***************************************************************
 * ADDRESS CLASS NON-DEFAULT CONSTRUCTOR
 ***************************************************************/
Address ::Address(string streetInput, string cityInput, string stateInput, string zipInput)
{
    setStreet(streetInput);
    setZip(zipInput);
    setCity(cityInput);
    setState(stateInput);
}

/***************************************************************
 * SETSTREET
 * Purpose: Sets, street, the private member variable 
 ***************************************************************/
void Address ::setStreet(string streetInput)
{
    street = streetInput;
}

/***************************************************************
 * GETSTREET
 * Purpose: Gets the value of street, the private member variable 
 ***************************************************************/
string Address ::getStreet() const
{
    return street;
}

/***************************************************************
 * SETCITY
 * Purpose: Sets city, the private member variable 
 ***************************************************************/
void Address ::setCity(string cityInput)
{
    city = cityInput;
}

/***************************************************************
 * GETCITY
 * Purpose: Gets the value of city, the private member variable 
 ***************************************************************/
string Address ::getCity() const
{
    return city;
}

/***************************************************************
 * SETSTATE
 * Purpose: Sets state, the private member variable 
 ***************************************************************/
void Address ::setState(string stateInput)
{
    state = stateInput;
}

/***************************************************************
 * GETSTATE
 * Purpose: Gets the value of state, the private member variable 
 ***************************************************************/
string Address ::getState() const
{
    return state;
}

/***************************************************************
 * SETZIP
 * Purpose: Sets zip, the private member variable 
 ***************************************************************/
void Address ::setZip(string zipInput)
{
    zip = zipInput;
}

/***************************************************************
 * GETZIP
 * Purpose: Gets the value of zip, the private member variable 
 ***************************************************************/
string Address ::getZip() const
{
    return zip;
}

/***************************************************************
 * DISPLAY
 * Purpose: Displays the full address: street, city, state, zip 
 ***************************************************************/
void Address ::display() const
{
    cout << getStreet() << endl;
    cout << getCity() << ", ";
    cout << getState() << " ";
    cout << getZip() << endl;
}