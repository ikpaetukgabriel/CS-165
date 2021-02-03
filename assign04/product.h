/***************************************************************
 * File: product.h
 * Author: Gabriel Ikpaetuk
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

// put your class definition here
#include <iostream>     // class work
#include <string>       // input output
#include <iomanip>      // to use cout.setf and setw
#include <ios>          // To get stream size
#include <limits>       // To get numeric limits
using namespace std;    // standard use of libs

class Product
{

// Contains the class private properties
private:
    std::string name;
    std::string description;
    double weight;
    double basePrice;

   
// Contains the class private methods
public:

    // Prompts for product features
    void prompt();

    // Calculates salesTax
    double getSalesTax();

    // Calculates shipping cost
    double getShippingCost();

    // Calculates total price
    double getTotalPrice(); 

    // These three display function
    // displays product features/prices
    // as needed

    void displayAdvertising();
    void displayInventory();
    void displayReceipt();
};

#endif
