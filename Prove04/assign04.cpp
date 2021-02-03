#include <iostream>
#include <string>
#include "product.h"
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
    Product product;
    double tax;
    double shippingCost;
    double totalPrice;

    product.prompt();
    cout << endl;
    tax = product.getSalesTax();
    shippingCost = product.getShippingCost();
    totalPrice = product.getTotalPrice();
    product.displayAdvertising();
    cout << endl;
    product.displayInventory();
    cout << endl;
    product.displayReceipt();
    cout << endl;

    return 0;
}