// File: order.cpp

#include "order.h"

// Put your the method bodies for your order class here
Order::Order()
{
    setQuantity(0);
    setProduct(Product());
    setCustomer(Customer());
}
Order::Order(Product productInput, int quantityInput, Customer customerInput)
{
    setQuantity(quantityInput);
    setProduct(productInput);
    setCustomer(customerInput);
}

Product Order::getProduct() const
{
    return product;
}
void Order::setProduct(Product productInput)
{
    product = productInput;
}

int Order::getQuantity() const
{
    return quantity;
}
void Order::setQuantity(int quantityInput)
{
    quantity = quantityInput;
}

Customer Order::getCustomer() const
{
    return customer;
}
void Order::setCustomer(Customer customerInput)
{
    customer = customerInput;
}

string Order::getShippingZip() const
{
    return getCustomer().getAddress().getZip();
}

double Order::getTotalPrice() const
{
    return getProduct().getTotalPrice() * getQuantity();
}

void Order::displayShippingLabel() const
{
    getCustomer().display();
}

void Order::displayInformation() const
{
    cout << getCustomer().getName() << endl;
    cout << getProduct().getName() << endl;
    cout << "Total Price: "
         << "$" << getTotalPrice() << endl;
}