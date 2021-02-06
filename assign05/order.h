/***************************************************************
 * File: order.h
 * Author: Gabriel Ikpaetuk
 * Purpose: Contains the definition of the Order class
 ***************************************************************/

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"

#include <iostream>  // class work
#include <string>    // input output
using namespace std; // standard use of libs
// Put your Order class here

/***************************************************************
 * ORDER CLASS
 * Purpose: Contains the necessary order details
 ***************************************************************/
class Order
{
private:
    Product product;
    int quantity;
    Customer customer;

public:
    //Constructors
    Order();
    Order(Product productInput, int quantityInput, Customer customerInput);

    //Gets and sets Order class members
    Product getProduct() const;
    void setProduct(Product productInput);

    int getQuantity() const;
    void setQuantity(int quantityInput);

    Customer getCustomer() const;
    void setCustomer(Customer customerInput);

    string getShippingZip() const;

    double getTotalPrice() const;

    //Functions handling display
    void displayShippingLabel() const;

    void displayInformation() const;
};
#endif
