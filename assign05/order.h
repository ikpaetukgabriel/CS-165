// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"

// Put your Order class here
#include <iostream>  // class work
#include <string>    // input output
using namespace std; // standard use of libs

class Order
{
private:
    Product product;
    int quantity;
    Customer customer;

public:
    Order();
    Order(Product productInput, int quantityInput, Customer customerInput);

    Product getProduct() const;
    void setProduct(Product productInput);

    int getQuantity() const;
    void setQuantity(int quantityInput);

    Customer getCustomer() const;
    void setCustomer(Customer customerInput);

    string getShippingZip() const;

    double getTotalPrice() const;

    void displayShippingLabel() const;

    void displayInformation() const;
};
#endif
