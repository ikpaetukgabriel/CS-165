/***************************************************************
 * File: product.h
 * Author: Gabriel Ikpaetuk
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

// put your class definition here
#include <iostream>  // class work
#include <string>    // input output
#include <iomanip>   // to use cout.setf and setw
#include <ios>       // To get stream size
#include <limits>    // To get numeric limits
using namespace std; // standard use of libs

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
    Product();
    Product(string nameInput, string descriptionInput, double basePriceInput, double weightInput);

    void prompt();

    double getSalesTax();

    double getShippingCost();

    double getTotalPrice();

    void displayAdvertising();
    void displayInventory();
    void displayReceipt();

    string getName() const;
    void setName(string nameInput);

    string getDescription() const;
    void setDescription(string descriptionInput);

    double getBasePrice() const;
    void setBasePrice(double basePriceInput);

    double getWeight() const;
    void setWeight(double weightInput);
};

#endif
