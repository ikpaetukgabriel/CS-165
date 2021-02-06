/***************************************************************
 * File: oredr.cpp
 * Author: Gabriel Ikpaetuk
 * Purpose: Contains the implementation of the Order class
 ***************************************************************/

#include "order.h"

// Put your the method bodies for your order class here

/***************************************************************
 * ADDRESS CLASS DEFAULT CONSTRUCTOR
 ***************************************************************/
Order::Order()
{
    setQuantity(0);
    setProduct(Product());
    setCustomer(Customer());
}
/***************************************************************
 * ADDRESS CLASS NON-DEFAULT CONSTRUCTOR
 ***************************************************************/
Order::Order(Product productInput, int quantityInput, Customer customerInput)
{
    setQuantity(quantityInput);
    setProduct(productInput);
    setCustomer(customerInput);
}

/***************************************************************
 * GETPRODUCT
 * Purpose: Gets the value of Product, the private member class
 ***************************************************************/
Product Order::getProduct() const
{
    return product;
}

/***************************************************************
 * SETPRODUCT
 * Purpose: Sets, Product, the private member class 
 ***************************************************************/
void Order::setProduct(Product productInput)
{
    product = productInput;
}

/***************************************************************
 * GETQUANTITY
 * Purpose: Gets the value of quantity, the private member 
 *          variable
 ***************************************************************/
int Order::getQuantity() const
{
    return quantity;
}

/***************************************************************
 * SETQUANTITY
 * Purpose: Sets, quantity, the private member variable 
 ***************************************************************/
void Order::setQuantity(int quantityInput)
{
    quantity = quantityInput;
}

/***************************************************************
 * GETCUSTOMER
 * Purpose: Gets the value of Customer, the private member class
 ***************************************************************/
Customer Order::getCustomer() const
{
    return customer;
}

/***************************************************************
 * SETCUSTOMER
 * Purpose: Sets, Customer, the private member class 
 ***************************************************************/
void Order::setCustomer(Customer customerInput)
{
    customer = customerInput;
}

/***************************************************************
 * GETSHIPPINGZIP
 * Purpose: Gets the value of Customer zip
 ***************************************************************/
string Order::getShippingZip() const
{
    return getCustomer().getAddress().getZip();
}

/***************************************************************
 * GETTOTALPRICE
 * Purpose: Gets the product total price
 ***************************************************************/
double Order::getTotalPrice() const
{
    return getProduct().getTotalPrice() * getQuantity();
}

/***************************************************************
 * DISPLAYSHIPPINGLABEL
 * Purpose: Displays customer's shipping label
 ***************************************************************/
void Order::displayShippingLabel() const
{
    getCustomer().display();
}

/***************************************************************
 * DISPLAYINFORMATION
 * Purpose: Displays customer details, product details, and 
 *          order total price
 ***************************************************************/
void Order::displayInformation() const
{
    cout << getCustomer().getName() << endl;
    cout << getProduct().getName() << endl;
    cout << "Total Price: "
         << "$" << getTotalPrice() << endl;
}