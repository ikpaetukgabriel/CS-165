#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <iomanip>
#include <string>
#include <iomanip>
#include <ios>    // To get stream size
#include <limits> // To get numeric limits
using namespace std;

class Product
{
private:
    std::string name;
    std::string description;
    double weight;
    double basePrice;

   

public:
    void prompt();

    double getSalesTax();

    double getShippingCost();

    double getTotalPrice();

    void displayAdvertising();

    void displayInventory();

    void displayReceipt();
};

#endif